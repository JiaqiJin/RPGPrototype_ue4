// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/AbilityTask/HeroAbilityTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroAbilityTask() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilityTask_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	void UHeroAbilityTask::StaticRegisterNativesUHeroAbilityTask()
	{
	}
	UClass* Z_Construct_UClass_UHeroAbilityTask_NoRegister()
	{
		return UHeroAbilityTask::StaticClass();
	}
	struct Z_Construct_UClass_UHeroAbilityTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroAbilityTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilityTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilityTask/HeroAbilityTask.h" },
		{ "ModuleRelativePath", "AbilityTask/HeroAbilityTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroAbilityTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroAbilityTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroAbilityTask_Statics::ClassParams = {
		&UHeroAbilityTask::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroAbilityTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroAbilityTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroAbilityTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroAbilityTask, 791419276);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroAbilityTask>()
	{
		return UHeroAbilityTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroAbilityTask(Z_Construct_UClass_UHeroAbilityTask, &UHeroAbilityTask::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroAbilityTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroAbilityTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
