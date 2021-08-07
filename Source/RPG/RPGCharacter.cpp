// Copyright Epic Games, Inc. All Rights Reserved.

#include "RPGCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "RPG/Controller/HeroCharacterMovementComponent.h"
#include "RPG/PlayerState/HeroPlayerState.h"
#include "RPG/Attributes/HeroPlayerAttributeSet.h"
#include "RPG/Controller/HeroPlayerController.h"

//////////////////////////////////////////////////////////////////////////
// ARPGCharacter

ARPGCharacter::ARPGCharacter(const class FObjectInitializer& InitializerObject) :
	Super(InitializerObject.SetDefaultSubobjectClass<UHeroCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;


	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	UHeroCharacterMovementComponent* MovementComponent = Cast<UHeroCharacterMovementComponent>(GetCharacterMovement());
	if (MovementComponent)
	{
		// Configure character movement
		MovementComponent->bOrientRotationToMovement = true; // Character moves in the direction of input...	
		MovementComponent->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
		//MovementComponent->JumpZVelocity = 600.0f;
		//MovementComponent->AirControl = 0.2f;
	}

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

// Only called on the server
// For player controlled characters where the ASC lives on the PlayerState, typically initialize the server in the Pawn's PossessedBy function.
void ARPGCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	UE_LOG(LogTemp, Warning, TEXT("Possessed"));

	AHeroPlayerState* PS = GetPlayerState<AHeroPlayerState>();
	if (PS)
	{
		// Set ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystemComponent = Cast<UAbilitySystemComponent>(PS->GetAbilitySystemComponent());
		
		// AI won't have PlayerControllers so we can init again here just to be sure.
		// No harm in initing twice for heroes that have PlayerControllers.
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);

		PlayerAttributes = PS->GetAttributeSetBase();
		PS->InitializeAttributes();

		ApplyDefaultAbilities();

		// Initialize character movement component on Possed + call SetNewJumpZVelocity and SetNewAirControl
		UHeroCharacterMovementComponent* MovementComponent = Cast<UHeroCharacterMovementComponent>(GetCharacterMovement());
		if (MovementComponent)
		{
			// Configure character movement
			MovementComponent->bOrientRotationToMovement = true; // Character moves in the direction of input...	
			MovementComponent->SetNewJumpZVelocity(MovementComponent->JumpZVelocity);
			MovementComponent->SetNewAirControl(MovementComponent->AirControl);
		}
	}
}

void ARPGCharacter::ApplyDefaultAbilities()
{
	if (!DefaultAbilities)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaultAbility for %s. Please fill in the character's Blueprint."), *FString(__FUNCTION__), *GetName());
		return;
	}
	for (FHeroGameplayAbilityBindInfo Ability : DefaultAbilities->Abilities)
	{
		GrantAbilityToPlayer(FGameplayAbilitySpec(Ability.HeroAbilities, 1, static_cast<uint32>(Ability.Command), this));
	}
}

UAbilitySystemComponent* ARPGCharacter::GetAbilitySystemComponent() const
{
	if (AbilitySystemComponent.Get())
		return AbilitySystemComponent.Get();
	return nullptr;
}

float ARPGCharacter::GetMovementSpeed() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerMovementSpeed();
	}
	return 0.0f;
}

float ARPGCharacter::GetMovementSpeedBaseValue() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerMovementSpeedAttribute().GetGameplayAttributeData(PlayerAttributes.Get())->GetBaseValue();
	}
	return 0.0f;
}

float ARPGCharacter::GetMovementSpeedMultiplier() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerMovementMultiplier();
	}
	return 0.0f;
}

float ARPGCharacter::GetMovementSpeedMultiplierBase() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerMovementMultiplierAttribute().GetGameplayAttributeData(PlayerAttributes.Get())->GetBaseValue();
	}
	return 0.0f;
}

float ARPGCharacter::GetJumpHeight() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerJumpHeight();
	}
	return 0.0f;
}

float ARPGCharacter::GetJumpHeightMultiplier() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerJumpHeightMultiplier();
	}
	return 0.0f;
}

float ARPGCharacter::GetAirControl() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerAirControl();
	}
	return 0.0f;
}

void ARPGCharacter::GrantAbilityToPlayer(FGameplayAbilitySpec Ability)
{
	if(!AbilitySystemComponent.IsValid())
	{
		return;
	}
	if (!Ability.Ability)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Ability Not Granted for %s. Ability is not valid."), *FString(__FUNCTION__), *GetName());
		return;
	}
	AbilitySystemComponent->GiveAbility(Ability);
}

void ARPGCharacter::GrantAbilitiesToPlayer(TArray<FGameplayAbilitySpec> Abilities)
{
	if (!AbilitySystemComponent.IsValid())
	{
		return;
	}
	for (FGameplayAbilitySpec Ability : Abilities)
	{
		if (!Ability.Ability)
		{
			UE_LOG(LogTemp, Error, TEXT("%s() Ability Not Granted for %s. Ability is not valid--."), *FString(__FUNCTION__), *GetName());
			return;
		}
		else
		{
			AbilitySystemComponent->GiveAbility(Ability);
		}
	}
}

void ARPGCharacter::ShowHeroDebugMenu()
{
	AHeroPlayerController* PlayerController = Cast<AHeroPlayerController>(GetController());

	if (PlayerController)
	{
		PlayerController->ShowHeroDebug();
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ARPGCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	/*PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);*/

	PlayerInputComponent->BindAxis("MoveForward", this, &ARPGCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ARPGCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ARPGCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ARPGCharacter::LookUpAtRate);

	// Hero Debug Command L key
	PlayerInputComponent->BindAction("HeroDebugMenu", IE_Pressed, this, &ARPGCharacter::ShowHeroDebugMenu);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ARPGCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ARPGCharacter::TouchStopped);

	// Bind to AbilitySystemComponent
	AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"),
		FString("CancelTarget"), FString("EHeroAbilityInputID"), static_cast<int32>(EHeroAbilityInputID::Type::Confirm), static_cast<int32>(EHeroAbilityInputID::Type::Cancel)));
}


void ARPGCharacter::OnResetVR()
{
	// If RPG is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in RPG.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ARPGCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ARPGCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ARPGCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ARPGCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ARPGCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ARPGCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
