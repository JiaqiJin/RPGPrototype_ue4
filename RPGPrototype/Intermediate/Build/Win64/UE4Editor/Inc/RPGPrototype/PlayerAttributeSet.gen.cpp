// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGPrototype/Attribute/PlayerAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAttributeSet() {}
// Cross Module References
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerAttributeSet_NoRegister();
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_RPGPrototype();
// End Cross Module References
	void UPlayerAttributeSet::StaticRegisterNativesUPlayerAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UPlayerAttributeSet_NoRegister()
	{
		return UPlayerAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Attribute/PlayerAttributeSet.h" },
		{ "ModuleRelativePath", "Attribute/PlayerAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttributeSet_Statics::ClassParams = {
		&UPlayerAttributeSet::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerAttributeSet, 1688510492);
	template<> RPGPROTOTYPE_API UClass* StaticClass<UPlayerAttributeSet>()
	{
		return UPlayerAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerAttributeSet(Z_Construct_UClass_UPlayerAttributeSet, &UPlayerAttributeSet::StaticClass, TEXT("/Script/RPGPrototype"), TEXT("UPlayerAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
