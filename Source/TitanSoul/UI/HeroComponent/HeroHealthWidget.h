// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HeroHealthWidget.generated.h"

/**
 * 
 */
UCLASS()
class TITANSOUL_API UHeroHealthWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* HealthText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* HealthRegText;

public:
	void SetHealthBarPercentage(float value);
	void SetHealthTextBlock(FText HealthTextValue);
	void SetHealthRegenerationValue(FText RegValue);
	void SetHealthRegenerationVisibility(bool bIsVisible);
};
