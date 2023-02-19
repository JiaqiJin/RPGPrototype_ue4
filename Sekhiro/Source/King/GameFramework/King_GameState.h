// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "King_GameState.generated.h"

class UKing_PlayerAbilityDatas;

UCLASS()
class KING_API AKing_GameState : public AGameState
{
	GENERATED_BODY()
	
public:
	AKing_GameState();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	// Default abilities assets
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Abilities")
	UKing_PlayerAbilityDatas* DefaultAbilities;

protected:
	void ApplyDefaultPlayerGameplayAbilities();
};
