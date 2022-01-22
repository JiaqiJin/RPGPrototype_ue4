// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "../Character/HeroPlayerCharacter.h"
#include "../Character/HeroPlayerState.h"
#include "../Attributes/HeroPlayerAttributeSet.h"
#include "../Character/HeroPlayerController.h"
#include "../UI/HeroCharacterUIMain.h"

// Sets default values for this component's properties
UStaminaComponent::UStaminaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UStaminaComponent::BeginPlay()
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

	InitializeStaminaAttribute(PS);

	BindStaminaAttributeChange();

}

void UStaminaComponent::StaminaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	Stamina = NewValue;
	UpdateStaminaBarPercent();
	UpdateStaminaBarText();

	UE_LOG(LogTemp, Warning, TEXT("New Value : %f, Old Value : %f"), NewValue, OldValue)
}

void UStaminaComponent::MaxStaminaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	MaxStamina = NewValue;
	UpdateStaminaBarPercent();
	UpdateStaminaBarText();

}

void UStaminaComponent::InitializeStaminaAttribute(class AHeroPlayerState* PS)
{
	if (PS)
	{
		PlayerAttributes = PS->GetAttributeSetBase();
		if (PlayerAttributes.IsValid())
		{
			MaxStamina = PlayerAttributes->GetMaxStamina();
			Stamina = MaxStamina;
			PlayerAttributes->InitStamina(Stamina);

			//UE_LOG(LogTemp, Warning, TEXT("Max Stamina : %f, Stamina : %f"), MaxStamina, Stamina);

			UpdateStaminaBarPercent();
			UpdateStaminaBarText();
			UpdateStaminaRegenerationBarText();
			UpdateRegenerationVisibility();
		}
	}
}

void UStaminaComponent::BindStaminaAttributeChange()
{
	if (PlayerCharacter)
	{
		if (AbilitySystemComponent.IsValid())
		{
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributes->GetStaminaAttribute()).AddUObject(this,
				&UStaminaComponent::StaminaChanged);

			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributes->GetMaxStaminaAttribute()).AddUObject(this,
				&UStaminaComponent::MaxStaminaChanged);
		}
	}
}

void UStaminaComponent::UpdateStaminaBarPercent()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetStaminaBarPercentage(Stamina / MaxStamina);
		}
	}
}

void UStaminaComponent::UpdateStaminaBarText()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetStaminaTextBlock(Stamina, MaxStamina);
		}
	}
}

void UStaminaComponent::UpdateStaminaRegenerationBarText()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetStaminaRegenerationVisibility(Stamina != MaxStamina);
		}
	}
}

void UStaminaComponent::UpdateRegenerationVisibility()
{

}
