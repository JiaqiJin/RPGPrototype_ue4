// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RPG/UI/HeroDebugWidget.h"
#include "HeroPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API AHeroPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AHeroPlayerController(const class FObjectInitializer& InitializerObject);

	void ShowHeroDebug();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Debug")
	TSubclassOf<class UHeroDebugWidget> HeroDebugMenu;

	class UHeroDebugWidget* HeroDebugMenuWidget;
};
