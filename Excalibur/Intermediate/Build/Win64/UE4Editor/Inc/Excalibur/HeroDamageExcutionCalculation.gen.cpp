// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Damage/HeroDamageExcutionCalculation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroDamageExcutionCalculation() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroDamageExcutionCalculation_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroDamageExcutionCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	void UHeroDamageExcutionCalculation::StaticRegisterNativesUHeroDamageExcutionCalculation()
	{
	}
	UClass* Z_Construct_UClass_UHeroDamageExcutionCalculation_NoRegister()
	{
		return UHeroDamageExcutionCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UHeroDamageExcutionCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroDamageExcutionCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroDamageExcutionCalculation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameplayEffectExecutionCalculations for GameplayEffects to make changes to an ASC.\n * ExecutionCalculations can only be used with Instant and Periodic GameplayEffects\n */" },
		{ "IncludePath", "Damage/HeroDamageExcutionCalculation.h" },
		{ "ModuleRelativePath", "Damage/HeroDamageExcutionCalculation.h" },
		{ "ToolTip", "GameplayEffectExecutionCalculations for GameplayEffects to make changes to an ASC.\nExecutionCalculations can only be used with Instant and Periodic GameplayEffects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroDamageExcutionCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroDamageExcutionCalculation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroDamageExcutionCalculation_Statics::ClassParams = {
		&UHeroDamageExcutionCalculation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHeroDamageExcutionCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroDamageExcutionCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroDamageExcutionCalculation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroDamageExcutionCalculation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroDamageExcutionCalculation, 2064578163);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroDamageExcutionCalculation>()
	{
		return UHeroDamageExcutionCalculation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroDamageExcutionCalculation(Z_Construct_UClass_UHeroDamageExcutionCalculation, &UHeroDamageExcutionCalculation::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroDamageExcutionCalculation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroDamageExcutionCalculation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
