// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExcalibur_init() {}
	EXCALIBUR_API UFunction* Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature();
	EXCALIBUR_API UFunction* Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Excalibur()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/Excalibur",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xEC9D5424,
				0xAB93496E,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
