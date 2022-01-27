// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "../Character/HeroPlayerCharacter.h"
#include "../Character/HeroPlayerState.h"
#include "../Attributes/HeroPlayerAttributeSet.h"
#include "../Character/HeroPlayerController.h"
#include "../UI/HeroCharacterUIMain.h"
#include "../Data/HeroHealthData.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
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

	InitializeHealthAttribute(PS);

	BindHealthAttributeChange();

}

void UHealthComponent::HealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	Health = NewValue;
	UpdateHealthBarPercent();
	UpdateHealthBarText();

	//UE_LOG(LogTemp, Warning, TEXT("New Value : %f, Old Value : %f"), NewValue, OldValue)
	AHeroPlayerCharacter* Character = Cast<AHeroPlayerCharacter>(GetOwner());
	if (Character)
	{
		AHeroPlayerState* PS = Cast<AHeroPlayerState>(Character->GetPlayerState());
		PlayerAttributes = PS->GetAttributeSetBase();
		if (Health == PlayerAttributes->GetMaxHealth() && PlayerAttributes.IsValid())
		{
			RemoveHealthRegenerationEffect();
		}
	}
}

void UHealthComponent::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	MaxHealth = NewValue;
	UpdateHealthBarPercent();
	UpdateHealthBarText();

}

void UHealthComponent::InitializeHealthAttribute(class AHeroPlayerState* PS)
{
	if (PS)
	{
		PlayerAttributes = PS->GetAttributeSetBase();
		if (PlayerAttributes.IsValid())
		{
			MaxHealth = PlayerAttributes->GetMaxHealth();
			Health = MaxHealth;
			PlayerAttributes->InitHealth(Health);

			//UE_LOG(LogTemp, Warning, TEXT("Max health : %f, Health : %f"), MaxHealth, Health);

			UpdateHealthBarPercent();
			UpdateHealthBarText();
			UpdateHealthRegenerationBarText();
			UpdateRegenerationVisibility();
		}
	}
}

void UHealthComponent::RemoveHealthRegenerationEffect()
{
	if (AbilitySystemComponent.IsValid() && HealthData)
	{
		AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(HealthData->HealthRegenerationPreventionEffect,
			AbilitySystemComponent.Get());
	}
}

void UHealthComponent::BindHealthAttributeChange()
{
	if (PlayerCharacter)
	{
		if (AbilitySystemComponent.IsValid())
		{
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributes->GetHealthAttribute()).AddUObject(this,
				&UHealthComponent::HealthChanged);

			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(PlayerAttributes->GetMaxHealthAttribute()).AddUObject(this,
				&UHealthComponent::MaxHealthChanged);
		}
	}
}

void UHealthComponent::UpdateHealthBarPercent()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthBarPercentage(Health / MaxHealth);
		}
	}
}

void UHealthComponent::UpdateHealthBarText()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthTextBlock(Health, MaxHealth);
		}
	}
}

void UHealthComponent::UpdateHealthRegenerationBarText()
{
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(PlayerCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthRegenerationVisibility(Health != MaxHealth);
		}
	}
}

void UHealthComponent::UpdateRegenerationVisibility()
{

}