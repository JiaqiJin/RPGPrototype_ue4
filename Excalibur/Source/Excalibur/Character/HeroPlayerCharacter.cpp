// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerCharacter.h"
#include "MovementComp/HeroCharacterMovementComponent.h"
#include "Excalibur/Component/HealthComponent.h"
#include "Excalibur/Component/ManaComponent.h"
#include "Excalibur/Component/StaminaComponent.h"
#include "MovementComp/HeroCharacterMovementComponent.h"
#include "Excalibur/Attributes/HeroPlayerAttributeSet.h"

// Sets default values
AHeroPlayerCharacter::AHeroPlayerCharacter(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject.SetDefaultSubobjectClass<UHeroCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	ManaComponent = CreateDefaultSubobject<UManaComponent>(TEXT("ManaComponent"));
	StaminaComponent = CreateDefaultSubobject<UStaminaComponent>(TEXT("StaminaComponent"));
}

// Called when the game starts or when spawned
void AHeroPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHeroPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHeroPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind to AbilitySystemComponent
	AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, 
		FGameplayAbilityInputBinds(FString("ConfirmTarget"),
		FString("CancelTarget"), FString("EHeroAbilityInputID"), 
		static_cast<int32>(EHeroAbilityInputID::Type::Confirm), static_cast<int32>(EHeroAbilityInputID::Type::Cancel)));
}

float AHeroPlayerCharacter::GetMovementSpeed() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerMovementSpeed();
	}
	return 0.0f;
}

float AHeroPlayerCharacter::GetMovementSpeedBaseValue() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerMovementSpeedAttribute().GetGameplayAttributeData(PlayerAttributes.Get())->GetBaseValue();
	}
	return 0.0f;
}

float AHeroPlayerCharacter::GetMovementSpeedMultiplier() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerMovementMultiplier();
	}
	return 0.0f;
}

float AHeroPlayerCharacter::GetMovementSpeedMultiplierBase() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerMovementMultiplierAttribute().GetGameplayAttributeData(PlayerAttributes.Get())->GetBaseValue();
	}
	return 0.0f;
}

float AHeroPlayerCharacter::GetJumpHeight() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerJumpHeight();
	}
	return 0.0f;
}

float AHeroPlayerCharacter::GetJumpHeightMultiplier() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerJumpHeightMultiplier();
	}
	return 0.0f;
}

float AHeroPlayerCharacter::GetAirControl() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetPlayerAirControl();
	}
	return 0.0f;
}

float AHeroPlayerCharacter::GetCurrentLevel() const
{
	if (PlayerAttributes.IsValid())
	{
		return PlayerAttributes->GetHeroLevel();
	}
	return 0.0f;
}
