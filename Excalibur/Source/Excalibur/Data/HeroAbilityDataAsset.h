// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Excalibur/Excalibur.h"
#include "UObject/ObjectMacros.h"
#include "Abilities/GameplayAbility.h"
#include "HeroAbilityDataAsset.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FHeroGameplayAbilityBindInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TEnumAsByte<EHeroAbilityInputID::Type> Command;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSubclassOf<class UGameplayAbility> HeroAbilities;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FText AbilityName;
};

/**
 * Base class for a simple asset containing data.
 */
UCLASS()
class EXCALIBUR_API UHeroAbilityDataAsset : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UHeroAbilityDataAsset(const class FObjectInitializer& InitializerObject);

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FHeroGameplayAbilityBindInfo> Abilities;

	void GiveAbilities(UAbilitySystemComponent* AbilitySystemComponent) const;
};
