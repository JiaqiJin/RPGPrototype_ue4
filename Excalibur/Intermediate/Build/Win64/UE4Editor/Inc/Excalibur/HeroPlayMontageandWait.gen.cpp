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
	EXCALIBUR_API UFunction* Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
	EXCALIBUR_API UFunction* Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroPlayMontageandWait_NoRegister();
	EXCALIBUR_API UClass* Z_Construct_UClass_UHeroPlayMontageandWait();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics
	{
		struct _Script_Excalibur_eventUHeroPlayMontageNotify_Parms
		{
			FName NotifyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Excalibur_eventUHeroPlayMontageNotify_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::NewProp_NotifyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate called by 'PlayMontageNotify' and 'PlayMontageNotifyWindow' **/" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "Delegate called by 'PlayMontageNotify' and 'PlayMontageNotifyWindow' *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Excalibur, nullptr, "UHeroPlayMontageNotify__DelegateSignature", nullptr, nullptr, sizeof(_Script_Excalibur_eventUHeroPlayMontageNotify_Parms), Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Excalibur_UHeroPlayMontageNotify__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
	DEFINE_FUNCTION(UHeroPlayMontageandWait::execPlayMontageAndWaitForEvent)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_EventTags);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
		P_GET_UBOOL(Z_Param_bStopWhenAbilityEnds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimRootMotionTranslationScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHeroPlayMontageandWait**)Z_Param__Result=UHeroPlayMontageandWait::PlayMontageAndWaitForEvent(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_MontageToPlay,Z_Param_EventTags,Z_Param_Rate,Z_Param_StartSection,Z_Param_bStopWhenAbilityEnds,Z_Param_AnimRootMotionTranslationScale);
		P_NATIVE_END;
	}
	void UHeroPlayMontageandWait::StaticRegisterNativesUHeroPlayMontageandWait()
	{
		UClass* Class = UHeroPlayMontageandWait::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayMontageAndWaitForEvent", &UHeroPlayMontageandWait::execPlayMontageAndWaitForEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics
	{
		struct HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			UAnimMontage* MontageToPlay;
			FGameplayTagContainer EventTags;
			float Rate;
			FName StartSection;
			bool bStopWhenAbilityEnds;
			float AnimRootMotionTranslationScale;
			UHeroPlayMontageandWait* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTags;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms, StartSection), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit(void* Obj)
	{
		((HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms*)Obj)->bStopWhenAbilityEnds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds = { "bStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms), &Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms, AnimRootMotionTranslationScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms, ReturnValue), Z_Construct_UClass_UHeroPlayMontageandWait_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_OwningAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_TaskInstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_MontageToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_EventTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_bStopWhenAbilityEnds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_AnimRootMotionTranslationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "CPP_Default_AnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_bStopWhenAbilityEnds", "true" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroPlayMontageandWait, nullptr, "PlayMontageAndWaitForEvent", nullptr, nullptr, sizeof(HeroPlayMontageandWait_eventPlayMontageAndWaitForEvent_Parms), Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHeroPlayMontageandWait_NoRegister()
	{
		return UHeroPlayMontageandWait::StaticClass();
	}
	struct Z_Construct_UClass_UHeroPlayMontageandWait_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EventTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopWhenAbilityEnds_MetaData[];
#endif
		static void NewProp_bStopWhenAbilityEnds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAbilityEnds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StartSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimRootMotionTranslationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimRootMotionTranslationScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroPlayMontageandWait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_Excalibur,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroPlayMontageandWait_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroPlayMontageandWait_PlayMontageAndWaitForEvent, "PlayMontageAndWaitForEvent" }, // 1372340252
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Combination of the default PlayMontageAndWait and WaitGameplayEvent AbilityTasks.\n* This allows animation montages to send gameplay events from AnimNotifies back to the GameplayAbility that started them.\n* Use this to trigger actions at specific times during animation montages.\n */" },
		{ "IncludePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Combination of the default PlayMontageAndWait and WaitGameplayEvent AbilityTasks.\nThis allows animation montages to send gameplay events from AnimNotifies back to the GameplayAbility that started them.\nUse this to trigger actions at specific times during animation montages." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/** The montage completely finished playing */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "The montage completely finished playing" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, OnCompleted), Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCompleted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnBlendOut_MetaData[] = {
		{ "Comment", "/** The montage started blending out */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "The montage started blending out" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, OnBlendOut), Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnBlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnBlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnInterrupted_MetaData[] = {
		{ "Comment", "/** The montage was interrupted */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "The montage was interrupted" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnInterrupted = { "OnInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, OnInterrupted), Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnInterrupted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnInterrupted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCancelled_MetaData[] = {
		{ "Comment", "/** The ability task was explicitly cancelled by another ability */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "The ability task was explicitly cancelled by another ability" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, OnCancelled), Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventReceived_MetaData[] = {
		{ "Comment", "/** One of the triggering gameplay events happened */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "One of the triggering gameplay events happened" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, EventReceived), Z_Construct_UDelegateFunction_Excalibur_HeroPlayMontageAndWaitForEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_MontageToPlay_MetaData[] = {
		{ "Comment", "/** Montage that is playing */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "Montage that is playing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_MontageToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_MontageToPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventTags_MetaData[] = {
		{ "Comment", "/** List of tags to match against gameplay events */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "List of tags to match against gameplay events" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventTags_MetaData)) };
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_StartSection_MetaData[] = {
		{ "Comment", "/** Section to start montage from */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "Section to start montage from" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, StartSection), METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_StartSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_StartSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_AnimRootMotionTranslationScale_MetaData[] = {
		{ "Comment", "/** Modifies how root motion movement to apply */" },
		{ "ModuleRelativePath", "AbilityTask/HeroPlayMontageandWait.h" },
		{ "ToolTip", "Modifies how root motion movement to apply" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_AnimRootMotionTranslationScale = { "AnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHeroPlayMontageandWait, AnimRootMotionTranslationScale), METADATA_PARAMS(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_AnimRootMotionTranslationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_AnimRootMotionTranslationScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroPlayMontageandWait_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnBlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnInterrupted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_OnCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_MontageToPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_EventTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_bStopWhenAbilityEnds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_StartSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPlayMontageandWait_Statics::NewProp_AnimRootMotionTranslationScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroPlayMontageandWait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroPlayMontageandWait>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHeroPlayMontageandWait_Statics::ClassParams = {
		&UHeroPlayMontageandWait::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHeroPlayMontageandWait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UHeroPlayMontageandWait, 1552851196);
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
