// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Character/HeroPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroPlayerCharacter() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_AHeroPlayerCharacter_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_AHeroPlayerCharacter();
	EXCALIBUR_API UClass* Z_Construct_UClass_AExcaliburCharacter();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroDamageDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AHeroPlayerCharacter::execGetCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroPlayerCharacter::execGetAirControl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAirControl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroPlayerCharacter::execGetJumpHeightMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetJumpHeightMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroPlayerCharacter::execGetJumpHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetJumpHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroPlayerCharacter::execGetMovementSpeedMultiplierBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedMultiplierBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroPlayerCharacter::execGetMovementSpeedMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroPlayerCharacter::execGetMovementSpeedBaseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedBaseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroPlayerCharacter::execGetMovementSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
		P_NATIVE_END;
	}
	void AHeroPlayerCharacter::StaticRegisterNativesAHeroPlayerCharacter()
	{
		UClass* Class = AHeroPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAirControl", &AHeroPlayerCharacter::execGetAirControl },
			{ "GetCurrentLevel", &AHeroPlayerCharacter::execGetCurrentLevel },
			{ "GetJumpHeight", &AHeroPlayerCharacter::execGetJumpHeight },
			{ "GetJumpHeightMultiplier", &AHeroPlayerCharacter::execGetJumpHeightMultiplier },
			{ "GetMovementSpeed", &AHeroPlayerCharacter::execGetMovementSpeed },
			{ "GetMovementSpeedBaseValue", &AHeroPlayerCharacter::execGetMovementSpeedBaseValue },
			{ "GetMovementSpeedMultiplier", &AHeroPlayerCharacter::execGetMovementSpeedMultiplier },
			{ "GetMovementSpeedMultiplierBase", &AHeroPlayerCharacter::execGetMovementSpeedMultiplierBase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics
	{
		struct HeroPlayerCharacter_eventGetAirControl_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerCharacter_eventGetAirControl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerCharacter, nullptr, "GetAirControl", nullptr, nullptr, sizeof(HeroPlayerCharacter_eventGetAirControl_Parms), Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics
	{
		struct HeroPlayerCharacter_eventGetCurrentLevel_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerCharacter_eventGetCurrentLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Component|MovementComponent" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerCharacter, nullptr, "GetCurrentLevel", nullptr, nullptr, sizeof(HeroPlayerCharacter_eventGetCurrentLevel_Parms), Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics
	{
		struct HeroPlayerCharacter_eventGetJumpHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerCharacter_eventGetJumpHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerCharacter, nullptr, "GetJumpHeight", nullptr, nullptr, sizeof(HeroPlayerCharacter_eventGetJumpHeight_Parms), Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics
	{
		struct HeroPlayerCharacter_eventGetJumpHeightMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerCharacter_eventGetJumpHeightMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerCharacter, nullptr, "GetJumpHeightMultiplier", nullptr, nullptr, sizeof(HeroPlayerCharacter_eventGetJumpHeightMultiplier_Parms), Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics
	{
		struct HeroPlayerCharacter_eventGetMovementSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerCharacter_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerCharacter, nullptr, "GetMovementSpeed", nullptr, nullptr, sizeof(HeroPlayerCharacter_eventGetMovementSpeed_Parms), Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics
	{
		struct HeroPlayerCharacter_eventGetMovementSpeedBaseValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerCharacter_eventGetMovementSpeedBaseValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerCharacter, nullptr, "GetMovementSpeedBaseValue", nullptr, nullptr, sizeof(HeroPlayerCharacter_eventGetMovementSpeedBaseValue_Parms), Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics
	{
		struct HeroPlayerCharacter_eventGetMovementSpeedMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerCharacter_eventGetMovementSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerCharacter, nullptr, "GetMovementSpeedMultiplier", nullptr, nullptr, sizeof(HeroPlayerCharacter_eventGetMovementSpeedMultiplier_Parms), Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics
	{
		struct HeroPlayerCharacter_eventGetMovementSpeedMultiplierBase_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayerCharacter_eventGetMovementSpeedMultiplierBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroPlayerCharacter, nullptr, "GetMovementSpeedMultiplierBase", nullptr, nullptr, sizeof(HeroPlayerCharacter_eventGetMovementSpeedMultiplierBase_Parms), Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHeroPlayerCharacter_NoRegister()
	{
		return AHeroPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHeroPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageDataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AExcaliburCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHeroPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeroPlayerCharacter_GetAirControl, "GetAirControl" }, // 3948237786
		{ &Z_Construct_UFunction_AHeroPlayerCharacter_GetCurrentLevel, "GetCurrentLevel" }, // 1470545925
		{ &Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeight, "GetJumpHeight" }, // 3913822970
		{ &Z_Construct_UFunction_AHeroPlayerCharacter_GetJumpHeightMultiplier, "GetJumpHeightMultiplier" }, // 3603698391
		{ &Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeed, "GetMovementSpeed" }, // 124649716
		{ &Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedBaseValue, "GetMovementSpeedBaseValue" }, // 2346408321
		{ &Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplier, "GetMovementSpeedMultiplier" }, // 1075369956
		{ &Z_Construct_UFunction_AHeroPlayerCharacter_GetMovementSpeedMultiplierBase, "GetMovementSpeedMultiplierBase" }, // 3840634571
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/HeroPlayerCharacter.h" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroPlayerCharacter_Statics::NewProp_DamageDataAsset_MetaData[] = {
		{ "Category", "Player|Data" },
		{ "ModuleRelativePath", "Character/HeroPlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroPlayerCharacter_Statics::NewProp_DamageDataAsset = { "DamageDataAsset", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroPlayerCharacter, DamageDataAsset), Z_Construct_UClass_UHeroDamageDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroPlayerCharacter_Statics::NewProp_DamageDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroPlayerCharacter_Statics::NewProp_DamageDataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroPlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroPlayerCharacter_Statics::NewProp_DamageDataAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHeroPlayerCharacter_Statics::ClassParams = {
		&AHeroPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHeroPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeroPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeroPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeroPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHeroPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHeroPlayerCharacter, 1469105169);
	template<> EXCALIBUR_API UClass* StaticClass<AHeroPlayerCharacter>()
	{
		return AHeroPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeroPlayerCharacter(Z_Construct_UClass_AHeroPlayerCharacter, &AHeroPlayerCharacter::StaticClass, TEXT("/Script/Excalibur"), TEXT("AHeroPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
