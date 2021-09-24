// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroDebugWidget.h"
#include "Components/Button.h"
#include "RPG/Controller/HeroPlayerController.h"
#include "GameFramework/PlayerController.h"
#include "RPG/RPGCharacter.h"
#include "RPG/Controller/HeroPlayerController.h"
#include "RPG/Data/HeroAbilityDataAsset.h"
#include "Components/ComboBoxString.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"

UHeroDebugWidget::UHeroDebugWidget(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UHeroDebugWidget::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success)
	{
		return false;
	}

	if (CloseButton)
	{
		CloseButton->OnClicked.AddDynamic(this, &UHeroDebugWidget::CloseHeroDebugButton);
	}

	if (Ability1Selector)
	{
		PopulateAbilityComboBox(*Ability1Selector);
		Ability1Selector->OnSelectionChanged.AddDynamic(this, &UHeroDebugWidget::Ability1Changed);
	}

	if (Ability2Selector)
	{
		PopulateAbilityComboBox(*Ability2Selector);
		Ability2Selector->OnSelectionChanged.AddDynamic(this, &UHeroDebugWidget::Ability2Changed);
	}

	if (Ability3Selector)
	{
		PopulateAbilityComboBox(*Ability3Selector);
		Ability3Selector->OnSelectionChanged.AddDynamic(this, &UHeroDebugWidget::Ability3Changed);
	}

	return true;
}

void UHeroDebugWidget::CloseHeroDebugButton()
{
	AHeroPlayerController* HeroPC = Cast<AHeroPlayerController>(GetOwningPlayer());

	if (HeroPC)
	{
		RemoveFromParent();
		FInputModeUIOnly InputModeData;
		HeroPC->SetInputMode(InputModeData);
		HeroPC->bShowMouseCursor = false;
	}
}

void UHeroDebugWidget::Ability1Changed(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	RemapAbility(EHeroAbilityInputID::Ability1, SelectedItem, SelectionType);
}

void UHeroDebugWidget::Ability2Changed(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	RemapAbility(EHeroAbilityInputID::Ability2, SelectedItem, SelectionType);
}

void UHeroDebugWidget::Ability3Changed(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	RemapAbility(EHeroAbilityInputID::Ability3, SelectedItem, SelectionType);
}

void UHeroDebugWidget::RemapAbility(TEnumAsByte<EHeroAbilityInputID::Type> Command, FString SelectedItem, ESelectInfo::Type SelectionType)
{
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwningPlayerPawn());

	if (HeroCharacter)
	{
		UHeroAbilityDataAsset* AbilityData = HeroCharacter->GetDefaultAbilityDataAssert();
		UAbilitySystemComponent* AbilitySystemComponent = HeroCharacter->GetAbilitySystemComponent();
		TArray<FGameplayAbilitySpec> Abilities = AbilitySystemComponent->GetActivatableAbilities();

		for (FGameplayAbilitySpec Ability : Abilities)
		{
			uint32 ID = Ability.InputID;
			if (ID == Command)
			{
				FGameplayAbilitySpecHandle AbilityHandle = Ability.Handle;
				AbilitySystemComponent->ClearAbility(AbilityHandle);
				break;
			}
			//UE_LOG(LogTemp, Warning, TEXT("%s"), *Ability.GetDebugString());
		}
		if (AbilityData)
		{
			for (FHeroGameplayAbilityBindInfo AbilityInfo : AbilityData->Abilities)
			{
				if (AbilityInfo.AbilityName.ToString() == SelectedItem)
				{
					AbilitySystemComponent->GiveAbility(
						FGameplayAbilitySpec(AbilityInfo.HeroAbilities, 1, (int32)Command, AbilitySystemComponent->GetOwner()));
				}
			}
		}
	}
}

void UHeroDebugWidget::PopulateAbilityComboBox(class UComboBoxString& AbilitySelector)
{
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwningPlayerPawn());
	if (HeroCharacter)
	{
		UHeroAbilityDataAsset* AbilityData = HeroCharacter->GetDefaultAbilityDataAssert();
		if (AbilityData)
		{
			for (FHeroGameplayAbilityBindInfo AbilityInfo : AbilityData->Abilities)
			{
				AbilitySelector.AddOption(AbilityInfo.AbilityName.ToString());
			}
		}
	}

}
