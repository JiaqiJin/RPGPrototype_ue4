// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "HeroGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UHeroGameplayAbility(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = Ability)
	class AHeroPlayerCharacter* GetOwningHeroCharacter() const;

	UFUNCTION(BlueprintCallable, Category = Ability)
	class AHeroPlayerState* GetOwningHeroPlayerState() const;
protected:

	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;

	/** Applies the ability's cost to the target */
	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	/** Applies CooldownGameplayEffect to the target */
	virtual void ApplyCooldown(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const;

	virtual bool CommitAbilityCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) override;

	virtual bool CommitAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr);
	/** The last chance to fail before committing, this will usually be the same as CanActivateAbility. Some abilities may need to do extra checks here if they are consuming extra stuff in CommitExecute */
	virtual bool CommitCheck(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) override;

protected:
	UPROPERTY(EditAnywhere, Category = "HerogameplayAbility", meta = (DisplayName = "Auto Apply Cost"), AdvancedDisplay)
	bool bAutoApplyCost;

	UPROPERTY(EditAnywhere, Category = "HerogameplayAbility", meta = (DisplayName = "Auto Apply Cooldown"), AdvancedDisplay)
	bool bAutoApplyCooldown;

	UPROPERTY(EditAnywhere, Category = "HerogameplayAbility", meta = (DisplayName = "Ability Icon"), AdvancedDisplay)
	class UTexture* AbilityIcon;

	// If true show the ability Icon
	UPROPERTY(EditAnywhere, Category = "HerogameplayAbility", meta = (DisplayName = "Is Active Ability"), AdvancedDisplay)
	bool bIsActiveAbility;
};
