// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerRPGCharacter.h"

// Sets default values
APlayerRPGCharacter::APlayerRPGCharacter()
{

}

UAbilitySystemComponent* APlayerRPGCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}


