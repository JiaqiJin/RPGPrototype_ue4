// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Data/HeroManaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroManaData() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroManaData_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroManaData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	void UHeroManaData::StaticRegisterNativesUHeroManaData()
	{
	}
	UClass* Z_Construct_UClass_UHeroManaData_NoRegister()
	{
		return UHeroManaData::StaticClass();
	}
	struct Z_Construct_UClass_UHeroManaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaRegenerationPreventionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ManaRegenerationPreventionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaRegenerationEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ManaRegenerationEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroManaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroManaData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/HeroManaData.h" },
		{ "ModuleRelativePath", "Data/HeroManaData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationPreventionEffect_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Mana Regeneration Prevention GE\n" },
		{ "ModuleRelativePath", "Data/HeroManaData.h" },
		{ "ToolTip", "Mana Regeneration Prevention GE" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationPreventionEffect = { "ManaRegenerationPreventionEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroManaData, ManaRegenerationPreventionEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationPreventionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationPreventionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationEffect_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Mana Regeneration Prevention GE\n" },
		{ "ModuleRelativePath", "Data/HeroManaData.h" },
		{ "ToolTip", "Mana Regeneration Prevention GE" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationEffect = { "ManaRegenerationEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroManaData, ManaRegenerationEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroManaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationPreventionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroManaData_Statics::NewProp_ManaRegenerationEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroManaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroManaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroManaData_Statics::ClassParams = {
		&UHeroManaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroManaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroManaData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroManaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroManaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroManaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroManaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroManaData, 2439714062);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroManaData>()
	{
		return UHeroManaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroManaData(Z_Construct_UClass_UHeroManaData, &UHeroManaData::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroManaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroManaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
