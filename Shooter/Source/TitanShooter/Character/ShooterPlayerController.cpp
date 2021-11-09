// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController.h"
#include "ShooterPlayerCameraManager.h"

AShooterPlayerController::AShooterPlayerController()
{
	PlayerCameraManager = AShooterPlayerCameraManager::StaticClass();

}

