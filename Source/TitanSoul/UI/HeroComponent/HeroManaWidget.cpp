// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroManaWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

bool UHeroManaWidget::Initialize()
{
	bool Success = Super::Initialize();

	if (!Success) { return false; }

	return true;
}

void UHeroManaWidget::SetManaBarPercentage(float value)
{
	if (ManaBar)
	{
		ManaBar->SetPercent(value);
	}
}

void UHeroManaWidget::SetManaTextBlock(FText ManaTextValue)
{
	if (ManaText)
	{
		ManaText->SetText(ManaTextValue);
	}
}

void UHeroManaWidget::SetManaRegenerationValue(FText RegValue)
{
	if (ManaRegText)
	{
		ManaRegText->SetText(RegValue);
	}
}

void UHeroManaWidget::SetManaRegenerationVisibility(bool bIsVisible)
{
	if (ManaRegText)
	{
		ESlateVisibility ManaVisibility = bIsVisible ? ESlateVisibility::Visible : ESlateVisibility::Hidden;
		ManaRegText->SetVisibility(ManaVisibility);
	}
}