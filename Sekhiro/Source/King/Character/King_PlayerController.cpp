// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/King_PlayerController.h"
#include "King_PlayerCameraManager.h"

AKing_PlayerController::AKing_PlayerController(const class FObjectInitializer& InitializerObject)
	: Super(InitializerObject)
{

}

// Called when the game starts
void AKing_PlayerController::BeginPlay()
{
	Super::BeginPlay();
}

void AKing_PlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	King_PlayerCameraManager = Cast<AKing_PlayerCameraManager>(PlayerCameraManager);

	if (!King_PlayerCameraManager)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Cannot convert PlayerCameraManager to AKing_PlayerCameraManager class."), 
			*FString(__FUNCTION__), *GetName());

		return;
	}

	King_PlayerCameraManager->OnPossess(aPawn);
}

AKing_PlayerCameraManager* AKing_PlayerController::GetKing_PlayerCameraManager()
{
	if (King_PlayerCameraManager)
	{
		return King_PlayerCameraManager;
	}

	return Cast<AKing_PlayerCameraManager>(PlayerCameraManager);
}