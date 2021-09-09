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
class RPG_API AHeroPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AHeroPlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UHeroPlayerAttributeSet* GetAttributeSetBase() const;
	class UHeroCooldownAttributeSet* GetCooldownAttributeSetBase() const;

	void InitializeAttributes();
	void InitializeCooldownAttributes();

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSPeedMultiplier() const;

	// Jump Attribute
	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetPlayerJumpHeight() const;
	
	// Jump Multiplier Attribute
	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetPlayerJumpHeightMultiplier() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetPlayerAirControl() const;
	
	FORCEINLINE bool GetIgnoreAbilityCooldown() { return bIgnoreAbilityCooldown; }
	FORCEINLINE bool GetIgnoreAbilityManaCost() { return bIgnoreAbilityManaCost; }

	void ToggleIgnoreAbilityCooldown(bool bToggle);
	void ToggleIgnoreAbilityManaCost(bool bToggle);
	
protected:
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UHeroPlayerAttributeSet* AttributeSetBase;

	UPROPERTY()
	class UHeroCooldownAttributeSet* CooldownAttributeSetBase;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player|Abilities")
	class UDataTable* AttributeDataTable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player|Cooldown")
	class UDataTable* CooldownAttributeDataTable;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	bool bIgnoreAbilityCooldown;
	bool bIgnoreAbilityManaCost;
};
