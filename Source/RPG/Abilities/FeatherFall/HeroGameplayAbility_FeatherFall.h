// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RPG/GameplayAbility/HeroGameplayAbility.h"
#include "Animation/AnimMontage.h"
#include "HeroGameplayAbility_FeatherFall.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UHeroGameplayAbility_FeatherFall : public UHeroGameplayAbility
{
	GENERATED_UCLASS_BODY()
	
public:
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* OwnerInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	/** Native function, called if an ability ends normally or abnormally. If bReplicate is set to true, try to replicate the ending to the client/server */
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	void OnNotifyBegin(FName NotifyName);
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	UAnimMontage* FeatherFallMontage;

protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FVector LaunchVelocity;
};
