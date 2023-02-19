// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Datas/King_Item.h"
#include "King_SkillItem.generated.h"

/**
 * 
 */
UCLASS()
class KING_API UKing_SkillItem : public UKing_Item
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	FName SkillName;
};
