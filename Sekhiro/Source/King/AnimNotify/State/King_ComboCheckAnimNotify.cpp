// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/State/King_ComboCheckAnimNotify.h"
#include "Interface/King_CombatInterface.h"
#include "King_Types.h"
#include "Animation/AnimInstance.h"
#include "KingCharacter.h"
#include "Character/King_CharacterBase.h"

void UKing_ComboCheckAnimNotify::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration);

	if (IKing_CombatInterface* InCharacter = Cast<IKing_CombatInterface>(MeshComp->GetOuter()))
	{
		InCharacter->GetSimpleCombatInfo()->bShortPress = false;
		InCharacter->GetSimpleCombatInfo()->UpdateCombatIndex();
	}

}

void UKing_ComboCheckAnimNotify::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime);
	
	AKingCharacter* PlayerCharacter = Cast<AKingCharacter>(MeshComp->GetOwner());
	if (PlayerCharacter)
	{
		if (PlayerCharacter->GetSimpleCombatInfo()->bLongPress || PlayerCharacter->GetSimpleCombatInfo()->bShortPress)
		{
			// Jump Section
			UAnimMontage* AnimMontage = PlayerCharacter->GetMesh()->GetAnimInstance()->GetCurrentActiveMontage();
			PlayerCharacter->GetMesh()->GetAnimInstance()->Montage_JumpToSection(JumpSectionName);
		}
	}
}

void UKing_ComboCheckAnimNotify::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::NotifyEnd(MeshComp, Animation);

	if (IKing_CombatInterface* InCharacter = Cast<IKing_CombatInterface>(MeshComp->GetOuter()))
	{
		if ((InCharacter->GetSimpleCombatInfo()->bLongPress || InCharacter->GetSimpleCombatInfo()->bShortPress))
		{
			
		}
	}
}
