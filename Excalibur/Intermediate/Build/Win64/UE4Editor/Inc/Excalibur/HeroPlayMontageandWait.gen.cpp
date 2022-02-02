// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/AbilityTask/HeroPlayMontageandWait.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroPlayMontageandWait() {}
// Cross Module References
	EXCALIBUR_API UFunction* Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroPlayMontageandWait_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroPlayMontageandWait();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics
	{
		struct _Script_Excalibur_eventHeroPlayMontageAndWaitForEventDelegate_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData EventData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Excalibur_eventHeroPlayMontageAndWaitForEventDelegate_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Excalibur_eventHeroPlayMontageAndWaitForEventDelegate_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate type used, EventTag and Payload may be empty if it came from the montage callbacks */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "Delegate type used, EventTag and Payload may be empty if it came from the montage callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Excalibur, nullptr, "HeroPlayMontageAndWaitForEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_Excalibur_eventHeroPlayMontageAndWaitForEventDelegate_Parms), Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UHeroPlayMontageandWait::StaticRegisterNativesUHeroPlayMontageandWait()
	{
	}
	UClass* Z_Construct_UClass_UHeroPlayMontageandWait_NoRegister()
	{
		return UHeroPlayMontageandWait::StaticClass();
	}
	struct Z_Construct_UClass_UHeroPlayMontageandWait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[];
#endif
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroPlayMontageandWait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_Rate_MetaData[] = {
		{ "Comment", "/** Playback rate */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "Playback rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, Rate), METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_Rate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_bStopWhenAbilityEnds_MetaData[] = {
		{ "Comment", "/** Rather montage should be aborted if ability ends */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "Rather montage should be aborted if ability ends" },
	};
#endif
	void Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((UHeroPlayMontageandWait*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHeroPlayMontageandWait), &Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_bStopWhenAbilityEnds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_bStopWhenAbilityEnds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroPlayMontageandWait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_bStopWhenAbilityEnds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroPlayMontageandWait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroPlayMontageandWait>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::ClassParams = {
		&UHeroPlayMontageandWait::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHeroPlayMontageandWait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroPlayMontageandWait()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHeroPlayMontageandWait_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHeroPlayMontageandWait, 981724270);
	template<> EXCALIBUR_API UClass* StaticClass<UHeroPlayMontageandWait>()
	{
		return UHeroPlayMontageandWait::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHeroPlayMontageandWait(Z_Construct_UClass_UHeroPlayMontageandWait, &UHeroPlayMontageandWait::StaticClass, TEXT("/Script/Excalibur"), TEXT("UHeroPlayMontageandWait"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroPlayMontageandWait);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
