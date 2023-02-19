// Fill out your copyright notice in the Description page of Project Settings.


#include "GameFramework/King_GameInstance.h"
#include "Datas/King_AssetManager.h"

UKing_GameInstance::UKing_GameInstance()
{

}

void UKing_GameInstance::Init()
{
	Super::Init();

	AutoLoadDataAssets();
}

void UKing_GameInstance::AutoLoadDataAssets()
{
	UKing_AssetManager& Manager = UKing_AssetManager::Get();
	for (auto& Type : AutoLoadTypes)
	{
		FPrimaryAssetType CurrentType = Type;
		TArray<FPrimaryAssetId> AssetIds;
		if (Manager.GetPrimaryAssetIdList(CurrentType, AssetIds))
		{
			Manager.LoadPrimaryAssets(AssetIds, TArray<FName>(), FStreamableDelegate(), 0);
		}
	}
}