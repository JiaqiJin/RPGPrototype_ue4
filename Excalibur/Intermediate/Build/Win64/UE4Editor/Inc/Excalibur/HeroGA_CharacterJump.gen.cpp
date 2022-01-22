// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Ability/HeroGA_CharacterJump.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGA_CharacterJump() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroGA_CharacterJump_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroGA_CharacterJump();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	void UHeroGA_CharacterJump::StaticRegisterNativesUHeroGA_CharacterJump()
	{
	}
	UClass* Z_Construct_UClass_UHeroGA_CharacterJump_NoRegister()
	{
		return UHeroGA_CharacterJump::StaticClass();
	}
	struct Z_Construct_UClass_UHeroGA_CharacterJump_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroGA_CharacterJump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility_CharacterJump,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroGA_CharacterJump_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Ability/HeroGA_CharacterJump.h" },
		{ "ModuleRelativePath", "Ability/HeroGA_CharacterJump.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroGA_CharacterJump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGA_CharacterJump>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroGA_CharacterJump_Statics::ClassParams = {
		&UHeroGA_CharacterJump::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroGA_CharacterJump_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGA_CharacterJump_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroGA_CharacterJump()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroGA_CharacterJump_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroGA_CharacterJump, 699890150);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroGA_CharacterJump>()
	{
		return UHeroGA_CharacterJump::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroGA_CharacterJump(Z_Construct_UClass_UHeroGA_CharacterJump, &UHeroGA_CharacterJump::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroGA_CharacterJump"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGA_CharacterJump);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
