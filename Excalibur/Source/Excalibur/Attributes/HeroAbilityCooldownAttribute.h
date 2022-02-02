// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "HeroAbilityCooldownAttribute.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroAbilityCooldownAttribute : public UAttributeSet
{
	GENERATED_BODY()

public:
	UHeroAbilityCooldownAttribute();

	// Respond to changes to an Attribute's Current Value before changes happen.
	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

public:
	// Cooldown Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Cooldown|Attributes")
	FGameplayAttributeData PlayerGlobalCooldownMultiplier;
	ATTRIBUTE_ACCESSORS(UHeroAbilityCooldownAttribute, PlayerGlobalCooldownMultiplier);
};
