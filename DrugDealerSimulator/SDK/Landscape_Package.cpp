/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UControlPointMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UControlPointMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBF430
	 * 		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(const class FName& ParameterName, const struct FLinearColor& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");
		
		ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params params {};
		params.ParameterName = ParameterName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBF370
	 * 		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(const class FName& ParameterName, class UTexture* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");
		
		ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params params {};
		params.ParameterName = ParameterName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBF2A0
	 * 		Name   -> Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(const class FName& ParameterName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");
		
		ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params params {};
		params.ParameterName = ParameterName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBF110
	 * 		Name   -> Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInterface*                          NewLandscapeMaterial                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");
		
		ALandscapeProxy_EditorSetLandscapeMaterial_Params params {};
		params.NewLandscapeMaterial = NewLandscapeMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBEE00
	 * 		Name   -> Function Landscape.LandscapeProxy.EditorApplySpline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USplineComponent*                            InSplineComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartSideFalloff                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndSideFalloff                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartRoll                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndRoll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumSubdivisions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRaiseHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLowerHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULandscapeLayerInfoObject*                   PaintLayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");
		
		ALandscapeProxy_EditorApplySpline_Params params {};
		params.InSplineComponent = InSplineComponent;
		params.StartWidth = StartWidth;
		params.EndWidth = EndWidth;
		params.StartSideFalloff = StartSideFalloff;
		params.EndSideFalloff = EndSideFalloff;
		params.StartRoll = StartRoll;
		params.EndRoll = EndRoll;
		params.NumSubdivisions = NumSubdivisions;
		params.bRaiseHeights = bRaiseHeights;
		params.bLowerHeights = bLowerHeights;
		params.PaintLayer = PaintLayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBED70
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InComponentScreenSizeToUseSubSections                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");
		
		ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params params {};
		params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBECF0
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InUseTessellationComponentScreenSizeFalloff                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");
		
		ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params params {};
		params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBEC70
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InTessellationComponentScreenSize                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");
		
		ALandscapeProxy_ChangeTessellationComponentScreenSize_Params params {};
		params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBEBF0
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InLODDistanceFactor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");
		
		ALandscapeProxy_ChangeLODDistanceFactor_Params params {};
		params.InLODDistanceFactor = InLODDistanceFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBEB70
	 * 		Name   -> Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              InComponentScreenSizeToUseSubSections                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");
		
		ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params params {};
		params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALandscapeProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALandscape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBF190
	 * 		Name   -> Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");
		
		ULandscapeComponent_GetMaterialInstanceDynamic_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALandscapeGizmoActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeGizmoActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALandscapeGizmoActiveActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeGizmoActiveActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeGizmoRenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeGizmoRenderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeGrassType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeGrassType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeHeightfieldCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeHeightfieldCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeInfoMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeInfoMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeLayerInfoObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeLayerInfoObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeMaterialInstanceConstant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeMaterialInstanceConstant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeMeshCollisionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeMeshCollisionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALandscapeMeshProxyActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeMeshProxyActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeMeshProxyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeMeshProxyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EBF220
	 * 		Name   -> Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class USplineMeshComponent*> ULandscapeSplinesComponent::GetSplineMeshComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");
		
		ULandscapeSplinesComponent_GetSplineMeshComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeSplinesComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeSplinesComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeSplineControlPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeSplineControlPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULandscapeSplineSegment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULandscapeSplineSegment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALandscapeStreamingProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALandscapeStreamingProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionLandscapeGrassOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeGrassOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionLandscapeLayerBlend.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerBlend::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionLandscapeLayerCoords.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerCoords::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionLandscapeLayerSample.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerSample::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionLandscapeLayerSwitch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerSwitch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionLandscapeLayerWeight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeLayerWeight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialExpressionLandscapeVisibilityMask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionLandscapeVisibilityMask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}

}


