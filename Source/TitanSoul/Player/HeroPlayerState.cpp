// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerState.h"
#include "../TitanSoulCharacter.h"
#include "../Attributes/HeroAttributeSet.h"
#include "../AbilitySystem/HeroAbilitySystemComponent.h"

AHeroPlayerState::AHeroPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UHeroAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Mixed mode means we only are replicated the GEs to ourself, not the GEs to simulated proxies. If another GDPlayerState (Hero) receives a GE,
	// we won't be told about it by the Server. Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSetBase = CreateDefaultSubobject<UHeroAttributeSet>(TEXT("AttributeSetBase"));

	// Set PlayerState's NetUpdateFrequency to the same as the Character.
	// Default is very low for PlayerStates and introduces perceived lag in the ability system.
	// 100 is probably way too high for a shipping game, you can adjust to fit your needs.
	NetUpdateFrequency = 50.0f;
}

// Implement IAbilitySystemInterface
UAbilitySystemComponent* AHeroPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UHeroAttributeSet* AHeroPlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
}

void AHeroPlayerState::InitializeAttributes()
{
	if (AbilitySystemComponent && AttributeDataTable)
	{
		const UAttributeSet* Attributes = AbilitySystemComponent->InitStats(UHeroAttributeSet::StaticClass(), AttributeDataTable);
	}
}

float AHeroPlayerState::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}

float AHeroPlayerState::GetMaxHealth() const
{
	return AttributeSetBase->GetMaxHealth();
}

float AHeroPlayerState::GetHealthRegenRate() const
{
	return AttributeSetBase->GetHealthRegenRate();
}

float AHeroPlayerState::GetMana() const
{
	return AttributeSetBase->GetMana();
}

float AHeroPlayerState::GetMaxMana() const
{
	return AttributeSetBase->GetMaxMana();
}

float AHeroPlayerState::GetManaRegenRate() const
{
	return AttributeSetBase->GetManaRegenRate();
}

float AHeroPlayerState::GetStamina() const
{
	return AttributeSetBase->GetStamina();
}

float AHeroPlayerState::GetMaxStamina() const
{
	return AttributeSetBase->GetMaxStamina();
}

float AHeroPlayerState::GetStaminaRegenRate() const
{
	return AttributeSetBase->GetStaminaRegenRate();
}

float AHeroPlayerState::GetArmor() const
{
	return AttributeSetBase->GetDefensePower();
}

float AHeroPlayerState::GetMoveSpeed() const
{
	return AttributeSetBase->GetPlayerMovementSpeed();
}

void AHeroPlayerState::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		// Attribute change callbacks, responding to Attribute Changes
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &AHeroPlayerState::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxHealthAttribute()).AddUObject(this, &AHeroPlayerState::MaxHealthChanged);
		HealthRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthRegenRateAttribute()).AddUObject(this, &AHeroPlayerState::HealthRegenRateChanged);
		ManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetManaAttribute()).AddUObject(this, &AHeroPlayerState::ManaChanged);
		MaxManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxManaAttribute()).AddUObject(this, &AHeroPlayerState::MaxManaChanged);
		ManaRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetManaRegenRateAttribute()).AddUObject(this, &AHeroPlayerState::ManaRegenRateChanged);
		StaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetStaminaAttribute()).AddUObject(this, &AHeroPlayerState::StaminaChanged);
		MaxStaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxStaminaAttribute()).AddUObject(this, &AHeroPlayerState::MaxStaminaChanged);
		StaminaRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetStaminaRegenRateAttribute()).AddUObject(this, &AHeroPlayerState::StaminaRegenRateChanged);
	}
}

void AHeroPlayerState::HealthChanged(const FOnAttributeChangeData& Data)
{
	float Health = Data.NewValue;

	ATitanSoulCharacter* Hero = Cast<ATitanSoulCharacter>(GetPawn());
	if (Hero)
	{
		UE_LOG(LogTemp, Warning, TEXT("Kawaii HealthChanged"));
	}
}

void AHeroPlayerState::MaxHealthChanged(const FOnAttributeChangeData& Data)
{

}

void AHeroPlayerState::HealthRegenRateChanged(const FOnAttributeChangeData& Data)
{
	
}

void AHeroPlayerState::ManaChanged(const FOnAttributeChangeData& Data)
{
	
}

void AHeroPlayerState::MaxManaChanged(const FOnAttributeChangeData& Data)
{

}

void AHeroPlayerState::ManaRegenRateChanged(const FOnAttributeChangeData& Data)
{
	
}

void AHeroPlayerState::StaminaChanged(const FOnAttributeChangeData& Data)
{
	
}

void AHeroPlayerState::MaxStaminaChanged(const FOnAttributeChangeData& Data)
{
	
}

void AHeroPlayerState::StaminaRegenRateChanged(const FOnAttributeChangeData& Data)
{
	
}
