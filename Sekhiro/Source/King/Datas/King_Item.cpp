// Fill out your copyright notice in the Description page of Project Settings.


#include "Datas/King_Item.h"

FPrimaryAssetId UKing_Item::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(ItemType, GetFName());
}