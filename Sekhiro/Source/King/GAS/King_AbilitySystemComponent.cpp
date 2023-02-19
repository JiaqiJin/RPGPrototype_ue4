// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/King_AbilitySystemComponent.h"

void UKing_AbilitySystemComponent::OnPawnControllerChanged(APawn* Pawn, AController* NewController)
{
	if (AbilityActorInfo && AbilityActorInfo->OwnerActor == Pawn && AbilityActorInfo->PlayerController != NewController)
	{
		// Reinit the cached ability actor info (specifically the player controller)
		AbilityActorInfo->InitFromActor(AbilityActorInfo->OwnerActor.Get(), AbilityActorInfo->AvatarActor.Get(), this);
	}
}

void UKing_AbilitySystemComponent::BeginDestroy()
{
	if (AbilityActorInfo && AbilityActorInfo->OwnerActor.IsValid())
	{
		if (UGameInstance* GameInstance = AbilityActorInfo->OwnerActor->GetGameInstance())
		{
			GameInstance->GetOnPawnControllerChanged().RemoveAll(this);
		}
	}

	Super::BeginDestroy();
}