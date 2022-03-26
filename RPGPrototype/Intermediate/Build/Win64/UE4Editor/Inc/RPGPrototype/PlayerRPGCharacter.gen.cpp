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
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	void APlayerRPGCharacter::StaticRegisterNativesAPlayerRPGCharacter()
	{
	}
	UClass* Z_Construct_UClass_APlayerRPGCharacter_NoRegister()
	{
		return APlayerRPGCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerRPGCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerRPGCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARPGPrototypeCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerRPGCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PlayerRPGCharacter.h" },
		{ "ModuleRelativePath", "Character/PlayerRPGCharacter.h" },
	};
#endif
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
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(APlayerRPGCharacter, 3191647627);
	template<> RPGPROTOTYPE_API UClass* StaticClass<APlayerRPGCharacter>()
	{
		return APlayerRPGCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerRPGCharacter(Z_Construct_UClass_APlayerRPGCharacter, &APlayerRPGCharacter::StaticClass, TEXT("/Script/RPGPrototype"), TEXT("APlayerRPGCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerRPGCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
