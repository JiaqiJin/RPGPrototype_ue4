// Fill out your copyright notice in the Description page of Project Settings.


#include "ManaComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "../Character/HeroPlayerCharacter.h"
#include "../Character/HeroPlayerState.h"
#include "../Attributes/HeroPlayerAttributeSet.h"
#include "../Character/HeroPlayerController.h"
#include "../UI/HeroCharacterUIMain.h"

// Sets default values for this component's properties
UManaComponent::UManaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UManaComponent::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<AHeroPlayerCharacter>(GetOwner());
	if (!PlayerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() PlayerCharacter Initialization error."),
			*FString(__FUNCTION__), *GetName());
	}

	AHeroPlayerState* PS = PlayerCharacter->GetPlayerState<AHeroPlayerState>();
	AbilitySystemComponent = PlayerCharacter->GetAbilitySystemComponent();

	InitializeManaAttribute(PS);

	BindManaAttributeChange();

}

void UManaComponent::ManaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	Mana = NewValue;
	UpdateManaBarPercent();
	UpdateManaBarText();
	UpdateManaRegenerationBarText();
	UpdateRegenerationVisibility();
	
	UE_LOG(LogTemp, Warning, TEXT("New Value : %f, Old Value : %f"), NewValue, OldValue)
}

void UManaComponent::MaxManaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	MaxMana = NewValue;
	UpdateManaBarPercent();
	UpdateManaBarText();

}

void UManaComponent::ManaRegenerationChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	ManaRegenerationValue = NewValue;
	UpdateManaRegenerationBarText();
}

void UManaComponent::InitializeManaAttribute(class AHeroPlayerState* PS)
{
	if (PS)
	{
		PlayerAttributes = PS->GetAttributeSetBase();
		if (PlayerAttributes.IsValid())
		{
			MaxMana = PlayerAttributes->GetMaxMana();
			Mana = MaxMana;
			PlayerAttributes->InitMana(Mana);
			ManaRegenerationValue = PlayerAttributes->GetManaRegeneration();
			//UE_LOG(LogTemp, Warning, TEXT("Max Mana : %f, Mana : %f"), MaxMana, Mana);

			UpdateManaBarPercent();
			UpdateManaBarText();
			UpdateManaRegenerationBarText();
			UpdateRegenerationVisibility();
		}
	}
}

void UManaComponent::BindManaAttributeChange()
{
	if (PlayerCharacter)
	{
		if (AbilitySystemComponent.IsValid())
		{
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributes->GetManaAttribute()).AddUObject(this,
				&UManaComponent::ManaChanged);

			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributes->GetMaxManaAttribute()).AddUObject(this,
				&UManaComponent::MaxManaChanged);

			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributes->GetManaRegenerationAttribute()).AddUObject(this,
				&UManaComponent::ManaRegenerationChanged);
		}
	}
}

void UManaComponent::UpdateManaBarPercent()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaBarPercentage(Mana / MaxMana);
		}
	}
}

void UManaComponent::UpdateManaBarText()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaTextBlock(Mana, MaxMana);
		}
	}
}

void UManaComponent::UpdateManaRegenerationBarText()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaRegenerationValue(ManaRegenerationValue);
		}
	}
}

void UManaComponent::UpdateRegenerationVisibility()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaRegenerationVisibility(Mana != MaxMana);
		}
	}
}

