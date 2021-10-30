// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCheatManager.h"
#include "../Attributes/HeroAttributeSet.h"
#include "../TitanSoulCharacter.h"
#include "../Player/HeroPlayerState.h"
#include "AbilitySystemGlobals.h"
#include "AbilitySystemComponent.h"
#include "Kismet/GameplayStatics.h"

void UHeroCheatManager::SetPlayerAttributte(FString AttributeName, float NewValue)
{
	ATitanSoulCharacter* PlayerCharacter = Cast<ATitanSoulCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter)
	{
		UAbilitySystemComponent* AbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(PlayerCharacter);
		if (AbilityComponent)
		{
			TArray<FGameplayAttribute> Attributes;
			AbilityComponent->GetAllAttributes(Attributes);

			for (FGameplayAttribute Attribute : Attributes)
			{
				if (Attribute.AttributeName == AttributeName)
				{
					AbilityComponent->SetNumericAttributeBase(Attribute, NewValue);
				}
			}
		}
	}
}

void UHeroCheatManager::ToggleIgnoreAbilityCooldown(bool bToggle)
{
	ATitanSoulCharacter* PlayerCharacter = Cast<ATitanSoulCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter)
	{
		AHeroPlayerState* PlayerState = Cast<AHeroPlayerState>(PlayerCharacter->GetPlayerState());
		if (PlayerState)
		{
			PlayerState->ToggleIgnoreAbilityCooldown(bToggle);
		}
	}
}

void UHeroCheatManager::ToggleIgnoreAbilityManaCost(bool bToggle)
{
	ATitanSoulCharacter* PlayerCharacter = Cast<ATitanSoulCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (PlayerCharacter)
	{
		AHeroPlayerState* PlayerState = Cast<AHeroPlayerState>(PlayerCharacter->GetPlayerState());
		if (PlayerState)
		{
			PlayerState->ToggleIgnoreAbilityManaCost(bToggle);
		}
	}
}