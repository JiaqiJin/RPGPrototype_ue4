// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroCharacterUIMain.h"
#include "RPG/UI/Health/CharacterHealthWidget.h"

bool UHeroCharacterUIMain::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

void UHeroCharacterUIMain::SetHealthBarPercentage(float value)
{
	HeroHealth->SetHealthBarPercentage(FMath::Clamp<float>(value, 0.0f, 1.0f));
}

void UHeroCharacterUIMain::SetHealthTextBlock(float health, float MaxHealth)
{
	HeroHealth->SetHealthTextBlock(FText::FromString(FString::Printf(TEXT("%f / %f"), health, MaxHealth)));
}
