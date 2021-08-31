// Fill out your copyright notice in the Description page of Project Settings.


#include "ManaComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "RPG/Attributes/HeroPlayerAttributeSet.h"
#include "RPG/Data/Mana/ManaDataAssert.h"
#include "RPG/RPGCharacter.h"
#include "RPG/PlayerState/HeroPlayerState.h"
#include "RPG/Controller/HeroPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "RPG/UI/Main/HeroCharacterUIMain.h"

// Sets default values for this component's properties
UManaComponent::UManaComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UManaComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	// ...
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwner());
	AHeroPlayerState* HeroPlayerState = HeroCharacter->GetPlayerState<AHeroPlayerState>();

	if (HeroPlayerState)
	{
		InitializeManaAttribute(HeroPlayerState);
	}

	if (HeroCharacter)
	{
		BindManaAttributeChange(HeroCharacter);
	}
}

// Called every frame
void UManaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UManaComponent::ManaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	Mana = NewValue;
	UpdateManaBarPercent();
	UpdateManahBarText();

	ARPGCharacter* Character = Cast<ARPGCharacter>(GetOwner());
	if (Character)
	{
		AHeroPlayerState* PS = Cast<AHeroPlayerState>(Character->GetPlayerState());
		PlayerAttributes = PS->GetAttributeSetBase();
		if (Mana == PlayerAttributes->GetMaxMana() && PlayerAttributes.IsValid())
		{
			RemoveManaRegenerationEffect(Character);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Max New value = %f | Max Old value = %f"), NewValue, OldValue);
}

void UManaComponent::MaxManaChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	MaxMana = NewValue;
	UpdateManaBarPercent();
	UpdateManahBarText();

	//UE_LOG(LogTemp, Warning, TEXT("Max New value = %f | Max Old value = %f"), NewValue, OldValue);
}

void UManaComponent::ManaRegenerationChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	ManaRegenerationValue = NewValue;
	UpdateManaRegenerationBarText();
}

void UManaComponent::InitializeManaAttribute(class AHeroPlayerState* HeroPlayerState)
{
	PlayerAttributes = HeroPlayerState->GetAttributeSetBase();
	if (PlayerAttributes.IsValid())
	{
		MaxMana = PlayerAttributes->GetMaxMana();
		Mana = MaxMana;
		ManaRegenerationValue = PlayerAttributes->GetManaRegeneration();
		PlayerAttributes->InitMana(Mana);
		UpdateManaBarPercent();
		UpdateManahBarText();
		UpdateManaRegenerationBarText();
	}
}

void UManaComponent::BindManaAttributeChange(class ARPGCharacter* HeroCharacter)
{
	AbilitySystemComponent = HeroCharacter->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid())
	{
		ManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetManaAttribute()).AddUObject(this, &UManaComponent::ManaChanged);

		MaxManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetMaxManaAttribute()).AddUObject(this, &UManaComponent::MaxManaChanged);

		MaxManaRegChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
		(PlayerAttributes->GetManaRegenerationAttribute()).AddUObject(this, &UManaComponent::ManaRegenerationChanged);
	}
}

void UManaComponent::UpdateManaBarPercent()
{
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaBarPercentage(Mana / MaxMana);
		}
	}
}

void UManaComponent::UpdateManahBarText()
{
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaBarTextBlock(Mana, MaxMana);
		}
	}
}

void UManaComponent::UpdateManaRegenerationBarText()
{
	ARPGCharacter* HeroCharacter = Cast<ARPGCharacter>(GetOwner());
	AHeroPlayerController* HeroController = Cast<AHeroPlayerController>(HeroCharacter->GetController());
	if (HeroController)
	{
		class UHeroCharacterUIMain* MainUI = HeroController->GetHeroCharacterUIMain();
		if (MainUI)
		{
			MainUI->SetManaBarRegenerationValue(ManaRegenerationValue);
			MainUI->SetManaBarRegenerationVisibility(Mana != MaxMana);
		}
	}
}

void UManaComponent::RemoveManaRegenerationEffect(ARPGCharacter* HeroCharacter)
{
	AbilitySystemComponent = HeroCharacter->GetAbilitySystemComponent();
	if (AbilitySystemComponent.IsValid() && ManaData)
	{
		AbilitySystemComponent->RemoveActiveGameplayEffectBySourceEffect(ManaData->ManaRegenerationEffect,
			AbilitySystemComponent.Get(), -1);
		//AbilitySystemComponent->RemoveActiveEffectsWithGrantedTags()
	}
}