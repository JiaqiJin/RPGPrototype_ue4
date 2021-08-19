// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HeroCharacterUIMain.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHeroCharacterUIMain : public UUserWidget
{
	GENERATED_BODY()

public:
	bool Initialize() override;

	UPROPERTY(meta = (BindWidget))
	class UCharacterHealthWidget* HeroHealth;
		
public:
	void SetHealthBarPercentage(float value);
	void SetHealthTextBlock(float health, float MaxHealth);

};
