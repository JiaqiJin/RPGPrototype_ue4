// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Data/HeroStaminaData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroStaminaData() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroStaminaData_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroStaminaData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
// End Cross Module References
	void UHeroStaminaData::StaticRegisterNativesUHeroStaminaData()
	{
	}
	UClass* Z_Construct_UClass_UHeroStaminaData_NoRegister()
	{
		return UHeroStaminaData::StaticClass();
	}
	struct Z_Construct_UClass_UHeroStaminaData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenerationPreventionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StaminaRegenerationPreventionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenerationEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StaminaRegenerationEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroStaminaData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStaminaData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Data/HeroStaminaData.h" },
		{ "ModuleRelativePath", "Data/HeroStaminaData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationPreventionEffect_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Stamina Regeneration Prevention GE\n" },
		{ "ModuleRelativePath", "Data/HeroStaminaData.h" },
		{ "ToolTip", "Stamina Regeneration Prevention GE" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationPreventionEffect = { "StaminaRegenerationPreventionEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroStaminaData, StaminaRegenerationPreventionEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationPreventionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationPreventionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationEffect_MetaData[] = {
		{ "Category", "Gameplay Effects" },
		{ "Comment", "// Stamina Regeneration Prevention GE\n" },
		{ "ModuleRelativePath", "Data/HeroStaminaData.h" },
		{ "ToolTip", "Stamina Regeneration Prevention GE" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationEffect = { "StaminaRegenerationEffect", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroStaminaData, StaminaRegenerationEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroStaminaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationPreventionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStaminaData_Statics::NewProp_StaminaRegenerationEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroStaminaData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroStaminaData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroStaminaData_Statics::ClassParams = {
		&UHeroStaminaData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroStaminaData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStaminaData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroStaminaData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStaminaData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroStaminaData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroStaminaData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroStaminaData, 2968068451);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroStaminaData>()
	{
		return UHeroStaminaData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroStaminaData(Z_Construct_UClass_UHeroStaminaData, &UHeroStaminaData::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroStaminaData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroStaminaData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
