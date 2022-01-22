// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "../UI/HeroCharacterUIMain.h"
#include "HeroPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class EXCALIBUR_API AHeroPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AHeroPlayerController(const class FObjectInitializer& InitializerObject);

	virtual void OnPossess(APawn* aPawn) override;

	class UHeroCharacterUIMain* GetHeroCharacterUIMain() { return HeroMainWidget; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UHeroCharacterUIMain> HeroMainUI;

	class UHeroCharacterUIMain* HeroMainWidget;
};
