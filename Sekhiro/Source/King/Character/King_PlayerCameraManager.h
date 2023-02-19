// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "King_PlayerCameraManager.generated.h"

class USkeletalMeshComponent;

UCLASS()
class KING_API AKing_PlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
	
public:
	AKing_PlayerCameraManager();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	USkeletalMeshComponent* CameraBehavior = nullptr;

	UFUNCTION(BlueprintCallable)
	void OnPossess(APawn* aPawn);

	// Helper Function to Update the Camera Anim Instances Variables
	UFUNCTION(BlueprintNativeEvent)
	void UpdateCameraAnimBehaviorBP();

	// Getters
	UFUNCTION(BlueprintPure)
	APawn* GetCameraControlledPawn();

	UFUNCTION(BlueprintPure)
	float GetCameraBehaviorParam(FName CurveName);
public:
	// Cameras Property
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FTransform PivotTarget;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector FPTarget;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TP_FOV = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FP_FOV = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FRotator TargetCameraRotation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FRotator DebugViewRotation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FTransform SmoothTargetPivot;
protected:
	UPROPERTY()
	APawn* ControlledPawn;
};
