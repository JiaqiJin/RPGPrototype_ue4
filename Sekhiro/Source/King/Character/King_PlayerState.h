// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "King_PlayerState.generated.h"

class UKing_AbilitySystemComponent;
class UKing_AttributeSet;

UCLASS()
class KING_API AKing_PlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:

	AKing_PlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	class UKing_AttributeSet* GetAttributeSetBase() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetHealthRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetMana() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetMaxMana() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetManaRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetMaxStamina() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetStaminaRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetArmor() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	float GetMoveSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	int32 GetCharacterLevel() const;

protected:
	UPROPERTY()
	UKing_AbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	UKing_AttributeSet* AttributeSetBase;

};
