// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCooldownAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "RPG/RPGCharacter.h"

UHeroCooldownAttributeSet::UHeroCooldownAttributeSet()
{

}

void UHeroCooldownAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	// This is called whenever attributes change, so for max health/mana we want to scale the current totals to match
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetPlayerGlobalCooldownMultiplierAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 1000.0f);
	}

	if (Attribute == GetPlayerFeatherFallAbilityCooldownMultiplierAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 1.0f, 10.0f);
	}
}

