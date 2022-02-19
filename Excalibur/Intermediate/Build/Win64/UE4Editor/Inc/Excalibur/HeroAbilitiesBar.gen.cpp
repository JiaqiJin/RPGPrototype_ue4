// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/UI/Ability/HeroAbilitiesBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroAbilitiesBar() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilitiesBar_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilitiesBar();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
// End Cross Module References
	void UHeroAbilitiesBar::StaticRegisterNativesUHeroAbilitiesBar()
	{
	}
	UClass* Z_Construct_UClass_UHeroAbilitiesBar_NoRegister()
	{
		return UHeroAbilitiesBar::StaticClass();
	}
	struct Z_Construct_UClass_UHeroAbilitiesBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityScrollBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityScrollBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroAbilitiesBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilitiesBar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Ability/HeroAbilitiesBar.h" },
		{ "ModuleRelativePath", "UI/Ability/HeroAbilitiesBar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilitiesBar_Statics::NewProp_AbilityScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Ability/HeroAbilitiesBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroAbilitiesBar_Statics::NewProp_AbilityScrollBox = { "AbilityScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroAbilitiesBar, AbilityScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroAbilitiesBar_Statics::NewProp_AbilityScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilitiesBar_Statics::NewProp_AbilityScrollBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroAbilitiesBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAbilitiesBar_Statics::NewProp_AbilityScrollBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroAbilitiesBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroAbilitiesBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroAbilitiesBar_Statics::ClassParams = {
		&UHeroAbilitiesBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroAbilitiesBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilitiesBar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroAbilitiesBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilitiesBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroAbilitiesBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroAbilitiesBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroAbilitiesBar, 1377217776);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroAbilitiesBar>()
	{
		return UHeroAbilitiesBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroAbilitiesBar(Z_Construct_UClass_UHeroAbilitiesBar, &UHeroAbilitiesBar::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroAbilitiesBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroAbilitiesBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
