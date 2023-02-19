// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/King_PlayerState.h"
#include "GAS/King_AttributeSet.h"
#include "GAS/King_AbilitySystemComponent.h"

AKing_PlayerState::AKing_PlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UKing_AbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Mixed mode means we only are replicated the GEs to ourself, not the GEs to simulated proxies. If another GDPlayerState (Hero) receives a GE,
	// we won't be told about it by the Server. Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSetBase = CreateDefaultSubobject<UKing_AttributeSet>(TEXT("AttributeSetBase"));

}

UAbilitySystemComponent* AKing_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UKing_AttributeSet* AKing_PlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
}

bool AKing_PlayerState::IsAlive() const
{
	return GetHealth() > 0.0f;
}

float AKing_PlayerState::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}

float AKing_PlayerState::GetMaxHealth() const
{
	return AttributeSetBase->GetMaxHealth();
}

float AKing_PlayerState::GetHealthRegenRate() const
{
	return AttributeSetBase->GetHealthRegenRate();
}

float AKing_PlayerState::GetMana() const
{
	return AttributeSetBase->GetMana();
}

float AKing_PlayerState::GetMaxMana() const
{
	return AttributeSetBase->GetMaxMana();
}

float AKing_PlayerState::GetManaRegenRate() const
{
	return AttributeSetBase->GetManaRegenRate();
}

float AKing_PlayerState::GetStamina() const
{
	return AttributeSetBase->GetStamina();
}

float AKing_PlayerState::GetMaxStamina() const
{
	return AttributeSetBase->GetMaxStamina();
}

float AKing_PlayerState::GetStaminaRegenRate() const
{
	return AttributeSetBase->GetStaminaRegenRate();
}

float AKing_PlayerState::GetArmor() const
{
	return AttributeSetBase->GetArmor();
}

float AKing_PlayerState::GetMoveSpeed() const
{
	return AttributeSetBase->GetMoveSpeed();
}

int32 AKing_PlayerState::GetCharacterLevel() const
{
	return AttributeSetBase->GetCharacterLevel();
}
