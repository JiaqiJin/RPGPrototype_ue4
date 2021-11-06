// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroStaminaComponent.h"
#include "../TitanSoulCharacter.h"
#include "../Player/HeroPlayerState.h"
#include "../Player/HeroPlayerController.h"
#include "../UI/MainHeroUIWidget.h"
#include "../Datas/StaminaDataAsset.h"
#include "../Attributes/HeroAttributeSet.h"

// Sets default values for this component's properties
UHeroStaminaComponent::UHeroStaminaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHeroStaminaComponent::BeginPlay()
{
	Super::BeginPlay();

	ATitanSoulCharacter* Character = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerState* PlayerState = Cast<AHeroPlayerState>(Character->GetPlayerState());
	if (PlayerState)
	{
		InitializeStaminaAttribute(PlayerState);
	}

	if (Character)
	{
		BindStaminaAttributeChange(Character);
	}
}

void UHeroStaminaComponent::InitializeStaminaAttribute(AHeroPlayerState* HeroPlayerState)
{
	PlayerAttributes = HeroPlayerState->GetAttributeSetBase();
	if (PlayerAttributes.IsValid())
	{
		MaxStamina = PlayerAttributes->GetMaxStamina();
		Stamina = MaxStamina;
		StaminaRegenerationValue = PlayerAttributes->GetStaminaRegenRate();
		PlayerAttributes->InitStamina(Stamina);
		UpdateStaminaBarPercent();
		UpdateStaminahBarText();
		UpdateStaminaRegenerationBarText();
	}
}

void UHeroStaminaComponent::BindStaminaAttributeChange(ATitanSoulCharacter* Character)
{
	AbilitySystemComponent = Character->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid())
	{
		StaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetStaminaAttribute()).AddUObject(this, &UHeroStaminaComponent::StaminaChanged);

		MaxStaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetMaxStaminaAttribute()).AddUObject(this, &UHeroStaminaComponent::MaxStaminaChanged);

		MaxStaminaRegChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetStaminaRegenRateAttribute()).AddUObject(this, &UHeroStaminaComponent::StaminaRegenerationChanged);
	}
}

void UHeroStaminaComponent::StaminaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	Stamina = NewValue;
	UpdateStaminaBarPercent();
	UpdateStaminahBarText();

	ATitanSoulCharacter* Character = Cast<ATitanSoulCharacter>(GetOwner());
	if (Character)
	{
		AHeroPlayerState* PlayerState = Cast<AHeroPlayerState>(Character->GetPlayerState());
		if (PlayerState)
		{
			PlayerAttributes = PlayerState->GetAttributeSetBase();
			if (Stamina == PlayerAttributes->GetMaxStamina() && PlayerAttributes.IsValid())
			{
				RemoveStaminaRegenerationEffect(Character);
			}
		}
	}
}

void UHeroStaminaComponent::MaxStaminaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	MaxStamina = NewValue;
	UpdateStaminaBarPercent();
	UpdateStaminahBarText();
}

void UHeroStaminaComponent::StaminaRegenerationChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	StaminaRegenerationValue = NewValue;
	UpdateStaminaRegenerationBarText();
}

void UHeroStaminaComponent::UpdateStaminaBarPercent()
{
	ATitanSoulCharacter* HeroCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UMainHeroUIWidget* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetStaminaBarPercentage(Stamina / MaxStamina);
		}
	}
}

void UHeroStaminaComponent::UpdateStaminahBarText()
{
	ATitanSoulCharacter* HeroCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UMainHeroUIWidget* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetStaminaBarTextBlock(Stamina, MaxStamina);
		}
	}
}

void UHeroStaminaComponent::UpdateStaminaRegenerationBarText()
{
	ATitanSoulCharacter* HeroCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UMainHeroUIWidget* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetStaminaBarRegenerationValue(StaminaRegenerationValue);
			MainUI->SetStaminBarRegenerationVisibility(Stamina != MaxStamina);
		}
	}
}

void UHeroStaminaComponent::RemoveStaminaRegenerationEffect(ATitanSoulCharacter* Character)
{
	AbilitySystemComponent = Character->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid() && StaminaData)
	{
		AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(StaminaData->StaminaRegenerationEffect,
			AbilitySystemComponent.Get(), -1);
	}
}


