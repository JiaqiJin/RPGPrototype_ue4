// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS/King_GameplayAbility.h"
#include "King_LightAttackAbility.generated.h"

class AKing_CharacterBase;

UCLASS()
class KING_API UKing_LightAttackAbility : public UKing_GameplayAbility
{
	GENERATED_BODY()
public:

	UKing_LightAttackAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	UAnimMontage* LigthAttackAnimMontage;

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

protected:
	bool bStopWhenAbilityEnds = true;
	bool bIsCreateOnRunning = false;

	AKing_CharacterBase* Character;

	UFUNCTION()
	void OnCancelled(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void OnCompleted(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void EventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
};
