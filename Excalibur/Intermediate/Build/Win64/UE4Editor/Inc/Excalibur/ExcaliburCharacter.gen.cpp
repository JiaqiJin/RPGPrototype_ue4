// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/ExcaliburCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExcaliburCharacter() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_AExcaliburCharacter_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_AExcaliburCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilityDataAsset_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UManaComponent_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UStaminaComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AExcaliburCharacter::execGetHeroCharacterMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHeroCharacterMovementComponent**)Z_Param__Result=P_THIS->GetHeroCharacterMovementComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExcaliburCharacter::execGetCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExcaliburCharacter::execIsHeroSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHeroSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExcaliburCharacter::execGetAirControl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAirControl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExcaliburCharacter::execGetJumpHeightMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetJumpHeightMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExcaliburCharacter::execGetJumpHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetJumpHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExcaliburCharacter::execGetMovementSpeedMultiplierBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedMultiplierBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExcaliburCharacter::execGetMovementSpeedMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExcaliburCharacter::execGetMovementSpeedBaseValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeedBaseValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AExcaliburCharacter::execGetMovementSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementSpeed();
		P_NATIVE_END;
	}
	void AExcaliburCharacter::StaticRegisterNativesAExcaliburCharacter()
	{
		UClass* Class = AExcaliburCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAirControl", &AExcaliburCharacter::execGetAirControl },
			{ "GetCurrentLevel", &AExcaliburCharacter::execGetCurrentLevel },
			{ "GetHeroCharacterMovementComponent", &AExcaliburCharacter::execGetHeroCharacterMovementComponent },
			{ "GetJumpHeight", &AExcaliburCharacter::execGetJumpHeight },
			{ "GetJumpHeightMultiplier", &AExcaliburCharacter::execGetJumpHeightMultiplier },
			{ "GetMovementSpeed", &AExcaliburCharacter::execGetMovementSpeed },
			{ "GetMovementSpeedBaseValue", &AExcaliburCharacter::execGetMovementSpeedBaseValue },
			{ "GetMovementSpeedMultiplier", &AExcaliburCharacter::execGetMovementSpeedMultiplier },
			{ "GetMovementSpeedMultiplierBase", &AExcaliburCharacter::execGetMovementSpeedMultiplierBase },
			{ "IsHeroSprinting", &AExcaliburCharacter::execIsHeroSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics
	{
		struct ExcaliburCharacter_eventGetAirControl_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcaliburCharacter_eventGetAirControl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "GetAirControl", nullptr, nullptr, sizeof(ExcaliburCharacter_eventGetAirControl_Parms), Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_GetAirControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_GetAirControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics
	{
		struct ExcaliburCharacter_eventGetCurrentLevel_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcaliburCharacter_eventGetCurrentLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Component|MovementComponent" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "GetCurrentLevel", nullptr, nullptr, sizeof(ExcaliburCharacter_eventGetCurrentLevel_Parms), Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics
	{
		struct ExcaliburCharacter_eventGetHeroCharacterMovementComponent_Parms
		{
			UHeroCharacterMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcaliburCharacter_eventGetHeroCharacterMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UHeroCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Component|MovementComponent" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "GetHeroCharacterMovementComponent", nullptr, nullptr, sizeof(ExcaliburCharacter_eventGetHeroCharacterMovementComponent_Parms), Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics
	{
		struct ExcaliburCharacter_eventGetJumpHeight_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcaliburCharacter_eventGetJumpHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "GetJumpHeight", nullptr, nullptr, sizeof(ExcaliburCharacter_eventGetJumpHeight_Parms), Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics
	{
		struct ExcaliburCharacter_eventGetJumpHeightMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcaliburCharacter_eventGetJumpHeightMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "GetJumpHeightMultiplier", nullptr, nullptr, sizeof(ExcaliburCharacter_eventGetJumpHeightMultiplier_Parms), Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics
	{
		struct ExcaliburCharacter_eventGetMovementSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcaliburCharacter_eventGetMovementSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "GetMovementSpeed", nullptr, nullptr, sizeof(ExcaliburCharacter_eventGetMovementSpeed_Parms), Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics
	{
		struct ExcaliburCharacter_eventGetMovementSpeedBaseValue_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcaliburCharacter_eventGetMovementSpeedBaseValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "GetMovementSpeedBaseValue", nullptr, nullptr, sizeof(ExcaliburCharacter_eventGetMovementSpeedBaseValue_Parms), Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics
	{
		struct ExcaliburCharacter_eventGetMovementSpeedMultiplier_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcaliburCharacter_eventGetMovementSpeedMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "GetMovementSpeedMultiplier", nullptr, nullptr, sizeof(ExcaliburCharacter_eventGetMovementSpeedMultiplier_Parms), Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics
	{
		struct ExcaliburCharacter_eventGetMovementSpeedMultiplierBase_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcaliburCharacter_eventGetMovementSpeedMultiplierBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Character|Attributes" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "GetMovementSpeedMultiplierBase", nullptr, nullptr, sizeof(ExcaliburCharacter_eventGetMovementSpeedMultiplierBase_Parms), Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics
	{
		struct ExcaliburCharacter_eventIsHeroSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExcaliburCharacter_eventIsHeroSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExcaliburCharacter_eventIsHeroSprinting_Parms), &Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player|Component|MovementComponent" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AExcaliburCharacter, nullptr, "IsHeroSprinting", nullptr, nullptr, sizeof(ExcaliburCharacter_eventIsHeroSprinting_Parms), Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExcaliburCharacter_NoRegister()
	{
		return AExcaliburCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AExcaliburCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultAbilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaminaComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExcaliburCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AExcaliburCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AExcaliburCharacter_GetAirControl, "GetAirControl" }, // 3378041834
		{ &Z_Construct_UFunction_AExcaliburCharacter_GetCurrentLevel, "GetCurrentLevel" }, // 1449533477
		{ &Z_Construct_UFunction_AExcaliburCharacter_GetHeroCharacterMovementComponent, "GetHeroCharacterMovementComponent" }, // 1937011544
		{ &Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeight, "GetJumpHeight" }, // 2598329330
		{ &Z_Construct_UFunction_AExcaliburCharacter_GetJumpHeightMultiplier, "GetJumpHeightMultiplier" }, // 49752989
		{ &Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeed, "GetMovementSpeed" }, // 2756112308
		{ &Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedBaseValue, "GetMovementSpeedBaseValue" }, // 753266599
		{ &Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplier, "GetMovementSpeedMultiplier" }, // 3158195052
		{ &Z_Construct_UFunction_AExcaliburCharacter_GetMovementSpeedMultiplierBase, "GetMovementSpeedMultiplierBase" }, // 4244014402
		{ &Z_Construct_UFunction_AExcaliburCharacter_IsHeroSprinting, "IsHeroSprinting" }, // 4097657820
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ExcaliburCharacter.h" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcaliburCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcaliburCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcaliburCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcaliburCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Player|Abilities" },
		{ "Comment", "// Default attributes for a character for initializing on spawn/respawn.\n// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.\n" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
		{ "ToolTip", "Default attributes for a character for initializing on spawn/respawn.\nThis is an instant GE that overrides the values for attributes that get reset on spawn/respawn." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcaliburCharacter, DefaultAttributes), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAttributes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "Player|Data" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcaliburCharacter, DefaultAbilities), Z_Construct_UClass_UHeroAbilityDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAbilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "Comment", "// Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcaliburCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_ManaComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_ManaComponent = { "ManaComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcaliburCharacter, ManaComponent), Z_Construct_UClass_UManaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_ManaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_ManaComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_StaminaComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ExcaliburCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_StaminaComponent = { "StaminaComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AExcaliburCharacter, StaminaComponent), Z_Construct_UClass_UStaminaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_StaminaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_StaminaComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExcaliburCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_DefaultAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_HealthComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_ManaComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExcaliburCharacter_Statics::NewProp_StaminaComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AExcaliburCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AExcaliburCharacter, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExcaliburCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExcaliburCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExcaliburCharacter_Statics::ClassParams = {
		&AExcaliburCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AExcaliburCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExcaliburCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExcaliburCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExcaliburCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExcaliburCharacter, 26833576);
	template<> EXCALIBUR_API UClass* StaticClass<AExcaliburCharacter>()
	{
		return AExcaliburCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExcaliburCharacter(Z_Construct_UClass_AExcaliburCharacter, &AExcaliburCharacter::StaticClass, TEXT("/Script/Excalibur"), TEXT("AExcaliburCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExcaliburCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
