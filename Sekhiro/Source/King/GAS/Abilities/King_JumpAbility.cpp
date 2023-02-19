// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/King_JumpAbility.h"
#include "Character/King_CharacterBase.h"

UKing_JumpAbility::UKing_JumpAbility()
{

}

void UKing_JumpAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	if (HasAuthorityOrPredictionKey(ActorInfo, &ActivationInfo))
	{
		if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
		{
			EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
		}

		ACharacter* Character = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get());
		//Character->Jump();
		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "End Ability !!!!");
		EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
	}
}

bool UKing_JumpAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, 
	const FGameplayTagContainer* SourceTags, 
	const FGameplayTagContainer* TargetTags, 
	OUT FGameplayTagContainer* OptionalRelevantTags) const 
{
	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}
	const ACharacter* Character = CastChecked<ACharacter>(ActorInfo->AvatarActor.Get(), ECastCheckedType::NullAllowed);
	return Character && Character->CanJump();
}

void UKing_JumpAbility::InputReleased(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, 
	const FGameplayAbilityActivationInfo ActivationInfo) 
{
	if (ActorInfo != NULL && ActorInfo->AvatarActor != NULL)
	{
		CancelAbility(Handle, ActorInfo, ActivationInfo, true);
	}
}

void UKing_JumpAbility::CancelAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilityActivationInfo ActivationInfo, 
	bool bReplicateCancelAbility) 
{
	Super::CancelAbility(Handle, ActorInfo, ActivationInfo, bReplicateCancelAbility);
}