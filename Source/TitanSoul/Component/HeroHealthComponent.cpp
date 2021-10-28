// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroHealthComponent.h"
#include "../TitanSoulCharacter.h"
#include "../Player/HeroPlayerState.h"
#include "../Player/HeroPlayerController.h"
#include "../UI/MainHeroUIWidget.h"
#include "../Datas/HealthDataAsset.h"

// Sets default values for this component's properties
UHeroHealthComponent::UHeroHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHeroHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	ATitanSoulCharacter* PlayerCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerState* PlayerState = PlayerCharacter->GetPlayerState<AHeroPlayerState>();
	if (PlayerState)
	{
		InitializeHealthAttribute(PlayerState);
	}

	if (PlayerCharacter)
	{
		BindHealthAttributeChange(PlayerCharacter);
	}
}

void UHeroHealthComponent::HealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	Health = NewValue;
	UpdateHealthBarText();
	UpdateHealthBarPercent();

	ATitanSoulCharacter* PlayerCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	if (PlayerCharacter)
	{
		AHeroPlayerState* PS = PlayerCharacter->GetPlayerState<AHeroPlayerState>();
		PlayerAttributeSet = PS->GetAttributeSetBase();
		if (Health == PlayerAttributeSet->GetMaxHealth() && PlayerAttributeSet.IsValid())
		{
			RemoveHealthRegenerationEffect(PlayerCharacter);
		}
	}
}

void UHeroHealthComponent::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	MaxHealth = NewValue;
	UpdateHealthBarPercent();
	UpdateHealthBarText();

	UE_LOG(LogTemp, Warning, TEXT("Max New value = %f | Max Old value = %f"), NewValue, OldValue);
}

void UHeroHealthComponent::HealthRegenerationChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	HealthRegenerationValue = NewValue;
	UpdateHealthRegenerationBarText();
}

void UHeroHealthComponent::InitializeHealthAttribute(AHeroPlayerState* HeroPlayerState)
{
	PlayerAttributeSet = HeroPlayerState->GetAttributeSetBase();
	if (PlayerAttributeSet.IsValid())
	{
		MaxHealth = PlayerAttributeSet->GetMaxHealth();
		Health = MaxHealth;
		HealthRegenerationValue = PlayerAttributeSet->GetHealthRegenRate();
		PlayerAttributeSet->InitHealth(Health);
		UpdateHealthBarPercent();
		UpdateHealthBarText();
		UpdateHealthRegenerationBarText();
		UpdateRegenerationVisibility();
	}
}


void UHeroHealthComponent::BindHealthAttributeChange(class ATitanSoulCharacter* PlayerCharacter)
{
	AbilitySystemComponent = PlayerCharacter->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid())
	{
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributeSet->GetHealthAttribute()).AddUObject(this, &UHeroHealthComponent::HealthChanged);

		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributeSet->GetMaxHealthAttribute()).AddUObject(this, &UHeroHealthComponent::MaxHealthChanged);

		MaxHealthRegChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributeSet->GetHealthRegenRateAttribute()).AddUObject(this, &UHeroHealthComponent::HealthRegenerationChanged);
	}
}

void UHeroHealthComponent::UpdateHealthBarPercent()
{
	ATitanSoulCharacter* HeroCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UMainHeroUIWidget* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthBarPercentage(Health / MaxHealth);
		}
	}
}

void UHeroHealthComponent::UpdateHealthBarText()
{
	ATitanSoulCharacter* HeroCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UMainHeroUIWidget* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthTextBlock(Health, MaxHealth);
		}
	}
}

void UHeroHealthComponent::UpdateHealthRegenerationBarText()
{
	ATitanSoulCharacter* HeroCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UMainHeroUIWidget* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetHealthTextBlock(Health, MaxHealth);
		}
	}
}

void UHeroHealthComponent::UpdateRegenerationVisibility()
{

}

void UHeroHealthComponent::RemoveHealthRegenerationEffect(class ATitanSoulCharacter* HeroCharacter)
{
	AbilitySystemComponent = HeroCharacter->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid() && HealthData)
	{
		AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(HealthData->HealthPreventionEffect,
			AbilitySystemComponent.Get(), 1);
	}
}

