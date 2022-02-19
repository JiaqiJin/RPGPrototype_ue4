// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/UI/Ability/HeroAbilityWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroAbilityWidget() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilityWidget_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroAbilityWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UHeroAbilityWidget::StaticRegisterNativesUHeroAbilityWidget()
	{
	}
	UClass* Z_Construct_UClass_UHeroAbilityWidget_NoRegister()
	{
		return UHeroAbilityWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHeroAbilityWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilityCooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroAbilityWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilityWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Ability/HeroAbilityWidget.h" },
		{ "ModuleRelativePath", "UI/Ability/HeroAbilityWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Ability/HeroAbilityWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityIcon = { "AbilityIcon", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroAbilityWidget, AbilityIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityCooldown_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Ability/HeroAbilityWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityCooldown = { "AbilityCooldown", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroAbilityWidget, AbilityCooldown), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityCooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroAbilityWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroAbilityWidget_Statics::NewProp_AbilityCooldown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroAbilityWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroAbilityWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroAbilityWidget_Statics::ClassParams = {
		&UHeroAbilityWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroAbilityWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroAbilityWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroAbilityWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroAbilityWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroAbilityWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroAbilityWidget, 2149100193);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroAbilityWidget>()
	{
		return UHeroAbilityWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroAbilityWidget(Z_Construct_UClass_UHeroAbilityWidget, &UHeroAbilityWidget::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroAbilityWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroAbilityWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
