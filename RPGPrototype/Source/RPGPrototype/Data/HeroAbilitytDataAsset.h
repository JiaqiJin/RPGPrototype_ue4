// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RPGPrototype/RPGPrototype.h"
#include "Abilities/GameplayAbility.h"
#include "HeroAbilitytDataAsset.generated.h"

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

UCLASS()
class RPGPROTOTYPE_API UHeroAbilitytDataAsset : public UDataAsset
{
	GENERATED_UCLASS_BODY()
public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FHeroGameplayAbilityBindInfo> Abilities;

	void GiveAbilities(UAbilitySystemComponent* AbilitySystemComponent) const;
};
