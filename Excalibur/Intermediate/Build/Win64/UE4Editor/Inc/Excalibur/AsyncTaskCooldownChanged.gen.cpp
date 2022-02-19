// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/AbilityTask/AsyncTaskCooldownChanged.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncTaskCooldownChanged() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UAsyncTaskCooldownChanged_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UAsyncTaskCooldownChanged();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	void UAsyncTaskCooldownChanged::StaticRegisterNativesUAsyncTaskCooldownChanged()
	{
	}
	UClass* Z_Construct_UClass_UAsyncTaskCooldownChanged_NoRegister()
	{
		return UAsyncTaskCooldownChanged::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Blueprint node to automatically register a listener for changes (Begin and End) to an array of Cooldown tags.\n * Useful to use in UI.\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "AbilityTask/AsyncTaskCooldownChanged.h" },
		{ "ModuleRelativePath", "AbilityTask/AsyncTaskCooldownChanged.h" },
		{ "ToolTip", "Blueprint node to automatically register a listener for changes (Begin and End) to an array of Cooldown tags.\nUseful to use in UI." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTaskCooldownChanged>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::ClassParams = {
		&UAsyncTaskCooldownChanged::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncTaskCooldownChanged()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncTaskCooldownChanged_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncTaskCooldownChanged, 1048160201);
	template<> EXCALIBUR_API UClass* StaticClass<UAsyncTaskCooldownChanged>()
	{
		return UAsyncTaskCooldownChanged::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncTaskCooldownChanged(Z_Construct_UClass_UAsyncTaskCooldownChanged, &UAsyncTaskCooldownChanged::StaticClass, TEXT("/Script/Excalibur"), TEXT("UAsyncTaskCooldownChanged"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTaskCooldownChanged);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
