// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStaminaWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

bool UCharacterStaminaWidget::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

void UCharacterStaminaWidget::SetStaminaBarPercentage(float value)
{
	if (StaminaBar)
	{
		StaminaBar->SetPercent(value);
	}
}

void UCharacterStaminaWidget::SetStaminaTextBlock(FText StaminaTextValue)
{
	if (StaminaText)
	{
		StaminaText->SetText(StaminaTextValue);
	}
}

void UCharacterStaminaWidget::SetStaminaRegenerationValue(FText RegValue)
{
	if (StaminaReg)
	{
		StaminaReg->SetText(RegValue);
	}
}

void UCharacterStaminaWidget::SetStaminaRegenerationVisibility(bool bIsVisible)
{
	if (StaminaReg)
	{
		ESlateVisibility StaminaVisibility = bIsVisible ? ESlateVisibility::Visible : ESlateVisibility::Hidden;
		StaminaReg->SetVisibility(StaminaVisibility);
	}
}

