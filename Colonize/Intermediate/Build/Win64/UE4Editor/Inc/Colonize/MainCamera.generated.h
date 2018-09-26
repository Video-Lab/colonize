// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLONIZE_MainCamera_generated_h
#error "MainCamera.generated.h already included, missing '#pragma once' in MainCamera.h"
#endif
#define COLONIZE_MainCamera_generated_h

#define Colonize_Source_Colonize_MainCamera_h_12_RPC_WRAPPERS
#define Colonize_Source_Colonize_MainCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Colonize_Source_Colonize_MainCamera_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCamera(); \
	friend COLONIZE_API class UClass* Z_Construct_UClass_AMainCamera(); \
public: \
	DECLARE_CLASS(AMainCamera, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Colonize"), NO_API) \
	DECLARE_SERIALIZER(AMainCamera) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Colonize_Source_Colonize_MainCamera_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMainCamera(); \
	friend COLONIZE_API class UClass* Z_Construct_UClass_AMainCamera(); \
public: \
	DECLARE_CLASS(AMainCamera, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Colonize"), NO_API) \
	DECLARE_SERIALIZER(AMainCamera) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Colonize_Source_Colonize_MainCamera_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCamera(AMainCamera&&); \
	NO_API AMainCamera(const AMainCamera&); \
public:


#define Colonize_Source_Colonize_MainCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCamera(AMainCamera&&); \
	NO_API AMainCamera(const AMainCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCamera); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCamera)


#define Colonize_Source_Colonize_MainCamera_h_12_PRIVATE_PROPERTY_OFFSET
#define Colonize_Source_Colonize_MainCamera_h_9_PROLOG
#define Colonize_Source_Colonize_MainCamera_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Colonize_Source_Colonize_MainCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	Colonize_Source_Colonize_MainCamera_h_12_RPC_WRAPPERS \
	Colonize_Source_Colonize_MainCamera_h_12_INCLASS \
	Colonize_Source_Colonize_MainCamera_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Colonize_Source_Colonize_MainCamera_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Colonize_Source_Colonize_MainCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	Colonize_Source_Colonize_MainCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Colonize_Source_Colonize_MainCamera_h_12_INCLASS_NO_PURE_DECLS \
	Colonize_Source_Colonize_MainCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Colonize_Source_Colonize_MainCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
