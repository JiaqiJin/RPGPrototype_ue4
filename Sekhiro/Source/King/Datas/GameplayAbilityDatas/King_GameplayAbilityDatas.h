// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Datas/King_Item.h"
#include "King.h"
#include "King_GameplayAbilityDatas.generated.h"

class UAbilitySystemComponent;
class AKing_CharacterBase;

USTRUCT(BlueprintType)
struct FKingGameplayAbilityInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TEnumAsByte<EKingAbilityInputID::Type> AbilityKeys;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<class UGameplayAbility> Ability;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText AbilityName;
};

UCLASS()
class KING_API UKing_GameplayAbilityDatas : public UKing_Item
{
	GENERATED_BODY()
	
public:
	// Array of abilities
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FKingGameplayAbilityInfo> Abilities;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<AKing_CharacterBase> Owner;
};
