// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MainCamera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCamera() {}
// Cross Module References
	COLONIZE_API UClass* Z_Construct_UClass_AMainCamera_NoRegister();
	COLONIZE_API UClass* Z_Construct_UClass_AMainCamera();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Colonize();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AMainCamera::StaticRegisterNativesAMainCamera()
	{
	}
	UClass* Z_Construct_UClass_AMainCamera_NoRegister()
	{
		return AMainCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_AMainCamera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Colonize,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MainCamera.h" },
				{ "ModuleRelativePath", "MainCamera.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "MainCamera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MainCamera.h" },
				{ "ToolTip", "For pivot point" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AMainCamera, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRotation_MetaData[] = {
				{ "Category", "MainCamera" },
				{ "ModuleRelativePath", "MainCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMainCamera, DefaultRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_DefaultRotation_MetaData, ARRAY_COUNT(NewProp_DefaultRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
				{ "Category", "MainCamera" },
				{ "ModuleRelativePath", "MainCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Float, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMainCamera, Distance), METADATA_PARAMS(NewProp_Distance_MetaData, ARRAY_COUNT(NewProp_Distance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
				{ "Category", "MainCamera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MainCamera.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AMainCamera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArm_MetaData, ARRAY_COUNT(NewProp_SpringArm_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Distance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArm,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMainCamera>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMainCamera::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainCamera, 1684484325);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainCamera(Z_Construct_UClass_AMainCamera, &AMainCamera::StaticClass, TEXT("/Script/Colonize"), TEXT("AMainCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCamera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
