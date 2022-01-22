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
	void AHeroPlayerCharacter::StaticRegisterNativesAHeroPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AHeroPlayerCharacter_NoRegister()
	{
		return AHeroPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHeroPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		Z_Construct_UClass_AHeroPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AHeroPlayerCharacter, 2545765191);
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
