// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef OCEANPLUGIN_CustomVehicleController_generated_h
#error "CustomVehicleController.generated.h already included, missing '#pragma once' in CustomVehicleController.h"
#endif
#define OCEANPLUGIN_CustomVehicleController_generated_h

#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableBuoyancy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableBuoyancy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawBuoyancyPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawBuoyancyPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterVehicle) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Vehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterVehicle(Z_Param_Vehicle); \
		P_NATIVE_END; \
	}


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableBuoyancy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableBuoyancy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawBuoyancyPoints) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DrawBuoyancyPoints(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsDriving) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsDriving(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExitVehicle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExitVehicle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnterVehicle) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Vehicle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnterVehicle(Z_Param_Vehicle); \
		P_NATIVE_END; \
	}


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomVehicleController(); \
	friend struct Z_Construct_UClass_ACustomVehicleController_Statics; \
public: \
	DECLARE_CLASS(ACustomVehicleController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomVehicleController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_INCLASS \
private: \
	static void StaticRegisterNativesACustomVehicleController(); \
	friend struct Z_Construct_UClass_ACustomVehicleController_Statics; \
public: \
	DECLARE_CLASS(ACustomVehicleController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OceanPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomVehicleController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomVehicleController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomVehicleController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomVehicleController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomVehicleController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomVehicleController(ACustomVehicleController&&); \
	NO_API ACustomVehicleController(const ACustomVehicleController&); \
public:


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomVehicleController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomVehicleController(ACustomVehicleController&&); \
	NO_API ACustomVehicleController(const ACustomVehicleController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomVehicleController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomVehicleController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomVehicleController)


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerPawn() { return STRUCT_OFFSET(ACustomVehicleController, PlayerPawn); }


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_31_PROLOG
#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_PRIVATE_PROPERTY_OFFSET \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_RPC_WRAPPERS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_INCLASS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_PRIVATE_PROPERTY_OFFSET \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_INCLASS_NO_PURE_DECLS \
	HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CustomVehicleController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HaulAway_0_4_1_Plugins_OceanPlugin_Source_OceanPlugin_Classes_CustomVehicleController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS