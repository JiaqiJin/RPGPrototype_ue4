// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterHealthWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

bool UCharacterHealthWidget::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

void UCharacterHealthWidget::SetHealthBarPercentage(float value)
{
	if (HealthBar)
	{
		HealthBar->SetPercent(FMath::Clamp<float>(value, 0.0f, 1.0f));
	}
}

void UCharacterHealthWidget::SetHealthTextPercentage(float health, float MaxHealth)
{
	//FText NewHealthText = FText::FromString(TEXT("%f%f", health, MaxHealth));
	if (HealthText)
	{
		HealthText->SetText(FText::FromString(FString::Printf(TEXT("%f%f"), health, MaxHealth)));
	}
}
