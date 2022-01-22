// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/UI/HeroCharacterUIMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCharacterUIMain() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroCharacterUIMain_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroCharacterUIMain();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	EXCALIBUR_API UClass* Z_Construct_UClass_UCharacterHealthWidget_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UCharacterManaWidget_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UCharacterStaminaWidget_NoRegister();
// End Cross Module References
	void UHeroCharacterUIMain::StaticRegisterNativesUHeroCharacterUIMain()
	{
	}
	UClass* Z_Construct_UClass_UHeroCharacterUIMain_NoRegister()
	{
		return UHeroCharacterUIMain::StaticClass();
	}
	struct Z_Construct_UClass_UHeroCharacterUIMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeroHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeroMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeroStamina_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeroStamina;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroCharacterUIMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroCharacterUIMain_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/HeroCharacterUIMain.h" },
		{ "ModuleRelativePath", "UI/HeroCharacterUIMain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroHealth_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HeroCharacterUIMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroHealth = { "HeroHealth", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroCharacterUIMain, HeroHealth), Z_Construct_UClass_UCharacterHealthWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroMana_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HeroCharacterUIMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroMana = { "HeroMana", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroCharacterUIMain, HeroMana), Z_Construct_UClass_UCharacterManaWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroStamina_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HeroCharacterUIMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroStamina = { "HeroStamina", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroCharacterUIMain, HeroStamina), Z_Construct_UClass_UCharacterStaminaWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroStamina_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroCharacterUIMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroCharacterUIMain_Statics::NewProp_HeroStamina,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroCharacterUIMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroCharacterUIMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroCharacterUIMain_Statics::ClassParams = {
		&UHeroCharacterUIMain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroCharacterUIMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCharacterUIMain_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroCharacterUIMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCharacterUIMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroCharacterUIMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroCharacterUIMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroCharacterUIMain, 4060772260);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroCharacterUIMain>()
	{
		return UHeroCharacterUIMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroCharacterUIMain(Z_Construct_UClass_UHeroCharacterUIMain, &UHeroCharacterUIMain::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroCharacterUIMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroCharacterUIMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
