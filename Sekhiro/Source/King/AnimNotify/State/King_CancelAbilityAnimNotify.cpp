// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/State/King_CancelAbilityAnimNotify.h"
#include "KingCharacter.h"
#include "Character/King_CharacterBase.h"
#include "AbilitySystemComponent.h"
#include "GAS/King_AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "Component/Player/King_CombatComponent.h"

void UKing_CancelAbilityAnimNotify::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	AKingCharacter* PlayerCharacter = Cast<AKingCharacter>(MeshComp->GetOwner());
	FGameplayTagContainer CancelAbilityTag;
	if (PlayerCharacter)
	{
		UKing_CombatComponent* CombatComponent = PlayerCharacter->GetCombatComponent();
		if (CombatComponent)
		{
			CombatComponent->SetIsInComboAttack(false);	
			if (CombatComponent->GetIsAbilityCanceled())
			{
				UKing_AbilitySystemComponent* AbilitySystemComponent = Cast<UKing_AbilitySystemComponent>(PlayerCharacter->GetAbilitySystemComponent());
				if (AbilitySystemComponent)
				{
					CancelAbilityTag.AddTag(TagToCancelAbility);

					AbilitySystemComponent->CancelAbilities(&CancelAbilityTag);
				}
			}
		}
	}
}

void UKing_CancelAbilityAnimNotify::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	AKingCharacter* PlayerCharacter = Cast<AKingCharacter>(MeshComp->GetOwner());
	if (PlayerCharacter)
	{
		UKing_CombatComponent* CombatComponent = PlayerCharacter->GetCombatComponent();
		if (CombatComponent)
		{
			CombatComponent->SetIsInComboAttack(false);
			if (CombatComponent->GetIsAbilityCanceled())
			{
				UKing_AbilitySystemComponent* AbilitySystemComponent = Cast<UKing_AbilitySystemComponent>(PlayerCharacter->GetAbilitySystemComponent());
				if (AbilitySystemComponent)
				{
					FGameplayTagContainer CancelAbilityTag;
					CancelAbilityTag.AddTag(TagToCancelAbility);

					PlayerCharacter->CharacterCancelAbilities(CancelAbilityTag);
				}
			}
		}	
	}
}

void UKing_CancelAbilityAnimNotify::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	PlayerAbility = nullptr;
}
