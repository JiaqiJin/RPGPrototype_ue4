// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "King_CancelAbilityAnimNotify.generated.h"

class UGameplayAbility;

UCLASS()
class KING_API UKing_CancelAbilityAnimNotify : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime);
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CancelGameplayTag")
	FGameplayTag TagToCancelAbility;

private:
	UGameplayAbility* PlayerAbility;
};
