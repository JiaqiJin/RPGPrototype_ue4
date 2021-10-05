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

	void InitializeAttributes();
protected:
	UPROPERTY()
	class UHeroAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UHeroAttributeSet* AttributeSetBase;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player|Abilities")
	class UDataTable* AttributeDataTable;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
