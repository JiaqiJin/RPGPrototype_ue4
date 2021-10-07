// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroStaminaWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

bool UHeroStaminaWidget::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

void UHeroStaminaWidget::SetStaminaBarPercentage(float value)
{
	if (StaminaBar)
	{
		StaminaBar->SetPercent(value);
	}
}

void UHeroStaminaWidget::SetStaminaTextBlock(FText StaminaTextValue)
{
	if (StaminaText)
	{
		StaminaText->SetText(StaminaTextValue);
	}
}

void UHeroStaminaWidget::SetStaminaRegenerationValue(FText RegValue)
{
	if (StaminaRegText)
	{
		StaminaRegText->SetText(RegValue);
	}
}

void UHeroStaminaWidget::SetStaminaRegenerationVisibility(bool bIsVisible)
{
	if (StaminaRegText)
	{
		ESlateVisibility StaminaVisibility = bIsVisible ? ESlateVisibility::Visible : ESlateVisibility::Hidden;
		StaminaRegText->SetVisibility(StaminaVisibility);
	}
}