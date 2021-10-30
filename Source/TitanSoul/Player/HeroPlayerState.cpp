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
}

