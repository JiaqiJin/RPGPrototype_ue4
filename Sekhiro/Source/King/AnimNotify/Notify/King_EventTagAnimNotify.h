// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "King_EventTagAnimNotify.generated.h"

/**
 * 
 */
UCLASS()
class KING_API UKing_EventTagAnimNotify : public UAnimNotify
{
	GENERATED_BODY()
	
public:
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameplayTag")
	FGameplayTag AbilityTag;
};
