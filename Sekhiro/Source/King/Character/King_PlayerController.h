// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "King_PlayerController.generated.h"

class AKing_PlayerCameraManager;

/*
* Player Camera Manager
*/
UCLASS()
class KING_API AKing_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AKing_PlayerController(const class FObjectInitializer& InitializerObject);

	UFUNCTION(BlueprintCallable)
	AKing_PlayerCameraManager* GetKing_PlayerCameraManager();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void OnPossess(APawn* aPawn) override;

protected:

	AKing_PlayerCameraManager* King_PlayerCameraManager;
};
