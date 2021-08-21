// Fill out your copyright notice in the Description page of Project Settings.


#include "HeroDamageData.h"
#include "GameplayTagContainer.h"

FName UHeroDamageData::GetDataTag()
{
	if (DamageTag.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("No damage tag Assigned"));
		return "Data.Damage";
	}
	return DamageTag.GetTagName();
}

