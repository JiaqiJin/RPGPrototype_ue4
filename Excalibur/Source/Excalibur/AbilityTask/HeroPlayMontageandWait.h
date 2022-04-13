// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "HeroPlayMontageandWait.generated.h"

class HeroGameplayAbility;

/** Delegate type used, EventTag and Payload may be empty if it came from the montage callbacks */
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHeroPlayMontageAndWaitForEventDelegate, FGameplayTag, EventTag, FGameplayEventData, EventData);

/** Delegate called by 'PlayMontageNotify' and 'PlayMontageNotifyWindow' **/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUHeroPlayMontageNotify, FName, NotifyName);

/**
* Combination of the default PlayMontageAndWait and WaitGameplayEvent AbilityTasks.
* This allows animation montages to send gameplay events from AnimNotifies back to the GameplayAbility that started them.
* Use this to trigger actions at specific times during animation montages.
 */
UCLASS()
class EXCALIBUR_API UHeroPlayMontageandWait : public UAbilityTask
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UHeroPlayMontageandWait(const FObjectInitializer& ObjectInitializer);

	virtual void Activate() override;
	virtual void ExternalCancel() override;
	virtual FString GetDebugString() const override;
	virtual void OnDestroy(bool AbilityEnded) override;

	/** The montage completely finished playing */
	UPROPERTY(BlueprintAssignable)
	FUHeroPlayMontageNotify OnCompleted;

	/** The montage started blending out */
	UPROPERTY(BlueprintAssignable)
	FUHeroPlayMontageNotify OnBlendOut;

	/** The montage was interrupted */
	UPROPERTY(BlueprintAssignable)
	FUHeroPlayMontageNotify OnInterrupted;

	/** The ability task was explicitly cancelled by another ability */
	UPROPERTY(BlueprintAssignable)
	FUHeroPlayMontageNotify OnCancelled;

	/** One of the triggering gameplay events happened */
	UPROPERTY(BlueprintAssignable)
	FUHeroPlayMontageNotify EventReceived;

	/** One of the triggering gameplay events happened */
	UPROPERTY(BlueprintAssignable)
	FUHeroPlayMontageNotify OnNotifyBegin;

	UFUNCTION(BlueprintCallable, Category = "Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
		static UHeroPlayMontageandWait* PlayMontageAndWaitForNotify(
			UGameplayAbility* OwningAbility,
			FName TaskInstanceName,
			UAnimMontage* MontageToPlay,
			float Rate = 1.f,
			FName StartSection = NAME_None,
			bool bStopWhenAbilityEnds = true,
			float AnimRootMotionTranslationScale = 1.f);

private:
	void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
	void OnAbilityCancelled();
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
	//void OnGameplayEvent(FGameplayTag EventTag, const FGameplayEventData* Payload);
	UFUNCTION()
	void NotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);

	/** Checks if the ability is playing a montage and stops that montage, returns true if a montage was stopped, false if not. */
	bool StopPlayingMontage();
private:
	/** Montage that is playing */
	UPROPERTY()
	UAnimMontage* MontageToPlay;

	/** List of tags to match against gameplay events */
	/*UPROPERTY()
	FGameplayTagContainer EventTags;*/

	/** Playback rate */
	UPROPERTY()
	float Rate;

	/** Rather montage should be aborted if ability ends */
	UPROPERTY()
	bool bStopWhenAbilityEnds;

	/** Section to start montage from */
	UPROPERTY()
	FName StartSection;

	/** Modifies how root motion movement to apply */
	UPROPERTY()
	float AnimRootMotionTranslationScale;

	/** Returns our ability system component */
	UAbilitySystemComponent* GetTargetASC();

	FOnMontageBlendingOutStarted BlendingOutDelegate;
	FOnMontageEnded MontageEndedDelegate;
	FDelegateHandle CancelledHandle;
	//FDelegateHandle EventHandle;
	FDelegateHandle NotifyBeginHandle;
};