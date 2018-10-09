// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef COLONIZE_ColonyStats_generated_h
#error "ColonyStats.generated.h already included, missing '#pragma once' in ColonyStats.h"
#endif
#define COLONIZE_ColonyStats_generated_h

#define Colonize_Source_Colonize_ColonyStats_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMarble) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMarble); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMarble(Z_Param_NewMarble); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMarble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMarble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCredits) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCredits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetCredits(Z_Param_NewCredits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCredits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCredits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewItemCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SetItemCount(Z_Param_NewItemCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetItemCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->SetSize(Z_Param_NewSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->SetType(Z_Param_NewType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseOutput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBaseOutput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetBaseOutput(Z_Param_NewBaseOutput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBaseOutput(); \
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
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->SetPosition(Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPosition(); \
		P_NATIVE_END; \
	}


#define Colonize_Source_Colonize_ColonyStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMarble) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMarble); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetMarble(Z_Param_NewMarble); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMarble) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMarble(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCredits) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCredits); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetCredits(Z_Param_NewCredits); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCredits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCredits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemCount) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewItemCount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->SetItemCount(Z_Param_NewItemCount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetItemCount(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSize) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->SetSize(Z_Param_NewSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetValue(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->SetType(Z_Param_NewType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBaseOutput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBaseOutput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->SetBaseOutput(Z_Param_NewBaseOutput); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBaseOutput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBaseOutput(); \
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
	} \
 \
	DECLARE_FUNCTION(execSetPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->SetPosition(Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetPosition(); \
		P_NATIVE_END; \
	}


#define Colonize_Source_Colonize_ColonyStats_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColonyStats(); \
	friend COLONIZE_API class UClass* Z_Construct_UClass_UColonyStats(); \
public: \
	DECLARE_CLASS(UColonyStats, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Colonize"), NO_API) \
	DECLARE_SERIALIZER(UColonyStats) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Colonize_Source_Colonize_ColonyStats_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUColonyStats(); \
	friend COLONIZE_API class UClass* Z_Construct_UClass_UColonyStats(); \
public: \
	DECLARE_CLASS(UColonyStats, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Colonize"), NO_API) \
	DECLARE_SERIALIZER(UColonyStats) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Colonize_Source_Colonize_ColonyStats_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColonyStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColonyStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColonyStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColonyStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColonyStats(UColonyStats&&); \
	NO_API UColonyStats(const UColonyStats&); \
public:


#define Colonize_Source_Colonize_ColonyStats_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColonyStats(UColonyStats&&); \
	NO_API UColonyStats(const UColonyStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColonyStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColonyStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UColonyStats)


#define Colonize_Source_Colonize_ColonyStats_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(UColonyStats, Position); } \
	FORCEINLINE static uint32 __PPO__Level() { return STRUCT_OFFSET(UColonyStats, Level); } \
	FORCEINLINE static uint32 __PPO__BaseOutput() { return STRUCT_OFFSET(UColonyStats, BaseOutput); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(UColonyStats, Type); } \
	FORCEINLINE static uint32 __PPO__Value() { return STRUCT_OFFSET(UColonyStats, Value); } \
	FORCEINLINE static uint32 __PPO__Size() { return STRUCT_OFFSET(UColonyStats, Size); } \
	FORCEINLINE static uint32 __PPO__ItemCount() { return STRUCT_OFFSET(UColonyStats, ItemCount); } \
	FORCEINLINE static uint32 __PPO__Credits() { return STRUCT_OFFSET(UColonyStats, Credits); } \
	FORCEINLINE static uint32 __PPO__Marble() { return STRUCT_OFFSET(UColonyStats, Marble); }


#define Colonize_Source_Colonize_ColonyStats_h_11_PROLOG
#define Colonize_Source_Colonize_ColonyStats_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Colonize_Source_Colonize_ColonyStats_h_15_PRIVATE_PROPERTY_OFFSET \
	Colonize_Source_Colonize_ColonyStats_h_15_RPC_WRAPPERS \
	Colonize_Source_Colonize_ColonyStats_h_15_INCLASS \
	Colonize_Source_Colonize_ColonyStats_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Colonize_Source_Colonize_ColonyStats_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Colonize_Source_Colonize_ColonyStats_h_15_PRIVATE_PROPERTY_OFFSET \
	Colonize_Source_Colonize_ColonyStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Colonize_Source_Colonize_ColonyStats_h_15_INCLASS_NO_PURE_DECLS \
	Colonize_Source_Colonize_ColonyStats_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Colonize_Source_Colonize_ColonyStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
