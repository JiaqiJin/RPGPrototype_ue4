// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "RPG/Attributes/HeroPlayerAttributeSet.h"
#include "RPG/RPGCharacter.h"
#include "RPG/PlayerState/HeroPlayerState.h"

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


// Called every frame
//void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
//	// ...
//}

void UHealthComponent::HealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	UE_LOG(LogTemp, Warning, TEXT("New value = %f | Old value = %f"), NewValue, OldValue);
}

void UHealthComponent::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	float NewValue = Data.NewValue;
	float OldValue = Data.OldValue;

	UE_LOG(LogTemp, Warning, TEXT("Max New value = %f | Max Old value = %f"), NewValue, OldValue);
}

void UHealthComponent::InitializeHealthAttribute(AHeroPlayerState* HeroPlayerState)
{
	PlayerAttributes = HeroPlayerState->GetAttributeSetBase();
	if (PlayerAttributes.IsValid())
	{
		MaxHealth = PlayerAttributes->GetMaxHealth();
		Health = MaxHealth;
		PlayerAttributes->InitHealth(Health);
	}
}

void UHealthComponent::BindHealthAttributeChange(class ARPGCharacter* HeroCharacter)
{
	AbilitySystemComponent = HeroCharacter->GetAbilitySystemComponent();

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
	(PlayerAttributes->GetHealthAttribute()).AddUObject(this, &UHealthComponent::HealthChanged);

	AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate
	(PlayerAttributes->GetHealthAttribute()).AddUObject(this, &UHealthComponent::MaxHealthChanged);
}


