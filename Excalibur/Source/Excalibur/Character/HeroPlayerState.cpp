// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Excalibur/Attributes/HeroPlayerAttributeSet.h"
#include "Excalibur/Attributes/HeroAbilityCooldownAttribute.h"
#include "Excalibur/Character/HeroPlayerCharacter.h"

AHeroPlayerState::AHeroPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	
	AttributeSetBase = CreateDefaultSubobject<UHeroPlayerAttributeSet>(TEXT("AttributeSetBase"));
	AttributeCooldown = CreateDefaultSubobject<UHeroAbilityCooldownAttribute>(TEXT("AttributeCooldown"));
}

void AHeroPlayerState::InitializeAttributes()
{
	if (AbilitySystemComponent && AttributeDataTable)
	{
		//UE_LOG(LogTemp, Warning, TEXT("InitializeAttributes"));
		const UAttributeSet* Attributes = AbilitySystemComponent->InitStats(UHeroPlayerAttributeSet::StaticClass(), AttributeDataTable);
	}
}

void AHeroPlayerState::InitializeCooldownAttributes()
{
	if (AbilitySystemComponent && AttributeCooldownDataTable)
	{
		const UAttributeSet* Attributes = AbilitySystemComponent->InitStats(UHeroAbilityCooldownAttribute::StaticClass(), AttributeCooldownDataTable);
	}
}

UAbilitySystemComponent* AHeroPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UHeroPlayerAttributeSet* AHeroPlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
}

UHeroAbilityCooldownAttribute* AHeroPlayerState::GetCooldownAttribute() const
{
	return AttributeCooldown;
}

void AHeroPlayerState::ToggleIgnoreAbilityCooldown(bool bToggle)
{
	bIgnoreAbilityCooldown = bToggle;
}

void AHeroPlayerState::ToggleIgnoreAbilityManaCost(bool bToggle)
{
	bIgnoreAbilityManaCost = bToggle;
}

void AHeroPlayerState::ToggleIgnoreAbilityStaminaCost(bool bToggle)
{
	bIgnoreAbilityStaminaCost = bToggle;
}