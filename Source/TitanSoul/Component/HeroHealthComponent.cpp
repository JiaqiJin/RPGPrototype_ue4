// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroHealthComponent.h"
#include "../TitanSoulCharacter.h"
#include "../Player/HeroPlayerState.h"

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

	// ...
	ATitanSoulCharacter* PlayerCharacter = Cast<ATitanSoulCharacter>(GetOwner());
	AHeroPlayerState* PlayerState = PlayerCharacter->GetPlayerState<AHeroPlayerState>();
	if (PlayerState)
	{
		UE_LOG(LogTemp, Warning, TEXT("KAWAII DESINE"));
	}
}

void UHeroHealthComponent::HealthChanged(const FOnAttributeChangeData& Data)
{

}

void UHeroHealthComponent::MaxHealthChanged(const FOnAttributeChangeData& Data)
{

}

void UHeroHealthComponent::HealthRegenerationChanged(const FOnAttributeChangeData& Data)
{

}

void UHeroHealthComponent::InitializeHealthAttribute()
{

}


void UHeroHealthComponent::BindHealthAttributeChange()
{

}

void UHeroHealthComponent::UpdateHealthBarPercent()
{

}

void UHeroHealthComponent::UpdateHealthBarText()
{

}

void UHeroHealthComponent::UpdateHealthRegenerationBarText()
{

}

void UHeroHealthComponent::UpdateRegenerationVisibility()
{

}

void UHeroHealthComponent::RemoveHealthRegenerationEffect()
{

}

