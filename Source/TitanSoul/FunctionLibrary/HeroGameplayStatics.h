// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HeroGameplayStatics.generated.h"

/**
 * 
 */
UCLASS()
class TITANSOUL_API UHeroGameplayStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/** Hurts the specified actor with generic damage.
   * @param DamagedActor - Actor that will be damaged.
   * @param BaseDamage - The base damage to apply.
   * @param EventInstigator - Controller that was responsible for causing this damage (e.g. player who shot the weapon)
   * @param DamageCauser - Actor that actually caused the damage (e.g. the grenade that exploded)
   * @param DamageTypeClass - Class that describes the damage that was done.
   * @return Actual damage the ended up being applied to the actor.
   */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Hero|Damage")
		static float HeroApplyDamage(AActor* DamagedActor, float BaseDamage, AController* EventInstigator,
			AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass, bool damageOverTime);

};
