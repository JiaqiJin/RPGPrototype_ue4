// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/ExcaliburGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExcaliburGameMode() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_AExcaliburGameMode_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_AExcaliburGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	void AExcaliburGameMode::StaticRegisterNativesAExcaliburGameMode()
	{
	}
	UClass* Z_Construct_UClass_AExcaliburGameMode_NoRegister()
	{
		return AExcaliburGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExcaliburGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExcaliburGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExcaliburGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ExcaliburGameMode.h" },
		{ "ModuleRelativePath", "ExcaliburGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExcaliburGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExcaliburGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExcaliburGameMode_Statics::ClassParams = {
		&AExcaliburGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AExcaliburGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExcaliburGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExcaliburGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExcaliburGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExcaliburGameMode, 1986150593);
	template<> EXCALIBUR_API UClass* StaticClass<AExcaliburGameMode>()
	{
		return AExcaliburGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExcaliburGameMode(Z_Construct_UClass_AExcaliburGameMode, &AExcaliburGameMode::StaticClass, TEXT("/Script/Excalibur"), TEXT("AExcaliburGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExcaliburGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
