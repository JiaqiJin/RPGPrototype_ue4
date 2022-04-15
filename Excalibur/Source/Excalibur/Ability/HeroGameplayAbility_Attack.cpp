// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroGameplayAbility_Attack.h"
#include "Animation/AnimInstance.h"
#include "Excalibur/AbilityTask/HeroPlayMontageandWait.h"

UHeroGameplayAbility_Attack::UHeroGameplayAbility_Attack(const FObjectInitializer& ObjectInitializer)
	: Super (ObjectInitializer)
{
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;

	AttackIndex = 0;
}

bool UHeroGameplayAbility_Attack::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, OUT FGameplayTagContainer* OptionalRelevantTags) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

void UHeroGameplayAbility_Attack::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	FName SectionName = FName(TEXT("NONE"));
	switch (AttackIndex)
	{
	case 0:
		SectionName = Attack1;
		break;
	case 1:
		SectionName = Attack2;
		break;
	case 2:
		SectionName = Attack3;
		break;
	default:
		SectionName = Attack1;
		break;
	}

	//UE_LOG(LogTemp, Warning, TEXT("%s"), *SectionName.ToString());

	UAnimMontage* MontageToPlay = AttackMontage;
	UAnimInstance* AttackAnimInstance = GetOwningComponentFromActorInfo()->GetAnimInstance();
	UHeroPlayMontageandWait* AttackMontageTask = UHeroPlayMontageandWait::PlayMontageAndWaitForNotify(this, 
		"WeaponAttack", MontageToPlay/*, 1.0f, SectionName, false, 1.0f*/);

	AttackMontageTask->SetStartSection(SectionName);

	if (AttackMontage && AttackMontageTask)
	{
		AttackMontageTask->ReadyForActivation();
		AttackMontageTask->OnNotifyBegin.AddDynamic(this, &UHeroGameplayAbility_Attack::OnNotifyBegin);
	}
}

void UHeroGameplayAbility_Attack::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);

	AttackIndex++;
	if (AttackIndex > 2)
	{
		AttackIndex = 0;
	}
}

void UHeroGameplayAbility_Attack::OnNotifyBegin(FName NotifyName)
{
	if (NotifyName == "InterrupAttack")
	{
		EndAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo, true, false);
	}
}