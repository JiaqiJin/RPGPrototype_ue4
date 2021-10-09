// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHeroUIWidget.h"
#include "HeroComponent/HeroHealthWidget.h"
#include "HeroComponent/HeroManaWidget.h"
#include "HeroComponent/HeroStaminaWidget.h"


bool UMainHeroUIWidget::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

void UMainHeroUIWidget::SetHealthBarPercentage(float value)
{
	HeroHealth->SetHealthBarPercentage(FMath::Clamp<float>(value, 0.0f, 1.0f));
}

void UMainHeroUIWidget::SetHealthTextBlock(float health, float MaxHealth)
{
	uint32 HealthInterger = FMath::RoundHalfFromZero(health);
	uint32 MaxHealthInterger = FMath::RoundHalfFromZero(MaxHealth);
	HeroHealth->SetHealthTextBlock(FText::FromString(FString::Printf(TEXT("%i / %i"), HealthInterger, MaxHealthInterger)));
}

void UMainHeroUIWidget::SetHealthRegenerationValue(float HealthRegeneration)
{
	FString HealthRegString = "+";
	HealthRegString += FString::SanitizeFloat(HealthRegeneration);
	//float HealthRegInterger = FMath::RoundHalfFromZero(HealthRegeneration);
	HeroHealth->SetHealthRegenerationValue(FText::FromString(HealthRegString));
}

void UMainHeroUIWidget::SetHealthRegenerationVisibility(bool Visible)
{
	HeroHealth->SetHealthRegenerationVisibility(Visible);
}

// ---------------- Mana ---------------
void UMainHeroUIWidget::SetManaBarPercentage(float value)
{
	HeroMana->SetManaBarPercentage(FMath::Clamp<float>(value, 0.0f, 1.0f));
}

void UMainHeroUIWidget::SetManaBarTextBlock(float Mana, float MaxMana)
{
	uint32 ManaInterger = FMath::RoundHalfFromZero(Mana);
	uint32 MaxManaInterger = FMath::RoundHalfFromZero(MaxMana);
	HeroMana->SetManaTextBlock(FText::FromString(FString::Printf(TEXT("%i / %i"), ManaInterger, MaxManaInterger)));
}

void UMainHeroUIWidget::SetManaBarRegenerationValue(float ManaRegeneration)
{
	FString ManaRegString = "+";
	ManaRegString += FString::SanitizeFloat(ManaRegeneration);
	//float HealthRegInterger = FMath::RoundHalfFromZero(HealthRegeneration);
	HeroMana->SetManaRegenerationValue(FText::FromString(ManaRegString));
}

void UMainHeroUIWidget::SetManaBarRegenerationVisibility(bool Visible)
{
	HeroMana->SetManaRegenerationVisibility(Visible);
}

// ---------------- Stamin ---------------
void UMainHeroUIWidget::SetStaminaBarPercentage(float value)
{
	HeroStamina->SetStaminaBarPercentage(FMath::Clamp<float>(value, 0.0f, 1.0f));
}

void UMainHeroUIWidget::SetStaminaBarTextBlock(float Mana, float MaxMana)
{
	uint32 StaminaInterger = FMath::RoundHalfFromZero(Mana);
	uint32 MaxStaminaInterger = FMath::RoundHalfFromZero(MaxMana);
	HeroStamina->SetStaminaTextBlock(FText::FromString(FString::Printf(TEXT("%i / %i"), StaminaInterger, MaxStaminaInterger)));
}

void UMainHeroUIWidget::SetStaminaBarRegenerationValue(float ManaRegeneration)
{
	FString ManaRegString = "+";
	ManaRegString += FString::SanitizeFloat(ManaRegeneration);
	//float HealthRegInterger = FMath::RoundHalfFromZero(HealthRegeneration);
	HeroStamina->SetStaminaRegenerationValue(FText::FromString(ManaRegString));
}

void UMainHeroUIWidget::SetStaminBarRegenerationVisibility(bool Visible)
{
	HeroStamina->SetStaminaRegenerationVisibility(Visible);
}

