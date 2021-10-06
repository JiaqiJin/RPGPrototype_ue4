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
class TITANSOUL_API AHeroPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AHeroPlayerState();

	// Implement IAbilitySystemInterface
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	class UHeroAttributeSet* GetAttributeSetBase() const;

	// Attribute Init
	void InitializeAttributes();

	// Getters for attributes
	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetHealthRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetMana() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetMaxMana() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetManaRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetMaxStamina() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetStaminaRegenRate() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetArmor() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Attributes")
	float GetMoveSpeed() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Attribute changed callbacks
	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void MaxHealthChanged(const FOnAttributeChangeData& Data);
	virtual void HealthRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void ManaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxManaChanged(const FOnAttributeChangeData& Data);
	virtual void ManaRegenRateChanged(const FOnAttributeChangeData& Data);
	virtual void StaminaChanged(const FOnAttributeChangeData& Data);
	virtual void MaxStaminaChanged(const FOnAttributeChangeData& Data);
	virtual void StaminaRegenRateChanged(const FOnAttributeChangeData& Data);

protected:
	UPROPERTY()
	class UHeroAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UHeroAttributeSet* AttributeSetBase;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player|Abilities")
	class UDataTable* AttributeDataTable;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle MaxHealthChangedDelegateHandle;
	FDelegateHandle HealthRegenRateChangedDelegateHandle;
	FDelegateHandle ManaChangedDelegateHandle;
	FDelegateHandle MaxManaChangedDelegateHandle;
	FDelegateHandle ManaRegenRateChangedDelegateHandle;
	FDelegateHandle StaminaChangedDelegateHandle;
	FDelegateHandle MaxStaminaChangedDelegateHandle;
	FDelegateHandle StaminaRegenRateChangedDelegateHandle;
};
