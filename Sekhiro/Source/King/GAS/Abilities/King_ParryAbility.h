// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS/King_GameplayAbility.h"
#include "King_ParryAbility.generated.h"

class AKingCharacter;

UCLASS()
class KING_API UKing_ParryAbility : public UKing_GameplayAbility
{
	GENERATED_BODY()
	
public:
	UKing_ParryAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	UAnimMontage* ParryAnimMontage;

	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData)
		override;

	virtual void EndAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility,
		bool bWasCancelled) override;

	virtual void CancelAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateCancelAbility);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameplayTag")
	FGameplayTag EventAbilityTag;

protected:
	bool bStopWhenAbilityEnds = true;
	bool bIsCreateOnRunning = false;

	AKingCharacter* Character;

	UFUNCTION()
	void OnCancelled(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void OnCompleted(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void EventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
};
