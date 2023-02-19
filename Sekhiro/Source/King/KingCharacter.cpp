// Copyright Epic Games, Inc. All Rights Reserved.

#include "KingCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "GAS/King_AbilitySystemComponent.h"
#include "King.h"
#include "Component/Player/King_PlayerAbilityComponent.h"
#include "Component/Player/King_CombatComponent.h"
#include "King_Types.h"
#include "Component/Player/King_CharacterMovementComponent.h"
#include "GAS/King_AttributeSet.h"
#include "Character/King_PlayerState.h"

//////////////////////////////////////////////////////////////////////////
// AKingCharacter

AKingCharacter::AKingCharacter(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject.SetDefaultSubobjectClass<UKing_CharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
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

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Component
	PlayerAbilityComponent = CreateDefaultSubobject<UKing_PlayerAbilityComponent>(TEXT("PlayerAbilityComponent"));
	CombatComponent = CreateDefaultSubobject<UKing_CombatComponent>(TEXT("CombatComponent"));

	UKing_CharacterMovementComponent* MovementComponent = Cast<UKing_CharacterMovementComponent>(GetCharacterMovement());
	if (MovementComponent)
	{
		GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
		GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
		GetCharacterMovement()->JumpZVelocity = 600.f;
		GetCharacterMovement()->AirControl = 0.2f;
	}
}

void AKingCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AKing_PlayerState* PS = GetPlayerState<AKing_PlayerState>();
	if (PS)
	{
		AbilitySystemComponent = Cast<UKing_AbilitySystemComponent>(PS->GetAbilitySystemComponent());
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);

		PlayerAttributes = PS->GetAttributeSetBase();

		InitializePassiveAttributes();

		PlayerAbilityComponent->LoadAllGameplayAbilities();
	}
}

void AKingCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AKingCharacter::CombatAttack(const FName& InKey)
{
	NormalAttack(InKey);
}

void AKingCharacter::NormalAttack(const FName& InKey)
{
	CombatComponent->NormalAttack(InKey);
}

FSimpleCombatCheck* AKingCharacter::GetSimpleCombatInfo()
{
	return CombatComponent->GetSimpleCombatInfo();
}

UKing_CharacterMovementComponent* AKingCharacter::GetPlayerCharacterMovementComponent() const
{
	UKing_CharacterMovementComponent* MovementComponent = Cast<UKing_CharacterMovementComponent>(GetCharacterMovement());
	if (MovementComponent)
	{
		return MovementComponent;
	}

	return nullptr;
}

bool AKingCharacter::IsEnemyInFront()
{
	return CombatComponent->IsEnemyInFront();
}

UKing_CombatComponent* AKingCharacter::GetCombatComponent() const
{
	if (CombatComponent)
	{
		return CombatComponent;
	}
	return nullptr;
}

UKing_PlayerAbilityComponent* AKingCharacter::GetPlayerAbilityComponent() const
{
	if (PlayerAbilityComponent)
	{
		return PlayerAbilityComponent;
	}
	return nullptr;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AKingCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	/*PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);*/

	PlayerInputComponent->BindAxis("MoveForward", this, &AKingCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AKingCharacter::MoveRight);

	PlayerInputComponent->BindAction("LightAttack", IE_Pressed, this, &AKingCharacter::MouseLeftClick);
	PlayerInputComponent->BindAction("LightAttack", IE_Released, this, &AKingCharacter::MouseLeftClickReleased);
	PlayerInputComponent->BindAction("HeavyAttack", IE_Pressed, this, &AKingCharacter::MouseRightClick);
	PlayerInputComponent->BindAction("HeavyAttack", IE_Released, this, &AKingCharacter::MouseRightClickReleased);

	// Dash
	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &AKingCharacter::DashInput);
	PlayerInputComponent->BindAction("Dash", IE_Released, this, &AKingCharacter::DashEndInput);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AKingCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AKingCharacter::LookUpAtRate);

	AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"),
		FString("CancelTarget"), FString("EKingAbilityInputID"), static_cast<int32>(EKingAbilityInputID::Type::Confirm), static_cast<int32>(EKingAbilityInputID::Type::Cancel)));
}

void AKingCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AKingCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AKingCharacter::MoveForward(float Value)
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

void AKingCharacter::MoveRight(float Value)
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

void AKingCharacter::MouseLeftClick()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("MouseLeftClick"));
	
	GetSimpleCombatInfo()->Press();
	CombatComponent->SetIsAbilityCanceled(true);
	CombatComponent->SetIsInComboAttack(true);
}

void AKingCharacter::MouseRightClick()
{

}

void AKingCharacter::MouseLeftClickReleased()
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("MouseLeftClickReleased"));
	GetSimpleCombatInfo()->Released();
	CombatComponent->SetIsAbilityCanceled(false);
}

void AKingCharacter::MouseRightClickReleased()
{

}

void AKingCharacter::DashInput()
{
	CombatComponent->SetIsAbilityCanceled(true);
	// Check if is in combat
}

void AKingCharacter::DashEndInput()
{
	CombatComponent->SetIsAbilityCanceled(false);

}