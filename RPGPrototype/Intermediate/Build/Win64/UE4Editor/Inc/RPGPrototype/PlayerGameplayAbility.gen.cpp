// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGPrototype/Ability/PlayerGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerGameplayAbility() {}
// Cross Module References
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerGameplayAbility_NoRegister();
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_RPGPrototype();
// End Cross Module References
	void UPlayerGameplayAbility::StaticRegisterNativesUPlayerGameplayAbility()
	{
	}
	UClass* Z_Construct_UClass_UPlayerGameplayAbility_NoRegister()
	{
		return UPlayerGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Ability/PlayerGameplayAbility.h" },
		{ "ModuleRelativePath", "Ability/PlayerGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerGameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerGameplayAbility_Statics::ClassParams = {
		&UPlayerGameplayAbility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerGameplayAbility, 1990104165);
	template<> RPGPROTOTYPE_API UClass* StaticClass<UPlayerGameplayAbility>()
	{
		return UPlayerGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerGameplayAbility(Z_Construct_UClass_UPlayerGameplayAbility, &UPlayerGameplayAbility::StaticClass, TEXT("/Script/RPGPrototype"), TEXT("UPlayerGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
