// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/UI/Component/CharacterManaWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterManaWidget() {}
// Cross Module References
	EXCALIBUR_API UClass* Z_Construct_UClass_UCharacterManaWidget_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UCharacterManaWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UCharacterManaWidget::StaticRegisterNativesUCharacterManaWidget()
	{
	}
	UClass* Z_Construct_UClass_UCharacterManaWidget_NoRegister()
	{
		return UCharacterManaWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterManaWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaReg_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaReg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterManaWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManaWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/Component/CharacterManaWidget.h" },
		{ "ModuleRelativePath", "UI/Component/CharacterManaWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Component/CharacterManaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaBar = { "ManaBar", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterManaWidget, ManaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Component/CharacterManaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaText = { "ManaText", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterManaWidget, ManaText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaReg_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/Component/CharacterManaWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaReg = { "ManaReg", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterManaWidget, ManaReg), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaReg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaReg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterManaWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterManaWidget_Statics::NewProp_ManaReg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterManaWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterManaWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterManaWidget_Statics::ClassParams = {
		&UCharacterManaWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterManaWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManaWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterManaWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterManaWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterManaWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterManaWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterManaWidget, 2166677414);
	template<> EXCALIBUR_API UClass* StaticClass<UCharacterManaWidget>()
	{
		return UCharacterManaWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterManaWidget(Z_Construct_UClass_UCharacterManaWidget, &UCharacterManaWidget::StaticClass, TEXT("/Script/Excalibur"), TEXT("UCharacterManaWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterManaWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
