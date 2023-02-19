// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/King_ParryAbility.h"
#include "KingCharacter.h"
#include "GAS/AbilityTasks/King_PlayMontageAndWaitEvent.h"
#include "AbilitySystemComponent.h"
#include "Character/King_CharacterBase.h"
#include "GAS/King_AbilitySystemComponent.h"
#include "Component/Player/King_CombatComponent.h"
#include "AI/AI_CharacterBase.h"

UKing_ParryAbility::UKing_ParryAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	bIsCreateOnRunning = GIsRunning;
}

void UKing_ParryAbility::ActivateAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (!IsValid(ParryAnimMontage))
	{
		UE_LOG(LogTemp, Warning, TEXT("[%s] UKing_LightAttackAbility: Cannot get Animation Montage ... "), *GetName());
		Super::EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	Character = Cast<AKingCharacter>(GetAvatarActorFromActorInfo());
	if (!Character)
	{
		UE_LOG(LogTemp, Display, TEXT("[%s] UKing_LightAttackAbility: Cannot Cast ASATORICharacter ... "), *GetName());
		Super::EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
	{
		UE_LOG(LogTemp, Display, TEXT("[%s] UKing_LightAttackAbility: Failed commit ability ... "), *GetName());
		Super::EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	if (Character->IsEnemyInFront())
	{
		UE_LOG(LogTemp, Display, TEXT(" Enemy in front of the player"));
	}

	UKing_PlayMontageAndWaitEvent* Task = UKing_PlayMontageAndWaitEvent::PlayMontageAndWaitForEvent(this, NAME_None, ParryAnimMontage, FGameplayTagContainer(), 1.0f, NAME_None, bStopWhenAbilityEnds, 1.0f);
	Task->OnBlendOut.AddDynamic(this, &UKing_ParryAbility::OnCompleted);
	Task->OnCompleted.AddDynamic(this, &UKing_ParryAbility::OnCompleted);
	Task->OnInterrupted.AddDynamic(this, &UKing_ParryAbility::OnCancelled);
	Task->OnCancelled.AddDynamic(this, &UKing_ParryAbility::OnCancelled);
	Task->EventReceived.AddDynamic(this, &UKing_ParryAbility::EventReceived);
	Task->ReadyForActivation();
}

void UKing_ParryAbility::EndAbility(
	const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}


void UKing_ParryAbility::CancelAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	bool bReplicateCancelAbility)
{
	Super::CancelAbility(Handle, ActorInfo, ActivationInfo, bReplicateCancelAbility);
}

void UKing_ParryAbility::OnCancelled(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UKing_ParryAbility::OnCompleted(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UKing_ParryAbility::EventReceived(FGameplayTag EventTag, FGameplayEventData EventData)
{
	if (EventTag == EventAbilityTag)
	{
		// Check enemy attack and check if we can parry
		UKing_CombatComponent* CombatCompnent = Character->GetCombatComponent();
		if (CombatCompnent)
		{
			AAI_CharacterBase* AICharacter = CombatCompnent->GetInFrontAICharacter();
			if (AICharacter && AICharacter->IsPlayerInFront())
			{
				UE_LOG(LogTemp, Warning, TEXT("Enemy In front with parry hability"));
			}
		}
	}
}
