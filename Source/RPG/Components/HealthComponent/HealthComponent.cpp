// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "RPG/Attributes/HeroPlayerAttributeSet.h"
#include "RPG/Data/Health/HealthDataAssert.h"
#include "RPG/RPGCharacter.h"
#include "RPG/PlayerState/HeroPlayerState.h"
#include "RPG/Controller/HeroPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "RPG/UI/Main/HeroCharacterUIMain.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwner());
	AHeroPlayerState* HeroPlayerState = HeroCharacter->GetPlayerState<AHeroPlayerState>();

	if (HeroPlayerState)
	{
		InitializeHealthAttribute(HeroPlayerState);
	}

	if (HeroCharacter)
	{
		BindHealthAttributeChange(HeroCharacter);
	}
}

void UHealthComponent::HealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;
	
	Health = NewValue;
	UpdateHealthBarPercent();
	UpdateHealthBarText();

	ARPGCharacter* Character = Cast<ARPGCharacter>(GetOwner());
	if (Character)
	{
		AHeroPlayerState* PS = Cast<AHeroPlayerState>(Character->GetPlayerState());
		PlayerAttributes = PS->GetAttributeSetBase();
		if (Health == PlayerAttributes->GetMaxHealth() && PlayerAttributes.IsValid())
		{
			RemoveHealthRegenerationEffect(Character);
		}
	}

	//UE_LOG(LogTemp, Warning, TEXT("Max New value = %f | Max Old value = %f"), NewValue, OldValue);
}

void UHealthComponent::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	MaxHealth = NewValue;
	UpdateHealthBarPercent();
	UpdateHealthBarText();

	UE_LOG(LogTemp, Warning, TEXT("Max New value = %f | Max Old value = %f"), NewValue, OldValue);
}

void UHealthComponent::HealthRegenerationChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	HealthRegenerationValue = NewValue;
	UpdateHealthRegenerationBarText();
}

void UHealthComponent::InitializeHealthAttribute(AHeroPlayerState* HeroPlayerState)
{
	PlayerAttributes = HeroPlayerState->GetAttributeSetBase();
	if (PlayerAttributes.IsValid())
	{
		MaxHealth = PlayerAttributes->GetMaxHealth();
		Health = MaxHealth;
		HealthRegenerationValue = PlayerAttributes->GetHealthRegeneration();
		PlayerAttributes->InitHealth(Health);
		UpdateHealthBarPercent();
		UpdateHealthBarText();
		UpdateHealthRegenerationBarText();
		UpdateRegenerationVisibility();
	}

}

void UHealthComponent::BindHealthAttributeChange(class ARPGCharacter* HeroCharacter)
{
	AbilitySystemComponent = HeroCharacter->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid())
	{
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetHealthAttribute()).AddUObject(this, &UHealthComponent::HealthChanged);

		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetMaxHealthAttribute()).AddUObject(this, &UHealthComponent::MaxHealthChanged);

		MaxHealthRegChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetHealthRegenerationAttribute()).AddUObject(this, &UHealthComponent::HealthRegenerationChanged);
	}
}

void UHealthComponent::UpdateHealthBarPercent()
{
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthBarPercentage(Health / MaxHealth);
		}
	}
}

void UHealthComponent::UpdateHealthBarText()
{
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthTextBlock(Health, MaxHealth);
		}
	}
}

void UHealthComponent::RemoveHealthRegenerationEffect(class ARPGCharacter* HeroCharacter)
{
	AbilitySystemComponent = HeroCharacter->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid() && HealthData)
	{
		AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(HealthData->HealthRegPreventionEffect,
			AbilitySystemComponent.Get(), -1);
		//AbilitySystemComponent->RemoveActiveEffectsWithGrantedTags()
	}
}

void UHealthComponent::UpdateHealthRegenerationBarText()
{
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthRegenerationValue(HealthRegenerationValue);
			MainUI->SetHealthRegenerationVisibility(Health != MaxHealth);
		}
	}
}

void UHealthComponent::UpdateRegenerationVisibility()
{

}
