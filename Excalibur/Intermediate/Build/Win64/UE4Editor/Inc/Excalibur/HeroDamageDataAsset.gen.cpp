// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Data/HeroDamageDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroDamageDataAsset() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroDamageDataAsset_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroDamageDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHeroDamageDataAsset::execGetDataTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDataTag();
		P_NATIVE_END;
	}
	void UHeroDamageDataAsset::StaticRegisterNativesUHeroDamageDataAsset()
	{
		UClass* Class = UHeroDamageDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataTag", &UHeroDamageDataAsset::execGetDataTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics
	{
		struct HeroDamageDataAsset_eventGetDataTag_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroDamageDataAsset_eventGetDataTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/HeroDamageDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroDamageDataAsset, nullptr, "GetDataTag", nullptr, nullptr, sizeof(HeroDamageDataAsset_eventGetDataTag_Parms), Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeroDamageDataAsset_NoRegister()
	{
		return UHeroDamageDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UHeroDamageDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageOverTimeGameplayEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DamageOverTimeGameplayEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthRegenerationPreventionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealthRegenerationPreventionEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroDamageDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroDamageDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroDamageDataAsset_GetDataTag, "GetDataTag" }, // 2997712143
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDamageDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/HeroDamageDataAsset.h" },
		{ "ModuleRelativePath", "Data/HeroDamageDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageTag_MetaData[] = {
		{ "Category", "GameplayTag" },
		{ "ModuleRelativePath", "Data/HeroDamageDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageTag = { "DamageTag", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroDamageDataAsset, DamageTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageGameplayEffect_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Base Damage\n" },
		{ "ModuleRelativePath", "Data/HeroDamageDataAsset.h" },
		{ "ToolTip", "Base Damage" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageGameplayEffect = { "DamageGameplayEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroDamageDataAsset, DamageGameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageGameplayEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageGameplayEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageOverTimeGameplayEffect_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Damager Over time\n" },
		{ "ModuleRelativePath", "Data/HeroDamageDataAsset.h" },
		{ "ToolTip", "Damager Over time" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageOverTimeGameplayEffect = { "DamageOverTimeGameplayEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroDamageDataAsset, DamageOverTimeGameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageOverTimeGameplayEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageOverTimeGameplayEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_HealthRegenerationPreventionEffect_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Health Regeneration Prevention GE\n" },
		{ "ModuleRelativePath", "Data/HeroDamageDataAsset.h" },
		{ "ToolTip", "Health Regeneration Prevention GE" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_HealthRegenerationPreventionEffect = { "HealthRegenerationPreventionEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroDamageDataAsset, HealthRegenerationPreventionEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_HealthRegenerationPreventionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_HealthRegenerationPreventionEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroDamageDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageGameplayEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_DamageOverTimeGameplayEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroDamageDataAsset_Statics::NewProp_HealthRegenerationPreventionEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroDamageDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroDamageDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroDamageDataAsset_Statics::ClassParams = {
		&UHeroDamageDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeroDamageDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDamageDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroDamageDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDamageDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroDamageDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroDamageDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroDamageDataAsset, 1378328216);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroDamageDataAsset>()
	{
		return UHeroDamageDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroDamageDataAsset(Z_Construct_UClass_UHeroDamageDataAsset, &UHeroDamageDataAsset::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroDamageDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroDamageDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
