// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExcaliburCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Excalibur/Attributes/HeroPlayerAttributeSet.h"
#include "Excalibur/Attributes/HeroAbilityCooldownAttribute.h"
#include "Excalibur/Character/HeroPlayerState.h"
#include "Character/MovementComp/HeroCharacterMovementComponent.h"

//////////////////////////////////////////////////////////////////////////
// AExcaliburCharacter

AExcaliburCharacter::AExcaliburCharacter(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	Shield = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Shield"));
	Shield->SetupAttachment(GetMesh(), TEXT("Shield_2"));

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	Weapon->SetupAttachment(GetMesh(), TEXT("Sword_2"));
	
	UHeroCharacterMovementComponent* MovementComponent = Cast<UHeroCharacterMovementComponent>(GetCharacterMovement());
	if (MovementComponent)
	{
		GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
		GetCharacterMovement()->JumpZVelocity = 600.f;
		GetCharacterMovement()->AirControl = 0.2f;
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
}

// Only called on the Server. Calls before Server's AcknowledgePossession.
void AExcaliburCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	UE_LOG(LogTemp, Warning, TEXT("Possessed"));

	AHeroPlayerState* PS = GetPlayerState<AHeroPlayerState>();
	if(PS)
	{
		// Set ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystemComponent = Cast<UAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// AI won't have PlayerControllers so we can init again here just to be sure.
		// No harm in initing twice for heroes that have PlayerControllers.
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);

		PlayerAttributes = PS->GetAttributeSetBase();
		PS->InitializeAttributes();

		PlayerCooldownAttributes = PS->GetCooldownAttribute();
		PS->InitializeCooldownAttributes();

		ApplyDefaultAbilities();

		UHeroCharacterMovementComponent* MovementComponent = Cast<UHeroCharacterMovementComponent>(GetCharacterMovement());
		if(MovementComponent)
		{
			MovementComponent->SetJumpZVelocity(MovementComponent->JumpZVelocity);
		}

		//UE_LOG(LogTemp, Warning, TEXT("The integer value is: %f"), PlayerAttributes->GetPlayerJumpHeight());
	}
}

void AExcaliburCharacter::ApplyDefaultAbilities()
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

bool AExcaliburCharacter::IsHeroSprinting() const
{
	UHeroCharacterMovementComponent* MovementComponent = Cast<UHeroCharacterMovementComponent>(GetCharacterMovement());
	if (MovementComponent)
	{
		return MovementComponent->isSprinting;
	}

	return false;
}


//////////////////////////////////////////////////////////////////////////
// Getters

UAbilitySystemComponent* AExcaliburCharacter::GetAbilitySystemComponent() const
{
	if (AbilitySystemComponent.Get())
		return AbilitySystemComponent.Get();

	return nullptr;
}

UHeroCharacterMovementComponent* AExcaliburCharacter::GetHeroCharacterMovementComponent() const
{
	UHeroCharacterMovementComponent* MovementComponent = Cast<UHeroCharacterMovementComponent>(GetCharacterMovement());
	if (MovementComponent)
		return MovementComponent;

	return nullptr;
}

void AExcaliburCharacter::GrantAbilityToPlayer(FGameplayAbilitySpec Ability)
{
	if (!AbilitySystemComponent.IsValid())
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

void AExcaliburCharacter::GrantAbilitiesToPlayer(TArray<FGameplayAbilitySpec> Abilities)
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

//////////////////////////////////////////////////////////////////////////
// Input

void AExcaliburCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	/*PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);*/

	PlayerInputComponent->BindAxis("MoveForward", this, &AExcaliburCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AExcaliburCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AExcaliburCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AExcaliburCharacter::LookUpAtRate);
}

void AExcaliburCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AExcaliburCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AExcaliburCharacter::MoveForward(float Value)
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

void AExcaliburCharacter::MoveRight(float Value)
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
