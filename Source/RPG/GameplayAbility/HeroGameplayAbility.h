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

	/** Applies the ability's cost to the target */
	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	virtual bool CommitAbilityCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) override;

	/** The last chance to fail before committing, this will usually be the same as CanActivateAbility. Some abilities may need to do extra checks here if they are consuming extra stuff in CommitExecute */
	virtual bool CommitCheck(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) override;

	UPROPERTY(EditDefaultsOnly, Category = "HeroGameplayAbility", meta = (DisplayName ="Activate Ability When Granted"))
	bool bActivateWhenGranted;

	// If true, Commit Ability Cost will be called on Ability Activate
	UPROPERTY(EditDefaultsOnly, Category = "HeroGameplayAbility", meta = (DisplayName = "Auto Apply Mana Cost"))
	bool bAutoApplyCost;

	// If true, Commit Ability Cost will be called on Ability Activate
	UPROPERTY(EditDefaultsOnly, Category = "HeroGameplayAbility", meta = (DisplayName = "Auto Apply Mana Cost"))
	bool bAutoApplyCooldown;
};
