// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "King_AttributeSet.generated.h"

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
class KING_API UKing_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UKing_AttributeSet();

	// AttributeSet Overrides
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	UPROPERTY(BlueprintReadOnly, Category = "Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, Health)

	// MaxHealth is its own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category = "Health")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, MaxHealth)

	// Health regen rate will passively increase Health every second
	UPROPERTY(BlueprintReadOnly, Category = "Health")
	FGameplayAttributeData HealthRegenRate;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, HealthRegenRate)

	// Current Mana, used to execute special abilities. Capped by MaxMana.
	UPROPERTY(BlueprintReadOnly, Category = "Mana")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, Mana)

	// MaxMana is its own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category = "Mana")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, MaxMana)

	// Mana regen rate will passively increase Mana every second
	UPROPERTY(BlueprintReadOnly, Category = "Mana")
	FGameplayAttributeData ManaRegenRate;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, ManaRegenRate)

	// Current stamina, used to execute special abilities. Capped by MaxStamina.
	UPROPERTY(BlueprintReadOnly, Category = "Stamina")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, Stamina)

	// MaxStamina is its own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category = "Stamina")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, MaxStamina)

	// Stamina regen rate will passively increase Stamina every second
	UPROPERTY(BlueprintReadOnly, Category = "Stamina")
	FGameplayAttributeData StaminaRegenRate;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, StaminaRegenRate)

	// Armor reduces the amount of damage done by attackers
	UPROPERTY(BlueprintReadOnly, Category = "Armor")
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, Armor)

	// Damage is a meta attribute used by the DamageExecution to calculate final damage, which then turns into -Health
	// Temporary value that only exists on the Server. Not replicated.
	UPROPERTY(BlueprintReadOnly, Category = "Damage")
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, Damage)

	// MoveSpeed affects how fast characters can move.
	UPROPERTY(BlueprintReadOnly, Category = "MoveSpeed")
	FGameplayAttributeData MoveSpeed;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, MoveSpeed)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData MovementMultiplier;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, MovementMultiplier);

	// Jump Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData JumpHeight;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, JumpHeight);

	// Jump Multiplier Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData JumpHeightMultiplier;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, JumpHeightMultiplier);

	UPROPERTY(BlueprintReadOnly, Category = "Character Level")
	FGameplayAttributeData CharacterLevel;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, CharacterLevel)

	// Air Multiplier Attribute
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player|Character|Attributes")
	FGameplayAttributeData AirControl;
	ATTRIBUTE_ACCESSORS(UKing_AttributeSet, AirControl);

protected:
	// Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes.
	// (i.e. When MaxHealth increases, Health increases by an amount that maintains the same percentage as before)
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute,
		float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);
};
