// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroAbilitytDataAsset.h"
#include "AbilitySystemComponent.h"

UHeroAbilitytDataAsset::UHeroAbilitytDataAsset(const FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{

}

void UHeroAbilitytDataAsset::GiveAbilities(UAbilitySystemComponent* AbilitySystemComponent) const
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