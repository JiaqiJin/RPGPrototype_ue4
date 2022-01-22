// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeroItemBase.generated.h"

UCLASS()
class EXCALIBUR_API AHeroItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHeroItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ItemMesh;

	UPROPERTY(EditAnywhere)
	class USphereComponent* ItemCollision;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Potion Effect
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects")
	TSubclassOf<class UGameplayEffect> PotionHealthEffect;
};
