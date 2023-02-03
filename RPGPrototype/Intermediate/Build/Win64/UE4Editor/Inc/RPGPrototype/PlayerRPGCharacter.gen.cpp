// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGPrototype/Character/PlayerRPGCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerRPGCharacter() {}
// Cross Module References
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_APlayerRPGCharacter_NoRegister();
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_APlayerRPGCharacter();
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_ARPGPrototypeCharacter();
	UPackage* Z_Construct_UPackage__Script_RPGPrototype();
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_UHeroAbilitytDataAsset_NoRegister();
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister();
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerAttributeSet_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerRPGCharacter::execSetCharacterLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCharacterLevel(Z_Param_NewLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerRPGCharacter::execGetCharacterLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerRPGCharacter::execGetMoveSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMoveSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerRPGCharacter::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerRPGCharacter::execGetMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerRPGCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerRPGCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	void APlayerRPGCharacter::StaticRegisterNativesAPlayerRPGCharacter()
	{
		UClass* Class = APlayerRPGCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterLevel", &APlayerRPGCharacter::execGetCharacterLevel },
			{ "GetHealth", &APlayerRPGCharacter::execGetHealth },
			{ "GetMana", &APlayerRPGCharacter::execGetMana },
			{ "GetMaxHealth", &APlayerRPGCharacter::execGetMaxHealth },
			{ "GetMaxMana", &APlayerRPGCharacter::execGetMaxMana },
			{ "GetMoveSpeed", &APlayerRPGCharacter::execGetMoveSpeed },
			{ "SetCharacterLevel", &APlayerRPGCharacter::execSetCharacterLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics
	{
		struct PlayerRPGCharacter_eventGetCharacterLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerRPGCharacter_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns current character level\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "Returns current character level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRPGCharacter, nullptr, "GetCharacterLevel", nullptr, nullptr, sizeof(PlayerRPGCharacter_eventGetCharacterLevel_Parms), Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics
	{
		struct PlayerRPGCharacter_eventGetHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerRPGCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns current health\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "Returns current health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRPGCharacter, nullptr, "GetHealth", nullptr, nullptr, sizeof(PlayerRPGCharacter_eventGetHealth_Parms), Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRPGCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRPGCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics
	{
		struct PlayerRPGCharacter_eventGetMana_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerRPGCharacter_eventGetMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns current mana\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "Returns current mana" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRPGCharacter, nullptr, "GetMana", nullptr, nullptr, sizeof(PlayerRPGCharacter_eventGetMana_Parms), Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRPGCharacter_GetMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRPGCharacter_GetMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics
	{
		struct PlayerRPGCharacter_eventGetMaxHealth_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerRPGCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns current max health\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "Returns current max health" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRPGCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, sizeof(PlayerRPGCharacter_eventGetMaxHealth_Parms), Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics
	{
		struct PlayerRPGCharacter_eventGetMaxMana_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerRPGCharacter_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns current max mana\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "Returns current max mana" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRPGCharacter, nullptr, "GetMaxMana", nullptr, nullptr, sizeof(PlayerRPGCharacter_eventGetMaxMana_Parms), Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics
	{
		struct PlayerRPGCharacter_eventGetMoveSpeed_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerRPGCharacter_eventGetMoveSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns current speed\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "Returns current speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRPGCharacter, nullptr, "GetMoveSpeed", nullptr, nullptr, sizeof(PlayerRPGCharacter_eventGetMoveSpeed_Parms), Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics
	{
		struct PlayerRPGCharacter_eventSetCharacterLevel_Parms
		{
			int32 NewLevel;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewLevel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerRPGCharacter_eventSetCharacterLevel_Parms, NewLevel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerRPGCharacter_eventSetCharacterLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerRPGCharacter_eventSetCharacterLevel_Parms), &Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::NewProp_NewLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Modifies the character level\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "Modifies the character level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerRPGCharacter, nullptr, "SetCharacterLevel", nullptr, nullptr, sizeof(PlayerRPGCharacter_eventSetCharacterLevel_Parms), Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerRPGCharacter_NoRegister()
	{
		return APlayerRPGCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerRPGCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbilitiesInitialized_MetaData[];
#endif
		static void NewProp_bAbilitiesInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbilitiesInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultAbilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PassiveGameplayEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveGameplayEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PassiveGameplayEffects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerRPGCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARPGPrototypeCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGPrototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerRPGCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerRPGCharacter_GetCharacterLevel, "GetCharacterLevel" }, // 2410783313
		{ &Z_Construct_UFunction_APlayerRPGCharacter_GetHealth, "GetHealth" }, // 1744508818
		{ &Z_Construct_UFunction_APlayerRPGCharacter_GetMana, "GetMana" }, // 1205053448
		{ &Z_Construct_UFunction_APlayerRPGCharacter_GetMaxHealth, "GetMaxHealth" }, // 2710823926
		{ &Z_Construct_UFunction_APlayerRPGCharacter_GetMaxMana, "GetMaxMana" }, // 1800489340
		{ &Z_Construct_UFunction_APlayerRPGCharacter_GetMoveSpeed, "GetMoveSpeed" }, // 861606843
		{ &Z_Construct_UFunction_APlayerRPGCharacter_SetCharacterLevel, "SetCharacterLevel" }, // 2591638968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRPGCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PlayerRPGCharacter.h" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_CharacterLevel_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// The level of this character,\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "The level of this character," },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_CharacterLevel = { "CharacterLevel", nullptr, (EPropertyFlags)0x0020080000000021, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerRPGCharacter, CharacterLevel), METADATA_PARAMS(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_CharacterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_CharacterLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_bAbilitiesInitialized_MetaData[] = {
		{ "Comment", "// If true we have initialized our abilities\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "If true we have initialized our abilities" },
	};
#endif
	void Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_bAbilitiesInitialized_SetBit(void* Obj)
	{
		((APlayerRPGCharacter*)Obj)->bAbilitiesInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_bAbilitiesInitialized = { "bAbilitiesInitialized", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerRPGCharacter), &Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_bAbilitiesInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_bAbilitiesInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_bAbilitiesInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "Player|Attributes" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerRPGCharacter, DefaultAbilities), Z_Construct_UClass_UHeroAbilitytDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_DefaultAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_DefaultAbilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Comment", "// The core ActorComponent for interfacing with the GameplayAbilities System\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "The core ActorComponent for interfacing with the GameplayAbilities System" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerRPGCharacter, AbilitySystemComponent), Z_Construct_UClass_UPlayerAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Comment", "/** List of attributes modified by the ability system */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "List of attributes modified by the ability system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerRPGCharacter, AttributeSet), Z_Construct_UClass_UPlayerAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AttributeSet_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_PassiveGameplayEffects_Inner = { "PassiveGameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_PassiveGameplayEffects_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "// Passive gameplay effects applied on creation\n" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
		{ "ToolTip", "Passive gameplay effects applied on creation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_PassiveGameplayEffects = { "PassiveGameplayEffects", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerRPGCharacter, PassiveGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_PassiveGameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_PassiveGameplayEffects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerRPGCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_CharacterLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_bAbilitiesInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_DefaultAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_PassiveGameplayEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerRPGCharacter_Statics::NewProp_PassiveGameplayEffects,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerRPGCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerRPGCharacter, IAbilitySystemInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerRPGCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerRPGCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerRPGCharacter_Statics::ClassParams = {
		&APlayerRPGCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerRPGCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerRPGCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerRPGCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerRPGCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerRPGCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerRPGCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerRPGCharacter, 763677973);
	template<> RPGPROTOTYPE_API UClass* StaticClass<APlayerRPGCharacter>()
	{
		return APlayerRPGCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerRPGCharacter(Z_Construct_UClass_APlayerRPGCharacter, &APlayerRPGCharacter::StaticClass, TEXT("/Script/RPGPrototype"), TEXT("APlayerRPGCharacter"), false, nullptr, nullptr, nullptr);

	void APlayerRPGCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CharacterLevel(TEXT("CharacterLevel"));

		const bool bIsValid = true
			&& Name_CharacterLevel == ClassReps[(int32)ENetFields_Private::CharacterLevel].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerRPGCharacter"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerRPGCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
