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
class EXCALIBUR_API UHeroPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UHeroPlayerAttributeSet();

	// Respond to changes to an Attribute's Current Value before changes happen.
	void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	// Only triggers after changes to the BaseValue of an Attribute from an instant GameplayEffect
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
	FGameplayAttributeData HealthRegenerationRate;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, HealthRegenerationRate);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData HealthRegeneration;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, HealthRegeneration);

	// Mana Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, Mana);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, MaxMana);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData ManaRegeneration;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, ManaRegeneration);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData ManaRegenerationRate;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, ManaRegenerationRate);

	// Mana Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, Stamina);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, MaxStamina);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData StaminaRegeneration;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, StaminaRegeneration);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData StaminaRegenerationRate;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, StaminaRegenerationRate);

	// Level Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData HeroLevel;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, HeroLevel);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData HeroMaxLevel;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, HeroMaxLevel);

public:
	// Damage Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (HideFromLevelInfos))
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UHeroPlayerAttributeSet, Damage);
};
