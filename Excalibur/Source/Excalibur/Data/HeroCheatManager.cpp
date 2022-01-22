// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCheatManager.h"
#include "AbilitySystemComponent.h"
#include "Excalibur/Attributes/HeroPlayerAttributeSet.h"
#include "Excalibur/ExcaliburCharacter.h"
#include "Excalibur/Character/HeroPlayerState.h"
#include "AbilitySystemGlobals.h"
#include "Kismet/GameplayStatics.h"

void UHeroCheatManager::SetPlayerAttributte(FString AttributeName, float NewValue)
{
	AExcaliburCharacter* PlayerCharacter = Cast<AExcaliburCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
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
