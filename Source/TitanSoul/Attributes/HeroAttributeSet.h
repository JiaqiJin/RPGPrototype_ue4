// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "HeroAttributeSet.generated.h"

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
class TITANSOUL_API UHeroAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	// Constructor and overrides
	UHeroAttributeSet();

	// To respond to changes to an Attribute's CurrentValue before the change happens
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Health
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, MaxHealth);

	// Mana
	UPROPERTY(BlueprintReadOnly, Category = "Mana", ReplicatedUsing = OnRep_Mana)
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, Mana);

	UPROPERTY(BlueprintReadOnly, Category = "Mana", ReplicatedUsing = OnRep_MaxMana)
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, MaxMana);

	// Attack Power
	UPROPERTY(BlueprintReadOnly, Category = "Damage", ReplicatedUsing = OnRep_AttackPower)
	FGameplayAttributeData AttackPower;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, AttackPower);

	// Defense
	UPROPERTY(BlueprintReadOnly, Category = "Damage", ReplicatedUsing = OnRep_DefensePower)
	FGameplayAttributeData DefensePower;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, DefensePower);

	// Movement Speed
	UPROPERTY(BlueprintReadOnly, Category = "MoveSpeed", ReplicatedUsing = OnRep_MoveSpeed)
	FGameplayAttributeData MoveSpeed;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, MoveSpeed);

	// Damage
	UPROPERTY(BlueprintReadOnly, Category = "Damage");
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UHeroAttributeSet, Damage);

protected:
	// Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);

	// These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication
	UFUNCTION()
	virtual void OnRep_Health();

	UFUNCTION()
	virtual void OnRep_MaxHealth();

	UFUNCTION()
	virtual void OnRep_Mana();

	UFUNCTION()
	virtual void OnRep_MaxMana();

	UFUNCTION()
	virtual void OnRep_AttackPower();

	UFUNCTION()
	virtual void OnRep_DefensePower();

	UFUNCTION()
	virtual void OnRep_MoveSpeed();
};
