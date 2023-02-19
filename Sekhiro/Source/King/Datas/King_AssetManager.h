// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "King_AssetManager.generated.h"


UCLASS()
class KING_API UKing_AssetManager : public UAssetManager
{
	GENERATED_BODY()

public:	
	UKing_AssetManager();

	static const FPrimaryAssetType SkillType;
	static const FPrimaryAssetType MotionType;
	static const FPrimaryAssetType PlayerGameplayAbility;

	/** Returns the current AssetManager object */
	static UKing_AssetManager& Get();
};
