// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Attributes/HeroAbilityCooldownAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroAbilityCooldownAttribute() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilityCooldownAttribute_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilityCooldownAttribute();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	void UHeroAbilityCooldownAttribute::StaticRegisterNativesUHeroAbilityCooldownAttribute()
	{
	}
	UClass* Z_Construct_UClass_UHeroAbilityCooldownAttribute_NoRegister()
	{
		return UHeroAbilityCooldownAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerGlobalCooldownMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerGlobalCooldownMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Attributes/HeroAbilityCooldownAttribute.h" },
		{ "ModuleRelativePath", "Attributes/HeroAbilityCooldownAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::NewProp_PlayerGlobalCooldownMultiplier_MetaData[] = {
		{ "Category", "Player|Cooldown|Attributes" },
		{ "Comment", "// Cooldown Attribute\n" },
		{ "ModuleRelativePath", "Attributes/HeroAbilityCooldownAttribute.h" },
		{ "ToolTip", "Cooldown Attribute" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::NewProp_PlayerGlobalCooldownMultiplier = { "PlayerGlobalCooldownMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroAbilityCooldownAttribute, PlayerGlobalCooldownMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::NewProp_PlayerGlobalCooldownMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::NewProp_PlayerGlobalCooldownMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::NewProp_PlayerGlobalCooldownMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroAbilityCooldownAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::ClassParams = {
		&UHeroAbilityCooldownAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroAbilityCooldownAttribute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroAbilityCooldownAttribute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroAbilityCooldownAttribute, 2050136543);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroAbilityCooldownAttribute>()
	{
		return UHeroAbilityCooldownAttribute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroAbilityCooldownAttribute(Z_Construct_UClass_UHeroAbilityCooldownAttribute, &UHeroAbilityCooldownAttribute::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroAbilityCooldownAttribute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroAbilityCooldownAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
