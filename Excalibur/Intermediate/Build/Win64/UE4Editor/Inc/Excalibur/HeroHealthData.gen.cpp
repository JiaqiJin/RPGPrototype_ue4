// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Data/HeroHealthData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroHealthData() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroHealthData_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroHealthData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	void UHeroHealthData::StaticRegisterNativesUHeroHealthData()
	{
	}
	UClass* Z_Construct_UClass_UHeroHealthData_NoRegister()
	{
		return UHeroHealthData::StaticClass();
	}
	struct Z_Construct_UClass_UHeroHealthData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthRegenerationPreventionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HealthRegenerationPreventionEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroHealthData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroHealthData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/HeroHealthData.h" },
		{ "ModuleRelativePath", "Data/HeroHealthData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroHealthData_Statics::NewProp_HealthRegenerationPreventionEffect_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Health Regeneration Prevention GE\n" },
		{ "ModuleRelativePath", "Data/HeroHealthData.h" },
		{ "ToolTip", "Health Regeneration Prevention GE" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroHealthData_Statics::NewProp_HealthRegenerationPreventionEffect = { "HealthRegenerationPreventionEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroHealthData, HealthRegenerationPreventionEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHeroHealthData_Statics::NewProp_HealthRegenerationPreventionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroHealthData_Statics::NewProp_HealthRegenerationPreventionEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroHealthData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroHealthData_Statics::NewProp_HealthRegenerationPreventionEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroHealthData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroHealthData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroHealthData_Statics::ClassParams = {
		&UHeroHealthData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroHealthData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroHealthData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroHealthData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroHealthData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroHealthData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroHealthData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroHealthData, 3686230754);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroHealthData>()
	{
		return UHeroHealthData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroHealthData(Z_Construct_UClass_UHeroHealthData, &UHeroHealthData::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroHealthData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroHealthData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
