// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterHealthWidget.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UCharacterHealthWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* HealthText;
private:
	void SetHealthBarPercentage(float value);
	void SetHealthTextPercentage(float health, float MaxHealth);
};
