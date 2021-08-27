// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterManaWidget.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UCharacterManaWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* ManaBar;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ManaText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ManaReg;

public:
	void SetManaBarPercentage(float value);
	void SetManaTextBlock(FText HealthTextValue);
	void SetManaRegenerationValue(FText RegValue);
	void SetManaRegenerationVisibility(bool bIsVisible);
};
