// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterManaWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

bool UCharacterManaWidget::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

void UCharacterManaWidget::SetManaBarPercentage(float value)
{
	if (ManaBar)
	{
		ManaBar->SetPercent(value);
	}
}

void UCharacterManaWidget::SetManaTextBlock(FText HealthTextValue)
{
	if (ManaText)
	{
		ManaText->SetText(HealthTextValue);
	}
}

void UCharacterManaWidget::SetManaRegenerationValue(FText RegValue)
{
	if (ManaReg)
	{
		ManaReg->SetText(RegValue);
	}
}

void UCharacterManaWidget::SetManaRegenerationVisibility(bool bIsVisible)
{
	if (ManaReg)
	{
		ESlateVisibility HealthVisibility = bIsVisible ? ESlateVisibility::Visible : ESlateVisibility::Hidden;
		ManaReg->SetVisibility(HealthVisibility);
	}
}

