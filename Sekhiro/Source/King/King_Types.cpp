// Fill out your copyright notice in the Description page of Project Settings.


#include "King_Types.h"
#include "Interface/King_CombatInterface.h"

FSimpleCombatCheck::FSimpleCombatCheck()
	:CombatIndex(INDEX_NONE)
	, bLongPress(false)
	, bShortPress(false)
	, MaxIndex(0)
	, Character(NULL)
{

}

void FSimpleCombatCheck::UpdateCombatIndex()
{
	check(MaxIndex > 0)
	MaxIndex++;

	if (CombatIndex > MaxIndex)
	{
		CombatIndex = 1;
	}
}

void FSimpleCombatCheck::Press()
{
	if (CombatIndex == INDEX_NONE)
	{
		CombatIndex++;
		Character->CombatAttack(CombatKey);
	}
	bShortPress = true;
	bLongPress = true;
}

void FSimpleCombatCheck::Released()
{
	bLongPress = false;
}

void FSimpleCombatCheck::Reset()
{
	CombatIndex = INDEX_NONE;
}
