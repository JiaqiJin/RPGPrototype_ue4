// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "RPGPrototype/Character/PlayerRPGCharacter.h"

UPlayerAttributeSet::UPlayerAttributeSet()
{

}

void UPlayerAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if (Attribute == GetMoveSpeedAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, 1000.0f);
	}

	// Health
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxHealthAttribute().GetNumericValue(this));
	}

	if (Attribute == GetMaxHealthAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.001f, 10000.0f);
	}

	// Mana
	if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.0f, GetMaxManaAttribute().GetNumericValue(this));
	}

	if (Attribute == GetMaxManaAttribute())
	{
		NewValue = FMath::Clamp<float>(NewValue, 0.001f, 10000.0f);
	}
}

void UPlayerAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}