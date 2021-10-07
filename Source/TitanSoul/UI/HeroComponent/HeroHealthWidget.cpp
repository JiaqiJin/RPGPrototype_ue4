// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroHealthWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

bool UHeroHealthWidget::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

void UHeroHealthWidget::SetHealthBarPercentage(float value)
{
	if (HealthBar)
	{
		HealthBar->SetPercent(value);
	}
}

void UHeroHealthWidget::SetHealthTextBlock(FText HealthTextValue)
{
	if (HealthText)
	{
		HealthText->SetText(HealthTextValue);
	}
}

void UHeroHealthWidget::SetHealthRegenerationValue(FText RegValue)
{
	if (HealthRegText)
	{
		HealthRegText->SetText(RegValue);
	}
}

void UHeroHealthWidget::SetHealthRegenerationVisibility(bool bIsVisible)
{
	if (HealthRegText)
	{
		ESlateVisibility HealthVisibility = bIsVisible ? ESlateVisibility::Visible : ESlateVisibility::Hidden;
		HealthRegText->SetVisibility(HealthVisibility);
	}
}