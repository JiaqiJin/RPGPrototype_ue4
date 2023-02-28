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
void EmptyLinkFunctionForGeneratedCodeMultiplayerSession_init() {}
	MULTIPLAYERSESSION_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature();
	MULTIPLAYERSESSION_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnDestroySessionComplete__DelegateSignature();
	MULTIPLAYERSESSION_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnStartSessionComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MultiplayerSession()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MultiplayerSession_MultiplayerOnStartSessionComplete__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/MultiplayerSession",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x23787E82,
				0xF1A4B292,
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
