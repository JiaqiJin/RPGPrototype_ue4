// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterStaminaWidget.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API UCharacterStaminaWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* StaminaBar;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* StaminaText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* StaminaReg;

public:
	void SetStaminaBarPercentage(float value);
	void SetStaminaTextBlock(FText StaminaTextValue);
	void SetStaminaRegenerationValue(FText RegValue);
	void SetStaminaRegenerationVisibility(bool bIsVisible);
};
