// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "King_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class KING_API UKing_GameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UKing_GameInstance();

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "DefaultAutoLoadPrimary")
	TArray<FPrimaryAssetType> AutoLoadTypes;

	virtual void Init() override;

	void AutoLoadDataAssets();
};
