// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Excalibur/ExcaliburCharacter.h"
#include "Excalibur/Excalibur.h"
#include "Excalibur/Data/HeroDamageDataAsset.h"
#include "HeroPlayerCharacter.generated.h"

UCLASS()
class EXCALIBUR_API AHeroPlayerCharacter : public AExcaliburCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHeroPlayerCharacter(const class FObjectInitializer& InitializerObject);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE UHeroDamageDataAsset* GetDamageData() const { return DamageDataAsset; }

public:
	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeed() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedBaseValue() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedMultiplier() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetMovementSpeedMultiplierBase() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetJumpHeight() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetJumpHeightMultiplier() const;

	UFUNCTION(BlueprintCallable, Category = "Player|Character|Attributes")
	float GetAirControl() const;

	UFUNCTION(BlueprintPure, Category = "Player|Component|MovementComponent")
	float GetCurrentLevel() const;

	UFUNCTION(BlueprintPure, Category = "Player|States")
	FORCEINLINE bool IsHeroEquipWeapon() { return bIsEquip; }

	UFUNCTION(BlueprintCallable, Category = "Player|States")
	bool UpdateHeroEquipmentState(bool value) { bIsEquip = value; return bIsEquip; }

	FORCEINLINE class UHealthComponent* GetHealthComponent() const { return HealthComponent; }
	FORCEINLINE class UManaComponent* GetManaComponent() const { return ManaComponent; }
	FORCEINLINE class UStaminaComponent* GetStaminaComponent() const { return StaminaComponent; }
protected:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
	class UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
	class UManaComponent* ManaComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Component, meta = (AllowPrivateAccess = "true"))
	class UStaminaComponent* StaminaComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player|Data")
	UHeroDamageDataAsset* DamageDataAsset;

	UPROPERTY(EditAnywhere, Category = "Player")
	bool bIsEquip;
};
