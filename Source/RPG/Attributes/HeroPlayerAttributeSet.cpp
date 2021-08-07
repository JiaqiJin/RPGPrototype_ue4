// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayerAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "RPG/RPGCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UHeroPlayerAttributeSet::UHeroPlayerAttributeSet()
{
	
}

// Respond to changes to an Attribute's Current Value before changes happen.
void UHeroPlayerAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	// This is called whenever attributes change, so for max health/mana we want to scale the current totals to match
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetPlayerMovementSpeedAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 1000.0f);
	}

	if (Attribute == GetPlayerMovementMultiplierAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 1.0f, 10.0f);
	}

	if (Attribute == GetPlayerJumpHeightAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 2000.0f);
	}

	if (Attribute == GetPlayerJumpHeightMultiplierAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 10.0f);
	}

	if (Attribute == GetPlayerAirControlAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 1.0f);
	}
}