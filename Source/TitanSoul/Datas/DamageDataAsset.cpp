// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageDataAsset.h"
#include "GameplayTagContainer.h"

FName UDamageDataAsset::GetDataTag()
{
	if (DamageTag.IsValid())
	{
		return "Data.Damage";
	}
	UE_LOG(LogTemp, Warning, TEXT("No damage tag Assigned! Data.Damage Will Be Use By Default"));
	return DamageTag.GetTagName();
}
