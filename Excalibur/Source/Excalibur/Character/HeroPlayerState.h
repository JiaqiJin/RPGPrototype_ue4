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
};
