// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COLONIZE_PlayerStats_generated_h
#error "PlayerStats.generated.h already included, missing '#pragma once' in PlayerStats.h"
#endif
#define COLONIZE_PlayerStats_generated_h

#define Colonize_Source_Colonize_PlayerStats_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeleteColonyToTrack) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Colony); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->DeleteColonyToTrack(Z_Param_Colony); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddColonyToTrack) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Colony); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->AddColonyToTrack(Z_Param_Colony); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColonyActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetColonyActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractTotalMarble) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Marble); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SubtractTotalMarble(Z_Param_Marble); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTotalMarble) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Marble); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AddTotalMarble(Z_Param_Marble); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTotalMarble) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMarble); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetTotalMarble(Z_Param_NewMarble); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalMarble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTotalMarble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractTotalCredits) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Credits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SubtractTotalCredits(Z_Param_Credits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTotalCredits) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Credits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AddTotalCredits(Z_Param_Credits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTotalCredits) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTotalCredits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetTotalCredits(Z_Param_NewTotalCredits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalCredits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTotalCredits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractTotalPopulation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Population); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SubtractTotalPopulation(Z_Param_Population); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTotalPopulation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Population); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AddTotalPopulation(Z_Param_Population); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTotalPopulation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTotalPopulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetTotalPopulation(Z_Param_NewTotalPopulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalPopulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTotalPopulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetLevel(Z_Param_NewLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLevel(); \
		P_NATIVE_END; \
	}


#define Colonize_Source_Colonize_PlayerStats_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeleteColonyToTrack) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Colony); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->DeleteColonyToTrack(Z_Param_Colony); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddColonyToTrack) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Colony); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->AddColonyToTrack(Z_Param_Colony); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetColonyActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetColonyActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractTotalMarble) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Marble); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SubtractTotalMarble(Z_Param_Marble); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTotalMarble) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Marble); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AddTotalMarble(Z_Param_Marble); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTotalMarble) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMarble); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetTotalMarble(Z_Param_NewMarble); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalMarble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTotalMarble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractTotalCredits) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Credits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SubtractTotalCredits(Z_Param_Credits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTotalCredits) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Credits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AddTotalCredits(Z_Param_Credits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTotalCredits) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTotalCredits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetTotalCredits(Z_Param_NewTotalCredits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalCredits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTotalCredits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSubtractTotalPopulation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Population); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SubtractTotalPopulation(Z_Param_Population); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTotalPopulation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Population); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->AddTotalPopulation(Z_Param_Population); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTotalPopulation) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTotalPopulation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetTotalPopulation(Z_Param_NewTotalPopulation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalPopulation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTotalPopulation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLevel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewLevel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetLevel(Z_Param_NewLevel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLevel(); \
		P_NATIVE_END; \
	}


#define Colonize_Source_Colonize_PlayerStats_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStats(); \
	friend COLONIZE_API class UClass* Z_Construct_UClass_UPlayerStats(); \
public: \
	DECLARE_CLASS(UPlayerStats, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Colonize"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStats) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Colonize_Source_Colonize_PlayerStats_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerStats(); \
	friend COLONIZE_API class UClass* Z_Construct_UClass_UPlayerStats(); \
public: \
	DECLARE_CLASS(UPlayerStats, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Colonize"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStats) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Colonize_Source_Colonize_PlayerStats_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStats(UPlayerStats&&); \
	NO_API UPlayerStats(const UPlayerStats&); \
public:


#define Colonize_Source_Colonize_PlayerStats_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStats(UPlayerStats&&); \
	NO_API UPlayerStats(const UPlayerStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerStats)


#define Colonize_Source_Colonize_PlayerStats_h_21_PRIVATE_PROPERTY_OFFSET
#define Colonize_Source_Colonize_PlayerStats_h_18_PROLOG
#define Colonize_Source_Colonize_PlayerStats_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Colonize_Source_Colonize_PlayerStats_h_21_PRIVATE_PROPERTY_OFFSET \
	Colonize_Source_Colonize_PlayerStats_h_21_RPC_WRAPPERS \
	Colonize_Source_Colonize_PlayerStats_h_21_INCLASS \
	Colonize_Source_Colonize_PlayerStats_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Colonize_Source_Colonize_PlayerStats_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Colonize_Source_Colonize_PlayerStats_h_21_PRIVATE_PROPERTY_OFFSET \
	Colonize_Source_Colonize_PlayerStats_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Colonize_Source_Colonize_PlayerStats_h_21_INCLASS_NO_PURE_DECLS \
	Colonize_Source_Colonize_PlayerStats_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Colonize_Source_Colonize_PlayerStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
