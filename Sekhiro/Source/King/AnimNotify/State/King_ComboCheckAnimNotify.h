// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "King_ComboCheckAnimNotify.generated.h"

/**
 * 
 */
UCLASS()
class KING_API UKing_ComboCheckAnimNotify : public UAnimNotifyState
{
	GENERATED_BODY()
	
public:
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration);
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime);
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotifyState_CheckCombo")
	FName JumpSectionName;
};
