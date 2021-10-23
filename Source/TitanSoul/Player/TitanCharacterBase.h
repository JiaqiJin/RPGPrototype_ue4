// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "TitanSoul/Attributes/HeroAttributeSet.h"
#include "TitanSoul/AbilitySystem/HeroAbilitySystemComponent.h"
#include "TitanCharacterBase.generated.h"

UCLASS()
class TITANSOUL_API ATitanCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATitanCharacterBase(const class FObjectInitializer& InitializerObject);

	/** The component used to handle ability system interactions */
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const;

	/** Returns current health, will be 0 if dead */
	UFUNCTION(BlueprintCallable)
	virtual float GetHealth() const;

	/** Returns maximum health, health will never be greater than this */
	UFUNCTION(BlueprintCallable)
	virtual float GetMaxHealth() const;

	/** Returns current mana */
	UFUNCTION(BlueprintCallable)
	virtual float GetMana() const;

	/** Returns maximum mana, mana will never be greater than this */
	UFUNCTION(BlueprintCallable)
	virtual float GetMaxMana() const;

	/** Returns current movement speed */
	UFUNCTION(BlueprintCallable)
	virtual float GetMoveSpeed() const;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Player|Abilities")
	TArray<TSubclassOf<class UHeroGameplayAbility>> PlayerAbilities;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void AddCharacterAbilities();
protected:

	/** The component used to handle ability system interactions */
	UPROPERTY()
	TWeakObjectPtr<class UHeroAbilitySystemComponent> AbilitySystemComponent;

	/** List of attributes modified by the ability system */
	UPROPERTY()
	UHeroAttributeSet* AttributeSet;
};
