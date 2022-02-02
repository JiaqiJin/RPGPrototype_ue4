// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "HeroPlayMontageandWait.generated.h"

class HeroGameplayAbility;

/** Delegate type used, EventTag and Payload may be empty if it came from the montage callbacks */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHeroPlayMontageAndWaitForEventDelegate, FGameplayTag, EventTag, FGameplayEventData, EventData);

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UHeroPlayMontageandWait : public UAbilityTask
{
	GENERATED_BODY()

public:
	// Constructor and overrides
	UHeroPlayMontageandWait(const FObjectInitializer& ObjectInitializer);

	/** The montage completely finished playing */
	UPROPERTY(BlueprintAssignable)
	FHeroPlayMontageAndWaitForEventDelegate OnCompleted;

	/** The montage started blending out */
	UPROPERTY(BlueprintAssignable)
	FHeroPlayMontageAndWaitForEventDelegate OnBlendOut;

	/** The montage was interrupted */
	UPROPERTY(BlueprintAssignable)
	FHeroPlayMontageAndWaitForEventDelegate OnInterrupted;

	/** The ability task was explicitly cancelled by another ability */
	UPROPERTY(BlueprintAssignable)
	FHeroPlayMontageAndWaitForEventDelegate OnCancelled;

	/** One of the triggering gameplay events happened */
	UPROPERTY(BlueprintAssignable)
	FHeroPlayMontageAndWaitForEventDelegate EventReceived;

private:
	/** Playback rate */
	UPROPERTY()
	float Rate;

	/** Rather montage should be aborted if ability ends */
	UPROPERTY()
	bool bStopWhenAbilityEnds;
};
