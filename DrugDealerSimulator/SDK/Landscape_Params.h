#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	 */
	struct ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	 */
	struct ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	 */
	struct ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	 */
	struct ALandscapeProxy_EditorSetLandscapeMaterial_Params
	{
	public:
		class UMaterialInterface*                                  NewLandscapeMaterial;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.EditorApplySpline
	 */
	struct ALandscapeProxy_EditorApplySpline_Params
	{
	public:
		class USplineComponent*                                    InSplineComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartWidth;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndWidth;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartSideFalloff;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndSideFalloff;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartRoll;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndRoll;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumSubdivisions;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRaiseHeights;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLowerHeights;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULandscapeLayerInfoObject*                           PaintLayer;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	 */
	struct ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params
	{
	public:
		bool                                                       InComponentScreenSizeToUseSubSections;                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	 */
	struct ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params
	{
	public:
		float                                                      InUseTessellationComponentScreenSizeFalloff;             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	 */
	struct ALandscapeProxy_ChangeTessellationComponentScreenSize_Params
	{
	public:
		float                                                      InTessellationComponentScreenSize;                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	 */
	struct ALandscapeProxy_ChangeLODDistanceFactor_Params
	{
	public:
		float                                                      InLODDistanceFactor;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	 */
	struct ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
	{
	public:
		float                                                      InComponentScreenSizeToUseSubSections;                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	 */
	struct ULandscapeComponent_GetMaterialInstanceDynamic_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	 */
	struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
	{
	public:
		TArray<class USplineMeshComponent*>                        ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
