// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "TitanSoul/TitanSoul.h"
#include "HeroGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class TITANSOUL_API UHeroGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UHeroGameplayAbility();

	// Value to associate an ability with an slot 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	HeroAbilityInputID AbilityID = HeroAbilityInputID::None;

	// Tell an ability to activate immediately when its granted
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
	bool ActivateAbilityOnGranted = false;

	// If an ability is marked as 'ActivateAbilityOnGranted', activate them immediately when given here
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
};
