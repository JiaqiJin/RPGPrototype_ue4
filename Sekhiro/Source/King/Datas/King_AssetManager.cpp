// Fill out your copyright notice in the Description page of Project Settings.


#include "Datas/King_AssetManager.h"

const FPrimaryAssetType UKing_AssetManager::SkillType = TEXT("SkillType");
const FPrimaryAssetType UKing_AssetManager::MotionType = TEXT("MotionType");
const FPrimaryAssetType UKing_AssetManager::PlayerGameplayAbility = TEXT("PlayerGameplayAbility");

UKing_AssetManager::UKing_AssetManager()
{

}

UKing_AssetManager& UKing_AssetManager::Get()
{
	UKing_AssetManager* Singleton = Cast<UKing_AssetManager>(GEngine->AssetManager);

	if (Singleton)
	{
		return *Singleton;
	}
	else
	{
		//UE_LOG(LogAssetManager, Fatal, TEXT("Cannot use AssetManager if no AssetManagerClassName is defined!"));
		return *NewObject<UKing_AssetManager>(); // never calls this
	}
}