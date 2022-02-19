// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Excalibur/Excalibur.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExcalibur() {}
// Cross Module References
	EXCALIBUR_API UEnum* Z_Construct_UEnum_Excalibur_EHeroAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_Excalibur();
// End Cross Module References
	static UEnum* EHeroAbilityInputID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Excalibur_EHeroAbilityInputID, Z_Construct_UPackage__Script_Excalibur(), TEXT("EHeroAbilityInputID"));
		}
		return Singleton;
	}
	template<> EXCALIBUR_API UEnum* StaticEnum<EHeroAbilityInputID::Type>()
	{
		return EHeroAbilityInputID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHeroAbilityInputID(EHeroAbilityInputID_StaticEnum, TEXT("/Script/Excalibur"), TEXT("EHeroAbilityInputID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Excalibur_EHeroAbilityInputID_Hash() { return 3688201931U; }
	UEnum* Z_Construct_UEnum_Excalibur_EHeroAbilityInputID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Excalibur();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHeroAbilityInputID"), 0, Get_Z_Construct_UEnum_Excalibur_EHeroAbilityInputID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHeroAbilityInputID::None", (int64)EHeroAbilityInputID::None },
				{ "EHeroAbilityInputID::Confirm", (int64)EHeroAbilityInputID::Confirm },
				{ "EHeroAbilityInputID::Cancel", (int64)EHeroAbilityInputID::Cancel },
				{ "EHeroAbilityInputID::Ability1", (int64)EHeroAbilityInputID::Ability1 },
				{ "EHeroAbilityInputID::Ability2", (int64)EHeroAbilityInputID::Ability2 },
				{ "EHeroAbilityInputID::Ability3", (int64)EHeroAbilityInputID::Ability3 },
				{ "EHeroAbilityInputID::Jump", (int64)EHeroAbilityInputID::Jump },
				{ "EHeroAbilityInputID::Sprint", (int64)EHeroAbilityInputID::Sprint },
				{ "EHeroAbilityInputID::Evade", (int64)EHeroAbilityInputID::Evade },
				{ "EHeroAbilityInputID::BackSideStep", (int64)EHeroAbilityInputID::BackSideStep },
				{ "EHeroAbilityInputID::LeftSideStep", (int64)EHeroAbilityInputID::LeftSideStep },
				{ "EHeroAbilityInputID::RightSideStep", (int64)EHeroAbilityInputID::RightSideStep },
				{ "EHeroAbilityInputID::FeatherFall", (int64)EHeroAbilityInputID::FeatherFall },
				{ "EHeroAbilityInputID::Crouch", (int64)EHeroAbilityInputID::Crouch },
				{ "EHeroAbilityInputID::Equip", (int64)EHeroAbilityInputID::Equip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ability1.Comment", "// 4 NUM 1\n" },
				{ "Ability1.DisplayName", "Ability1" },
				{ "Ability1.Name", "EHeroAbilityInputID::Ability1" },
				{ "Ability1.ToolTip", "4 NUM 1" },
				{ "Ability2.Comment", "// 5 NUM 3\n" },
				{ "Ability2.DisplayName", "Ability2" },
				{ "Ability2.Name", "EHeroAbilityInputID::Ability2" },
				{ "Ability2.ToolTip", "5 NUM 3" },
				{ "Ability3.Comment", "// 6 NUM 3\n" },
				{ "Ability3.DisplayName", "Ability3" },
				{ "Ability3.Name", "EHeroAbilityInputID::Ability3" },
				{ "Ability3.ToolTip", "6 NUM 3" },
				{ "BackSideStep.Comment", "// S\n" },
				{ "BackSideStep.DisplayName", "Back Side Step" },
				{ "BackSideStep.Name", "EHeroAbilityInputID::BackSideStep" },
				{ "BackSideStep.ToolTip", "S" },
				{ "BlueprintType", "true" },
				{ "Cancel.Comment", "// 2 Cancel RMB\n" },
				{ "Cancel.DisplayName", "Cancel" },
				{ "Cancel.Name", "EHeroAbilityInputID::Cancel" },
				{ "Cancel.ToolTip", "2 Cancel RMB" },
				{ "Confirm.Comment", "// 1 Confirm LMB\n" },
				{ "Confirm.DisplayName", "Confirm" },
				{ "Confirm.Name", "EHeroAbilityInputID::Confirm" },
				{ "Confirm.ToolTip", "1 Confirm LMB" },
				{ "Crouch.Comment", "// Ctr\n" },
				{ "Crouch.DisplayName", "Crouch" },
				{ "Crouch.Name", "EHeroAbilityInputID::Crouch" },
				{ "Crouch.ToolTip", "Ctr" },
				{ "Equip.Comment", "// R\n" },
				{ "Equip.DisplayName", "Equip" },
				{ "Equip.Name", "EHeroAbilityInputID::Equip" },
				{ "Equip.ToolTip", "R" },
				{ "Evade.Comment", "// Space\n" },
				{ "Evade.DisplayName", "Evade" },
				{ "Evade.Name", "EHeroAbilityInputID::Evade" },
				{ "Evade.ToolTip", "Space" },
				{ "FeatherFall.Comment", "// 1\n" },
				{ "FeatherFall.DisplayName", "FeatherFall" },
				{ "FeatherFall.Name", "EHeroAbilityInputID::FeatherFall" },
				{ "FeatherFall.ToolTip", "1" },
				{ "Jump.Comment", "// No Jump\n" },
				{ "Jump.DisplayName", "Jump" },
				{ "Jump.Name", "EHeroAbilityInputID::Jump" },
				{ "Jump.ToolTip", "No Jump" },
				{ "LeftSideStep.Comment", "// A\n" },
				{ "LeftSideStep.DisplayName", "Left Side Step" },
				{ "LeftSideStep.Name", "EHeroAbilityInputID::LeftSideStep" },
				{ "LeftSideStep.ToolTip", "A" },
				{ "ModuleRelativePath", "Excalibur.h" },
				{ "None.Comment", "// 0 None\n" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EHeroAbilityInputID::None" },
				{ "None.ToolTip", "0 None" },
				{ "RightSideStep.Comment", "// D\n" },
				{ "RightSideStep.DisplayName", "Right Side Step" },
				{ "RightSideStep.Name", "EHeroAbilityInputID::RightSideStep" },
				{ "RightSideStep.ToolTip", "D" },
				{ "Sprint.Comment", "// Left Shift\n" },
				{ "Sprint.DisplayName", "Sprint" },
				{ "Sprint.Name", "EHeroAbilityInputID::Sprint" },
				{ "Sprint.ToolTip", "Left Shift" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Excalibur,
				nullptr,
				"EHeroAbilityInputID",
				"EHeroAbilityInputID::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
