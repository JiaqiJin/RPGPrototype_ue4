// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroAbilityDataAsset.h"
#include "AbilitySystemComponent.h"

UHeroAbilityDataAsset::UHeroAbilityDataAsset(const FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{

}

void UHeroAbilityDataAsset::GiveAbilities(UAbilitySystemComponent* AbilitySystemComponent) const
{
	for (const FHeroGameplayAbilityBindInfo& BindInfo : Abilities)
	{
		if (BindInfo.HeroAbilities)
		{
			AbilitySystemComponent->GiveAbility(
				FGameplayAbilitySpec(BindInfo.HeroAbilities, 1, (int32)BindInfo.Command, AbilitySystemComponent->GetOwner()));
		}
	}
}
