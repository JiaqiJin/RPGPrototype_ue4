// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroPlayMontageandWait.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimNotifyQueue.h"
#include "Animation/AnimTypes.h"

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

void UHeroPlayMontageandWait::TriggerAnimNotifies(float DeltaSeconds)
{
	SCOPE_CYCLE_COUNTER(STAT_AnimTriggerAnimNotifies);
	const FGameplayAbilityActorInfo* ActorInfo = Ability->GetCurrentActorInfo();
	USkeletalMeshComponent* SkelMeshComp = nullptr;
	if (ActorInfo)
	{
		SkelMeshComp = ActorInfo->SkeletalMeshComponent.Get();
	}

	// Array that will replace the 'ActiveAnimNotifyState' at the end of this function.
	TArray<FAnimNotifyEvent> NewActiveAnimNotifyState;
	NewActiveAnimNotifyState.Reserve(NotifyQueue.AnimNotifies.Num());

	// AnimNotifyState freshly added that need their 'NotifyBegin' event called.
	TArray<const FAnimNotifyEvent*> NotifyStateBeginEvent;

	for (int32 Index = 0; Index < NotifyQueue.AnimNotifies.Num(); Index++)
	{
		if (const FAnimNotifyEvent* AnimNotifyEvent = NotifyQueue.AnimNotifies[Index].GetNotify())
		{
			// AnimNotifyState
			if (AnimNotifyEvent->NotifyStateClass)
			{
				if (!ActiveAnimNotifyState.RemoveSingleSwap(*AnimNotifyEvent, false))
				{
					// Queue up calls to 'NotifyBegin', so they happen after 'NotifyEnd'.
					NotifyStateBeginEvent.Add(AnimNotifyEvent);
				}
				NewActiveAnimNotifyState.Add(*AnimNotifyEvent);
				continue;
			}

			// Trigger non 'state' AnimNotifies
			TriggerSingleAnimNotify(AnimNotifyEvent);
		}
	}

	// Send end notification to AnimNotifyState not active anymore.
	for (int32 Index = 0; Index < ActiveAnimNotifyState.Num(); ++Index)
	{
		const FAnimNotifyEvent& AnimNotifyEvent = ActiveAnimNotifyState[Index];
		if (AnimNotifyEvent.NotifyStateClass && ShouldTriggerAnimNotifyState(AnimNotifyEvent.NotifyStateClass) && SkelMeshComp)
		{
			TRACE_ANIM_NOTIFY(this, AnimNotifyEvent, End);
			AnimNotifyEvent.NotifyStateClass->NotifyEnd(SkelMeshComp, Cast<UAnimSequenceBase>(AnimNotifyEvent.NotifyStateClass->GetOuter()));
		}
		// The NotifyEnd callback above may have triggered actor destruction and the tear down
		// of this instance via UninitializeAnimation which empties ActiveAnimNotifyState.
		// If that happened, we should stop iterating the ActiveAnimNotifyState array
		if (ActiveAnimNotifyState.IsValidIndex(Index) == false)
		{
			ensureMsgf(false, TEXT("UAnimInstance::ActiveAnimNotifyState has been invalidated by NotifyEnd. AnimInstance: %s, Owning Component: %s, Owning Actor: %s "), *GetNameSafe(this), *GetNameSafe(GetOwningComponent()), *GetNameSafe(GetOwningActor()));
			return;
		}
	}

	// Call 'NotifyBegin' event on freshly added AnimNotifyState.
	for (const FAnimNotifyEvent* AnimNotifyEvent : NotifyStateBeginEvent)
	{
		if (ShouldTriggerAnimNotifyState(AnimNotifyEvent->NotifyStateClass))
		{
			TRACE_ANIM_NOTIFY(this, *AnimNotifyEvent, Begin);
			AnimNotifyEvent->NotifyStateClass->NotifyBegin(SkelMeshComp, Cast<UAnimSequenceBase>(AnimNotifyEvent->NotifyStateClass->GetOuter()), AnimNotifyEvent->GetDuration());
		}
	}

	// Switch our arrays.
	ActiveAnimNotifyState = MoveTemp(NewActiveAnimNotifyState);

	// Tick currently active AnimNotifyState
	for (const FAnimNotifyEvent& AnimNotifyEvent : ActiveAnimNotifyState)
	{
		if (ShouldTriggerAnimNotifyState(AnimNotifyEvent.NotifyStateClass))
		{
			TRACE_ANIM_NOTIFY(this, AnimNotifyEvent, Tick);
			AnimNotifyEvent.NotifyStateClass->NotifyTick(SkelMeshComp, Cast<UAnimSequenceBase>(AnimNotifyEvent.NotifyStateClass->GetOuter()), DeltaSeconds);
		}
	}
}

void UHeroPlayMontageandWait::TriggerSingleAnimNotify(const FAnimNotifyEvent* AnimNotifyEvent)
{

}

void UHeroPlayMontageandWait::EndNotifyStates()
{

}

bool UHeroPlayMontageandWait::ShouldTriggerAnimNotifyState(const UAnimNotifyState* AnimNotifyState) const
{
	if (ensureMsgf(AnimNotifyState != nullptr, TEXT("UAnimInstance::ShouldTriggerAnimNotifyState: AnimNotifyState is null on AnimInstance %s. ActiveAnimNotifyState array size is: %d"), *GetNameSafe(this), ActiveAnimNotifyState.Num()))
	{
		return true;
	}
	return false;
}