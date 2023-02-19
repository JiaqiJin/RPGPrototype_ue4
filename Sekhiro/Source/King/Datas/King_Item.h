// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "King_Item.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class KING_API UKing_Item : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Item)
	FPrimaryAssetType ItemType;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
};
