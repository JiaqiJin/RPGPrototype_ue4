// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGPrototype/RPGPrototypeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGPrototypeGameMode() {}
// Cross Module References
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_ARPGPrototypeGameMode_NoRegister();
	RPGPROTOTYPE_API UClass* Z_Construct_UClass_ARPGPrototypeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RPGPrototype();
// End Cross Module References
	void ARPGPrototypeGameMode::StaticRegisterNativesARPGPrototypeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARPGPrototypeGameMode_NoRegister()
	{
		return ARPGPrototypeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARPGPrototypeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARPGPrototypeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGPrototype,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARPGPrototypeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RPGPrototypeGameMode.h" },
		{ "ModuleRelativePath", "RPGPrototypeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARPGPrototypeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGPrototypeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARPGPrototypeGameMode_Statics::ClassParams = {
		&ARPGPrototypeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARPGPrototypeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARPGPrototypeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARPGPrototypeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARPGPrototypeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARPGPrototypeGameMode, 2163240980);
	template<> RPGPROTOTYPE_API UClass* StaticClass<ARPGPrototypeGameMode>()
	{
		return ARPGPrototypeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARPGPrototypeGameMode(Z_Construct_UClass_ARPGPrototypeGameMode, &ARPGPrototypeGameMode::StaticClass, TEXT("/Script/RPGPrototype"), TEXT("ARPGPrototypeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGPrototypeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
