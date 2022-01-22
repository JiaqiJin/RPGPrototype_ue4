// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Data/HeroCheatManager.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCheatManager() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroCheatManager_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroCheatManager();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	DEFINE_FUNCTION(UHeroCheatManager::execSetPlayerAttributte)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerAttributte(Z_Param_AttributeName,Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UHeroCheatManager::StaticRegisterNativesUHeroCheatManager()
	{
		UClass* Class = UHeroCheatManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Hero.Attributes.SetPlayerAttributte", &UHeroCheatManager::execSetPlayerAttributte },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics
	{
		struct HeroCheatManager_eventSetPlayerAttributte_Parms
		{
			FString AttributeName;
			float NewValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttributeName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroCheatManager_eventSetPlayerAttributte_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroCheatManager_eventSetPlayerAttributte_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::NewProp_AttributeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/HeroCheatManager.h" },
		{ "OverrideNativeName", "Hero.Attributes.SetPlayerAttributte" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroCheatManager, nullptr, "Hero.Attributes.SetPlayerAttributte", nullptr, nullptr, sizeof(HeroCheatManager_eventSetPlayerAttributte_Parms), Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeroCheatManager_NoRegister()
	{
		return UHeroCheatManager::StaticClass();
	}
	struct Z_Construct_UClass_UHeroCheatManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroCheatManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheatManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroCheatManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroCheatManager_SetPlayerAttributte, "Hero.Attributes.SetPlayerAttributte" }, // 982512402
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroCheatManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/HeroCheatManager.h" },
		{ "ModuleRelativePath", "Data/HeroCheatManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroCheatManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroCheatManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroCheatManager_Statics::ClassParams = {
		&UHeroCheatManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroCheatManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCheatManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroCheatManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroCheatManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroCheatManager, 2307031250);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroCheatManager>()
	{
		return UHeroCheatManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroCheatManager(Z_Construct_UClass_UHeroCheatManager, &UHeroCheatManager::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroCheatManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroCheatManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
