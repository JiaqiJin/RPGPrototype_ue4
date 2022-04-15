// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Excalibur/GameplayEffect/HeroGameplayAbility.h"
#include "HeroGameplayAbility_Attack.generated.h"

class UAnimMontage;

UCLASS()
class EXCALIBUR_API UHeroGameplayAbility_Attack : public UHeroGameplayAbility
{
	GENERATED_BODY()
	
public:
	UHeroGameplayAbility_Attack(const FObjectInitializer& ObjectInitializer);

	/** Returns true if this ability can be activated right now. Has no side effects */
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const;

	/** Actually activate ability, do not call this directly */
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData);

	/** Native function, called if an ability ends normally or abnormally. If bReplicate is set to true, try to replicate the ending to the client/server */
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled);

public:

	/** Montage that is playing */
	UPROPERTY(EditAnywhere, Category = "Animation")
	UAnimMontage* AttackMontage;

	UPROPERTY(EditAnywhere, Category = "Animation")
	FName Attack1;
	UPROPERTY(EditAnywhere, Category = "Animation")
	FName Attack2;
	UPROPERTY(EditAnywhere, Category = "Animation")
	FName Attack3;

private:
	uint32 AttackIndex;

protected:
	UFUNCTION()
		void OnNotifyBegin(FName NotifyName);
};
