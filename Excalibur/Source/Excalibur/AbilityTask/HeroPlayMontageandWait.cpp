// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayMontageandWait.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Animation/AnimInstance.h"

UHeroPlayMontageandWait::UHeroPlayMontageandWait(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Rate = 1.f;
	bStopWhenAbilityEnds = true;
}

UAbilitySystemComponent* UHeroPlayMontageandWait::GetTargetASC()
{
	return Cast<UAbilitySystemComponent>(AbilitySystemComponent);
}

UHeroPlayMontageandWait* UHeroPlayMontageandWait::PlayMontageAndWaitForEvent(UGameplayAbility* OwningAbility, FName TaskInstanceName,
	UAnimMontage* MontageToPlay, FGameplayTagContainer EventTags, float Rate, FName StartSection,
	bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
{
	UHeroPlayMontageandWait* MyObj = NewAbilityTask<UHeroPlayMontageandWait>(OwningAbility, TaskInstanceName);
	MyObj->MontageToPlay = MontageToPlay;
	MyObj->EventTags = EventTags;
	MyObj->Rate = Rate;
	MyObj->StartSection = StartSection;
	MyObj->AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;
	MyObj->bStopWhenAbilityEnds = bStopWhenAbilityEnds;

	return MyObj;
}

void UHeroPlayMontageandWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted)
{

}

void UHeroPlayMontageandWait::OnAbilityCancelled()
{

}

void UHeroPlayMontageandWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{

}

void UHeroPlayMontageandWait::OnGameplayEvent(FGameplayTag EventTag, const FGameplayEventData* Payload)
{

}

void UHeroPlayMontageandWait::Activate()
{

}

void UHeroPlayMontageandWait::ExternalCancel()
{
	check(AbilitySystemComponent);

	OnAbilityCancelled();

	Super::ExternalCancel();
}

FString UHeroPlayMontageandWait::GetDebugString() const
{
	UAnimMontage* PlayingMontage = nullptr;
	if (Ability)
	{
		const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
		UAnimInstance* AnimInstance = ActorInfo->GetAnimInstance();

		if (AnimInstance != nullptr)
		{
			PlayingMontage = AnimInstance->Montage_IsActive(MontageToPlay) ? MontageToPlay : AnimInstance->GetCurrentActiveMontage();
		}
	}

	return FString::Printf(TEXT("PlayMontageAndWaitForEvent. MontageToPlay: %s  (Currently Playing): %s"),
		*GetNameSafe(MontageToPlay), *GetNameSafe(PlayingMontage));
}

void UHeroPlayMontageandWait::OnDestroy(bool AbilityEnded)
{
	if (Ability)
	{
		Ability->OnGameplayAbilityCancelled.Remove(CancelledHandle);
		if (AbilityEnded && bStopWhenAbilityEnds)
		{
			StopPlayingMontage();
		}
	}

	Super::OnDestroy(AbilityEnded);
}

bool UHeroPlayMontageandWait::StopPlayingMontage()
{
	return false;
}
