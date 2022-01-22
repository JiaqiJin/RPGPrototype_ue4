// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Data/HeroAbilityDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroAbilityDataAsset() {}
// Cross Module References
	EXCALIBUR_API UScriptStruct* Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	EXCALIBUR_API UEnum* Z_Construct_UEnum_Excalibur_EHeroAbilityInputID();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilityDataAsset_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilityDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FHeroGameplayAbilityBindInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EXCALIBUR_API uint32 Get_Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo, Z_Construct_UPackage__Script_Excalibur(), TEXT("HeroGameplayAbilityBindInfo"), sizeof(FHeroGameplayAbilityBindInfo), Get_Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Hash());
	}
	return Singleton;
}
template<> EXCALIBUR_API UScriptStruct* StaticStruct<FHeroGameplayAbilityBindInfo>()
{
	return FHeroGameplayAbilityBindInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHeroGameplayAbilityBindInfo(FHeroGameplayAbilityBindInfo::StaticStruct, TEXT("/Script/Excalibur"), TEXT("HeroGameplayAbilityBindInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Excalibur_StaticRegisterNativesFHeroGameplayAbilityBindInfo
{
	FScriptStruct_Excalibur_StaticRegisterNativesFHeroGameplayAbilityBindInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HeroGameplayAbilityBindInfo")),new UScriptStruct::TCppStructOps<FHeroGameplayAbilityBindInfo>);
	}
} ScriptStruct_Excalibur_StaticRegisterNativesFHeroGameplayAbilityBindInfo;
	struct Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Command;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HeroAbilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AbilityName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/HeroAbilityDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeroGameplayAbilityBindInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "HeroGameplayAbilityBindInfo" },
		{ "ModuleRelativePath", "Data/HeroAbilityDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroGameplayAbilityBindInfo, Command), Z_Construct_UEnum_Excalibur_EHeroAbilityInputID, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_HeroAbilities_MetaData[] = {
		{ "Category", "HeroGameplayAbilityBindInfo" },
		{ "ModuleRelativePath", "Data/HeroAbilityDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_HeroAbilities = { "HeroAbilities", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroGameplayAbilityBindInfo, HeroAbilities), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_HeroAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_HeroAbilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_AbilityName_MetaData[] = {
		{ "Category", "HeroGameplayAbilityBindInfo" },
		{ "ModuleRelativePath", "Data/HeroAbilityDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_AbilityName = { "AbilityName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroGameplayAbilityBindInfo, AbilityName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_AbilityName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_AbilityName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_Command,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_HeroAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::NewProp_AbilityName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
		nullptr,
		&NewStructOps,
		"HeroGameplayAbilityBindInfo",
		sizeof(FHeroGameplayAbilityBindInfo),
		alignof(FHeroGameplayAbilityBindInfo),
		Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Excalibur();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HeroGameplayAbilityBindInfo"), sizeof(FHeroGameplayAbilityBindInfo), Get_Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo_Hash() { return 924149406U; }
	void UHeroAbilityDataAsset::StaticRegisterNativesUHeroAbilityDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UHeroAbilityDataAsset_NoRegister()
	{
		return UHeroAbilityDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UHeroAbilityDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroAbilityDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilityDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for a simple asset containing data.\n */" },
		{ "IncludePath", "Data/HeroAbilityDataAsset.h" },
		{ "ModuleRelativePath", "Data/HeroAbilityDataAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a simple asset containing data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroAbilityDataAsset_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroGameplayAbilityBindInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilityDataAsset_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "HeroAbilityDataAsset" },
		{ "ModuleRelativePath", "Data/HeroAbilityDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroAbilityDataAsset_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroAbilityDataAsset, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHeroAbilityDataAsset_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityDataAsset_Statics::NewProp_Abilities_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroAbilityDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAbilityDataAsset_Statics::NewProp_Abilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAbilityDataAsset_Statics::NewProp_Abilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroAbilityDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroAbilityDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroAbilityDataAsset_Statics::ClassParams = {
		&UHeroAbilityDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroAbilityDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroAbilityDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroAbilityDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroAbilityDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroAbilityDataAsset, 1016154142);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroAbilityDataAsset>()
	{
		return UHeroAbilityDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroAbilityDataAsset(Z_Construct_UClass_UHeroAbilityDataAsset, &UHeroAbilityDataAsset::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroAbilityDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroAbilityDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
