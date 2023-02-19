// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "King.h"
#include "King_PlayerAbilityDatas.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FKing_GameplayAbilityInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TEnumAsByte<EKingAbilityInputID::Type> AbilityKeys;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<class UGameplayAbility> SATORIAbility;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText AbilityName;
};

UCLASS()
class KING_API UKing_PlayerAbilityDatas : public UDataAsset
{
	GENERATED_BODY()
public:
	UKing_PlayerAbilityDatas();

	// Array of abilities
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FKing_GameplayAbilityInfo> Abilities;
};
