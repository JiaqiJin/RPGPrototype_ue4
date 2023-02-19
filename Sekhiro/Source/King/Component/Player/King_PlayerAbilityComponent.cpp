// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/Player/King_PlayerAbilityComponent.h"
#include "King.h"
#include "Datas/GameplayAbilityDatas/King_GameplayAbilityDatas.h"
#include "Datas/King_AssetManager.h"
#include "GAS/King_AbilitySystemComponent.h"
#include "KingCharacter.h"
#include "Character/King_CharacterBase.h"
#include "AbilitySystemComponent.h"

// Sets default values for this component's properties
UKing_PlayerAbilityComponent::UKing_PlayerAbilityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UKing_PlayerAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UKing_PlayerAbilityComponent::LoadAllGameplayAbilities()
{
	//UKing_AssetManager& AssetManager = UKing_AssetManager::Get();
	//TArray<FPrimaryAssetId> AbilitiesIDs;
	//if (AssetManager.IsValid())
	//{
	//	AssetManager.GetPrimaryAssetIdList(AssetManager.PlayerGameplayAbility, AbilitiesIDs);
	//	for (auto& AbilitiesID : AbilitiesIDs)
	//	{
	//		//AssetManager.GetPrimaryAssetObject<UKing_GameplayAbilityDatas>(AbilitiesID)
	//		UKing_GameplayAbilityDatas* AbilitiesInfoDatas = AssetManager.GetPrimaryAssetObject<UKing_GameplayAbilityDatas>(AbilitiesID);
	//		if (AbilitiesInfoDatas && AbilitiesInfoDatas->Owner && this->GetOwner()->IsA(AbilitiesInfoDatas->Owner.Get()))
	//		{
	//			LoadGameplayAbilities(AbilitiesInfoDatas);
	//		}
	//	}
	//}
}

void UKing_PlayerAbilityComponent::LoadGameplayAbilities(UKing_GameplayAbilityDatas* Datas)
{
	AKingCharacter* Character = Cast<AKingCharacter>(GetOwner());
	if (Character)
	{
		UAbilitySystemComponent* AbilitySystemComponent = Character->GetAbilitySystemComponent();
		if (!AbilitySystemComponent)
		{
			return;
		}

		for (FKingGameplayAbilityInfo AbilityData : Datas->Abilities)
		{
			if (!AbilityData.Ability)
			{
				return;
			}
			FGameplayAbilitySpec AbilitySpec(AbilityData.Ability, 1, static_cast<int32>(AbilityData.AbilityKeys), this);
			AbilitySystemComponent->GiveAbility(AbilitySpec.Ability);
		}
	}
}

