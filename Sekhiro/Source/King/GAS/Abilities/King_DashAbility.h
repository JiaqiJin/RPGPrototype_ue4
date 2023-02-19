// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GAS/King_GameplayAbility.h"
#include "King_DashAbility.generated.h"

class AKing_CharacterBase;
class AKingCharacter;

UCLASS()
class KING_API UKing_DashAbility : public UKing_GameplayAbility
{
	GENERATED_BODY()
	
public:
	UKing_DashAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	UAnimMontage* AnimMontageDashForward;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	UAnimMontage* AnimMontageDashBackwards;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	UAnimMontage* AnimMontageDashRight;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	UAnimMontage* AnimMontageDashLeft;

	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData)
		override;

	virtual void EndAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility,
		bool bWasCancelled) override;

	virtual void InputReleased(const FGameplayAbilitySpecHandle Handle, 
		const FGameplayAbilityActorInfo* ActorInfo, 
		const FGameplayAbilityActivationInfo ActivationInfo) override;

	virtual void CancelAbility(const FGameplayAbilitySpecHandle Handle, 
		const FGameplayAbilityActorInfo* ActorInfo, 
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateCancelAbility) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameplayTag")
	FGameplayTag EventAbilityTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash Setting")
	float DashDistance = 7000.0f;
protected:

	bool bIsCreateOnRunning = false;

	bool bStopWhenAbilityEnds = true;

	AKingCharacter* Character = nullptr;

	FCollisionQueryParams CollisionParams = FCollisionQueryParams(FName("LineTraceSingle"));

	FVector CharacterForwardVector = FVector(0.0f);
	FVector CharacterRightVector = FVector(0.0f);
	FVector VelocityVector = FVector(0.0f);

	UFUNCTION()
	void OnCancelled(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void OnCompleted(FGameplayTag EventTag, FGameplayEventData EventData);

	UFUNCTION()
	void EventReceived(FGameplayTag EventTag, FGameplayEventData EventData);
};
