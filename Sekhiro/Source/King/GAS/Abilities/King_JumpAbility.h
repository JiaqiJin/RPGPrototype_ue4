// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS/King_GameplayAbility.h"
#include "King_JumpAbility.generated.h"

/**
 * 
 */
UCLASS()
class KING_API UKing_JumpAbility : public UKing_GameplayAbility
{
	GENERATED_BODY()
	
public:
	UKing_JumpAbility();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, 
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, 
		const FGameplayAbilityActorInfo* ActorInfo, 
		const FGameplayTagContainer* SourceTags = nullptr, 
		const FGameplayTagContainer* TargetTags = nullptr, 
		OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;

	virtual void InputReleased(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo, 
		const FGameplayAbilityActivationInfo ActivationInfo) override;

	virtual void CancelAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo, 
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateCancelAbility) override;
};
