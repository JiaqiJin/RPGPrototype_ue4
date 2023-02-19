// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/King_LightAttackAbility.h"
#include "KingCharacter.h"
#include "GAS/AbilityTasks/King_PlayMontageAndWaitEvent.h"
#include "AbilitySystemComponent.h"
#include "Character/King_CharacterBase.h"
#include "GAS/King_AbilitySystemComponent.h"

UKing_LightAttackAbility::UKing_LightAttackAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	bIsCreateOnRunning = GIsRunning;
}

void UKing_LightAttackAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (!IsValid(LigthAttackAnimMontage))
	{
		UE_LOG(LogTemp, Warning, TEXT("[%s] UKing_LightAttackAbility: Cannot get Animation Montage ... "), *GetName());
		Super::EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, true);
		return;
	}

	Character = Cast<AKing_CharacterBase>(GetAvatarActorFromActorInfo());
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

	UKing_PlayMontageAndWaitEvent* Task = UKing_PlayMontageAndWaitEvent::PlayMontageAndWaitForEvent(this, NAME_None, LigthAttackAnimMontage, FGameplayTagContainer(), 1.0f, NAME_None, bStopWhenAbilityEnds, 1.0f);
	Task->OnBlendOut.AddDynamic(this, &UKing_LightAttackAbility::OnCompleted);
	Task->OnCompleted.AddDynamic(this, &UKing_LightAttackAbility::OnCompleted);
	Task->OnInterrupted.AddDynamic(this, &UKing_LightAttackAbility::OnCancelled);
	Task->OnCancelled.AddDynamic(this, &UKing_LightAttackAbility::OnCancelled);
	Task->EventReceived.AddDynamic(this, &UKing_LightAttackAbility::EventReceived);
	Task->ReadyForActivation();
}

void UKing_LightAttackAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility,
		bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UKing_LightAttackAbility::OnCancelled(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UKing_LightAttackAbility::OnCompleted(FGameplayTag EventTag, FGameplayEventData EventData)
{
	EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
}

void UKing_LightAttackAbility::EventReceived(FGameplayTag EventTag, FGameplayEventData EventData)
{

}

void UKing_LightAttackAbility::CancelAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, 
	const FGameplayAbilityActivationInfo ActivationInfo, 
	bool bReplicateCancelAbility)
{
	if (Character)
	{
		UKing_AbilitySystemComponent* AbilitySystemComponent =
			Cast<UKing_AbilitySystemComponent>(Character->GetAbilitySystemComponent());
		if (AbilitySystemComponent)
		{
			AbilitySystemComponent->CurrentMontageStop();
		}
	}

	UAnimInstance* AnimInstance = Character->GetMesh()->GetAnimInstance();
	if (AnimInstance && LigthAttackAnimMontage)
	{
		FAnimMontageInstance* MontageInstance = AnimInstance->GetActiveInstanceForMontage(LigthAttackAnimMontage);
		if (MontageInstance)
		{
			MontageInstance->OnMontageBlendingOutStarted.Unbind();
			MontageInstance->OnMontageEnded.Unbind();

			FAlphaBlend* AlfaBlend = nullptr;
			MontageInstance->Stop(*AlfaBlend);
		}
	}

	Super::CancelAbility(Handle, ActorInfo, ActivationInfo, bReplicateCancelAbility);
}