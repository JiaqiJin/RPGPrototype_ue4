// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HeroManaWidget.generated.h"

/**
 * 
 */
UCLASS()
class TITANSOUL_API UHeroManaWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* ManaBar;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ManaText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ManaRegText;

public:
	void SetManaBarPercentage(float value);
	void SetManaTextBlock(FText HealthTextValue);
	void SetManaRegenerationValue(FText RegValue);
	void SetManaRegenerationVisibility(bool bIsVisible);
};
