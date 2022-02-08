// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "HeroPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API AHeroPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AHeroPlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UHeroPlayerAttributeSet* GetAttributeSetBase() const;

	class UHeroAbilityCooldownAttribute* GetCooldownAttribute() const;

	void InitializeAttributes();
	void InitializeCooldownAttributes();

	FORCEINLINE bool GetIgnoreAbilityCooldown() { return bIgnoreAbilityCooldown; }
	FORCEINLINE bool GetIgnoreAbilityManaCost() { return bIgnoreAbilityManaCost; }
	FORCEINLINE bool GetIgnoreAbilityStaminaCost() { return bIgnoreAbilityStaminaCost; }

	void ToggleIgnoreAbilityCooldown(bool bToggle);
	void ToggleIgnoreAbilityManaCost(bool bToggle);
	void ToggleIgnoreAbilityStaminaCost(bool bToggle);
protected:
	// Ability System Componenet
	class UAbilitySystemComponent* AbilitySystemComponent;

	// Player Attributes
	class UHeroPlayerAttributeSet* AttributeSetBase;

	// Player Cooldown Attributes
	class UHeroAbilityCooldownAttribute* AttributeCooldown;

	// Player Attribute Table
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player|Abilities")
	class UDataTable* AttributeDataTable;

	// Player Attribute Table
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player|Abilities")
	class UDataTable* AttributeCooldownDataTable;

private:
	bool bIgnoreAbilityCooldown;
	bool bIgnoreAbilityManaCost;
	bool bIgnoreAbilityStaminaCost;
};
