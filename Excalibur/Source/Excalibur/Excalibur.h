// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#define ACTOR_ROLE_FSTRING *(FindObject<UEnum>(ANY_PACKAGE, TEXT("ENetRole"), true)->GetNameStringByValue(GetLocalRole()))
#define GET_ACTOR_ROLE_FSTRING(Actor) *(FindObject<UEnum>(ANY_PACKAGE, TEXT("ENetRole"), true)->GetNameStringByValue(Actor->GetLocalRole()))

UENUM(BlueprintType)
namespace EHeroAbilityInputID
{
	enum Type
	{
		// 0 None
		None			UMETA(DisplayName = "None"),
		// 1 Confirm LMB
		Confirm			UMETA(DisplayName = "Confirm"),
		// 2 Cancel RMB
		Cancel			UMETA(DisplayName = "Cancel"),
		// 4 NUM 1
		Ability1		UMETA(DisplayName = "Ability1"),
		// 5 NUM 3
		Ability2		UMETA(DisplayName = "Ability2"),
		// 6 NUM 3
		Ability3		UMETA(DisplayName = "Ability3"),
		// No Jump
		Jump			UMETA(DisplayName = "Jump"),
		// Left Shift
		Sprint			UMETA(DisplayName = "Sprint"),
		// Space
		Evade			UMETA(DisplayName = "Evade"),
		// S
		BackSideStep	UMETA(DisplayName = "Back Side Step"),
		// A
		LeftSideStep	UMETA(DisplayName = "Left Side Step"),
		// D
		RightSideStep	UMETA(DisplayName = "Right Side Step"),
		// 1
		FeatherFall	    UMETA(DisplayName = "FeatherFall"),
		// Ctr
		Crouch			UMETA(DisplayName = "Crouch"),
	};
}