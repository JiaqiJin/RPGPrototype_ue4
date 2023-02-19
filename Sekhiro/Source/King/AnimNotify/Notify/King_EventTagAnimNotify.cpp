// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/Notify/King_EventTagAnimNotify.h"
#include "KingCharacter.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"

void UKing_EventTagAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	AKingCharacter* Chatacter = Cast<AKingCharacter>(MeshComp->GetOwner());
	if (Chatacter)
	{
		FGameplayEventData PayLoadData;
		PayLoadData.Instigator = Chatacter;
		UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(Chatacter, AbilityTag, PayLoadData);
	}
}