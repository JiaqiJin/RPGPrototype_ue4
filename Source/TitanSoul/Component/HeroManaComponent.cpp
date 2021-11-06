// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroManaComponent.h"
#include "../TitanSoulCharacter.h"
#include "../Player/HeroPlayerState.h"
#include "../Player/HeroPlayerController.h"
#include "../UI/MainHeroUIWidget.h"
#include "../Datas/ManaDataAsset.h"
#include "../Attributes/HeroAttributeSet.h"

// Sets default values for this component's properties
UHeroManaComponent::UHeroManaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHeroManaComponent::BeginPlay()
{
	Super::BeginPlay();
	
	ATitanSoulCharacter* Character = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerState* PlayerState = Cast<AHeroPlayerState>(Character->GetPlayerState());
	if (PlayerState)
	{
		InitializeManaAttribute(PlayerState);
	}

	if (Character)
	{
		BindManaAttributeChange(Character);
	}
}

void UHeroManaComponent::InitializeManaAttribute(AHeroPlayerState* HeroPlayerState)
{
	PlayerAttributes = HeroPlayerState->GetAttributeSetBase();
	if (PlayerAttributes.IsValid())
	{
		MaxMana = PlayerAttributes->GetMaxMana();
		Mana = MaxMana;
		ManaRegenerationValue = PlayerAttributes->GetManaRegenRate();
		PlayerAttributes->InitMana(Mana);
		UpdateManaBarPercent();
		UpdateManahBarText();
		UpdateManaRegenerationBarText();
	}
}

void UHeroManaComponent::BindManaAttributeChange(ATitanSoulCharacter* Character)
{
	AbilitySystemComponent = Character->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid())
	{
		ManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetManaAttribute()).AddUObject(this, &UHeroManaComponent::ManaChanged);

		MaxManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetMaxManaAttribute()).AddUObject(this, &UHeroManaComponent::MaxManaChanged);

		MaxManaRegChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetManaRegenRateAttribute()).AddUObject(this, &UHeroManaComponent::ManaRegenerationChanged);
	}
}

void UHeroManaComponent::ManaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	Mana = NewValue;
	UpdateManaBarPercent();
	UpdateManahBarText();

	ATitanSoulCharacter* Character = Cast<ATitanSoulCharacter>(GetOwner());
	if (Character)
	{
		AHeroPlayerState* PlayerState = Cast<AHeroPlayerState>(Character->GetPlayerState());
		if (PlayerState)
		{
			PlayerAttributes = PlayerState->GetAttributeSetBase();
			if (Mana == PlayerAttributes->GetMaxMana() && PlayerAttributes.IsValid())
			{
				RemoveManaRegenerationEffect(Character);
			}
		}
	}
}

void UHeroManaComponent::MaxManaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	MaxMana = NewValue;
	UpdateManaBarPercent();
	UpdateManahBarText();
}

void UHeroManaComponent::ManaRegenerationChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	ManaRegenerationValue = NewValue;
	UpdateManaRegenerationBarText();
}

void UHeroManaComponent::UpdateManaBarPercent()
{
	ATitanSoulCharacter* HeroCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UMainHeroUIWidget* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaBarPercentage(Mana / MaxMana);
		}
	}
}

void UHeroManaComponent::UpdateManahBarText()
{
	ATitanSoulCharacter* HeroCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UMainHeroUIWidget* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaBarTextBlock(Mana, MaxMana);
		}
	}
}

void UHeroManaComponent::UpdateManaRegenerationBarText()
{
	ATitanSoulCharacter* HeroCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UMainHeroUIWidget* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaBarRegenerationValue(ManaRegenerationValue);
			MainUI->SetManaBarRegenerationVisibility(Mana != MaxMana);
		}
	}
}

void UHeroManaComponent::RemoveManaRegenerationEffect(ATitanSoulCharacter* Character)
{
	AbilitySystemComponent = Character->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid() && ManaData)
	{
		AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(ManaData->ManaRegenerationEffect,
			AbilitySystemComponent.Get(), -1);
	}
}