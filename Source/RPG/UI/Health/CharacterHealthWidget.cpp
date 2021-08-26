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
		HealthBar->SetPercent(value);
	}
}

void UCharacterHealthWidget::SetHealthTextBlock(FText HealthTextValue)
{
	//FText NewHealthText = FText::FromString(TEXT("%f%f", health, MaxHealth));
	if (HealthText)
	{
		HealthText->SetText(HealthTextValue);
	}
}

void UCharacterHealthWidget::SetHealthRegenerationValue(FText RegValue)
{
	if (HealthReg)
	{
		HealthReg->SetText(RegValue);
	}
}

void UCharacterHealthWidget::SetHealthRegenerationVisibility(bool bIsVisible)
{
	if (HealthReg)
	{
		ESlateVisibility HealthVisibility = bIsVisible ? ESlateVisibility::Visible : ESlateVisibility::Hidden;
		HealthReg->SetVisibility(HealthVisibility);
	}
}