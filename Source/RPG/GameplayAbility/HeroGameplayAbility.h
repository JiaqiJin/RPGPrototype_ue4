// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "HeroGameplayAbility.generated.h"

class ARPGCharacter;
class UHeroCharacterMovementComponent;

/**
 * The Hero Gameplay Ability extends from UHeroGameplayAbility and should be used fpr all Gameplay Ability in Hero
 */
UCLASS()
class RPG_API UHeroGameplayAbility : public UGameplayAbility
{
	GENERATED_UCLASS_BODY()
	
public:
	UHeroGameplayAbility();

	/** Returns the physical actor that is executing this ability. May be null */
	UFUNCTION(BlueprintPure, Category = Ability)
	ARPGCharacter* GetKawaiiCharacter() const;

	UFUNCTION(BlueprintPure, Category = Ability)
	UHeroCharacterMovementComponent* GetHeroCharacterMovementComponent() const;

protected:
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;

	UPROPERTY(EditDefaultsOnly, Category = "HeroGameplayAbility", meta = (DisplayName ="Activate Ability When Granted"))
	bool bActivateWhenGranted;
};
