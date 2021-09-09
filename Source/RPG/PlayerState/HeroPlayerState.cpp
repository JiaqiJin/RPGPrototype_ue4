// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "RPG/Attributes/HeroPlayerAttributeSet.h"
#include "RPG/Attributes/Cooldown/HeroCooldownAttributeSet.h"
#include "RPG/RPGCharacter.h"

AHeroPlayerState::AHeroPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	// ASCs are typically constructed in the OwnerActor's constructor and explicitly marked replicated.
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSetBase = CreateDefaultSubobject<UHeroPlayerAttributeSet>(TEXT("AttributeSetBase"));
	CooldownAttributeSetBase = CreateDefaultSubobject<UHeroCooldownAttributeSet>(TEXT("CooldownAttributeSetBase"));
}

void AHeroPlayerState::InitializeAttributes()
{
	if (AbilitySystemComponent && AttributeDataTable)
	{
		const UAttributeSet* Attributes = AbilitySystemComponent->InitStats(UHeroPlayerAttributeSet::StaticClass(), AttributeDataTable);
	}
}

void AHeroPlayerState::InitializeCooldownAttributes()
{
	if (AbilitySystemComponent && CooldownAttributeDataTable)
	{
		const UAttributeSet* Attributes = AbilitySystemComponent->InitStats(UHeroCooldownAttributeSet::StaticClass(), CooldownAttributeDataTable);
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

UHeroCooldownAttributeSet* AHeroPlayerState::GetCooldownAttributeSetBase() const
{
	return CooldownAttributeSetBase;
}

float AHeroPlayerState::GetMovementSpeed() const
{
	return AttributeSetBase->GetPlayerMovementSpeed();
}

float AHeroPlayerState::GetMovementSPeedMultiplier() const
{
	return AttributeSetBase->GetPlayerMovementMultiplier();
}

float AHeroPlayerState::GetPlayerJumpHeight() const
{
	return AttributeSetBase->GetPlayerJumpHeight();
}

float AHeroPlayerState::GetPlayerJumpHeightMultiplier() const
{
	return AttributeSetBase->GetPlayerJumpHeightMultiplier();
}

float AHeroPlayerState::GetPlayerAirControl() const
{
	return AttributeSetBase->GetPlayerAirControl();
}

void AHeroPlayerState::BeginPlay()
{
	Super::BeginPlay();
}

void AHeroPlayerState::ToggleIgnoreAbilityCooldown(bool bToggle)
{
	bIgnoreAbilityCooldown = bToggle;
}

void AHeroPlayerState::ToggleIgnoreAbilityManaCost(bool bToggle)
{
	bIgnoreAbilityManaCost = bToggle;
}