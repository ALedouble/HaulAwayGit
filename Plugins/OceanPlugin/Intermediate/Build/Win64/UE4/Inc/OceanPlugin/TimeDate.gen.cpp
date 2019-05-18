// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanPlugin/Classes/Sky/TimeDate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeDate() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTimeDate();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
// End Cross Module References
class UScriptStruct* FTimeDate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTimeDate_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeDate, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("TimeDate"), sizeof(FTimeDate), Get_Z_Construct_UScriptStruct_FTimeDate_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimeDate(FTimeDate::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("TimeDate"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFTimeDate
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFTimeDate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimeDate")),new UScriptStruct::TCppStructOps<FTimeDate>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFTimeDate;
	struct Z_Construct_UScriptStruct_FTimeDate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Year_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Year;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Month_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Month;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Day;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hour_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minute_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Second_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Second;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Millisecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Millisecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeDate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sky/TimeDate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeDate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeDate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Year_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Classes/Sky/TimeDate.h" },
		{ "ToolTip", "The year value for this time and date." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Year = { UE4CodeGen_Private::EPropertyClass::Int, "Year", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTimeDate, Year), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Year_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Year_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Month_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Classes/Sky/TimeDate.h" },
		{ "ToolTip", "The month value for this time and date." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Month = { UE4CodeGen_Private::EPropertyClass::Int, "Month", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTimeDate, Month), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Month_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Month_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Day_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Classes/Sky/TimeDate.h" },
		{ "ToolTip", "The day value for this time and date." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Day = { UE4CodeGen_Private::EPropertyClass::Int, "Day", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTimeDate, Day), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Day_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Day_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Hour_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Classes/Sky/TimeDate.h" },
		{ "ToolTip", "The hour value for this time and date." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Hour = { UE4CodeGen_Private::EPropertyClass::Int, "Hour", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTimeDate, Hour), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Hour_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Hour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Minute_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Classes/Sky/TimeDate.h" },
		{ "ToolTip", "The minute value for this time and date." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Minute = { UE4CodeGen_Private::EPropertyClass::Int, "Minute", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTimeDate, Minute), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Minute_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Minute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Second_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Classes/Sky/TimeDate.h" },
		{ "ToolTip", "The second value for this time and date." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Second = { UE4CodeGen_Private::EPropertyClass::Int, "Second", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTimeDate, Second), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Second_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Second_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Millisecond_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Classes/Sky/TimeDate.h" },
		{ "ToolTip", "The millisecond value for this time and date." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Millisecond = { UE4CodeGen_Private::EPropertyClass::Int, "Millisecond", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTimeDate, Millisecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Millisecond_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Millisecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Year,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Month,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Day,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Hour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Minute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Second,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeDate_Statics::NewProp_Millisecond,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeDate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
		nullptr,
		&NewStructOps,
		"TimeDate",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTimeDate),
		alignof(FTimeDate),
		Z_Construct_UScriptStruct_FTimeDate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeDate_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeDate_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeDate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeDate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimeDate_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimeDate"), sizeof(FTimeDate), Get_Z_Construct_UScriptStruct_FTimeDate_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimeDate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimeDate_CRC() { return 974800367U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif