// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "HeroPlayerAttributeSet.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * Defines the set of all GameplayAttributes for your Games like health, etc.
 * Attributes are float values defined by the struct "FGameplayAttributeData"
 */
UCLASS()
class RPG_API UHeroPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	// Constructor
	UHeroPlayerAttributeSet();

	// Respond to changes to an Attribute's Current Value before changes happen.
	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

public:
	// Movement Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerMovementSpeed;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerMovementSpeed);

	// Movement Multiplier Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerMovementMultiplier;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerMovementMultiplier);

	// Jump Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerJumpHeight;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerJumpHeight);

	// Jump Multiplier Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerJumpHeightMultiplier;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerJumpHeightMultiplier);

	// Air Multiplier Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData PlayerAirControl;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, PlayerAirControl);

public:

	// Health Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, Health);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, MaxHealth);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData HealthRegeneration;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, HealthRegeneration);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData HealthRegenerationRate;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, HealthRegenerationRate);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData HealthRegenerationActivationDelay;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, HealthRegenerationActivationDelay);

public:

	// Damage Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (HideFromLevelInfos))
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, Damage);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (HideFromLevelInfos))
	FGameplayAttributeData WeaponDamageBonus;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, WeaponDamageBonus);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (HideFromLevelInfos))
	FGameplayAttributeData MagicDamageBonus;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, MagicDamageBonus);

public:
	// Level Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData HeroLevel;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, HeroLevel);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData HeroMaxLevel;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, HeroMaxLevel);
};
