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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Landscape.ELandscapeSetupErrors
	 */
	enum class ELandscapeSetupErrors : uint8_t
	{
		LSE_None            = 0,
		LSE_NoLandscapeInfo = 1,
		LSE_CollsionXY      = 2,
		LSE_NoLayerInfo     = 3,
		LSE_MAX             = 4
	};

	/**
	 * Enum Landscape.ELandscapeGizmoType
	 */
	enum class ELandscapeGizmoType : uint8_t
	{
		LGT_None   = 0,
		LGT_Height = 1,
		LGT_Weight = 2,
		LGT_MAX    = 3
	};

	/**
	 * Enum Landscape.EGrassScaling
	 */
	enum class EGrassScaling : uint8_t
	{
		Uniform = 0,
		Free    = 1,
		LockXY  = 2,
		MAX     = 3
	};

	/**
	 * Enum Landscape.ELandscapeLODFalloff
	 */
	enum class ELandscapeLODFalloff : uint8_t
	{
		Linear     = 0,
		SquareRoot = 1,
		MAX        = 2
	};

	/**
	 * Enum Landscape.ELandscapeLayerDisplayMode
	 */
	enum class ELandscapeLayerDisplayMode : uint8_t
	{
		Default      = 0,
		Alphabetical = 1,
		UserSpecific = 2,
		MAX          = 3
	};

	/**
	 * Enum Landscape.ELandscapeLayerPaintingRestriction
	 */
	enum class ELandscapeLayerPaintingRestriction : uint8_t
	{
		None                  = 0,
		UseMaxLayers          = 1,
		ExistingOnly          = 2,
		UseComponentWhitelist = 3,
		MAX                   = 4
	};

	/**
	 * Enum Landscape.ELandscapeImportAlphamapType
	 */
	enum class ELandscapeImportAlphamapType : uint8_t
	{
		Additive = 0,
		Layered  = 1,
		MAX      = 2
	};

	/**
	 * Enum Landscape.LandscapeSplineMeshOrientation
	 */
	enum class ELandscapeSplineMeshOrientation : uint8_t
	{
		LSMO_XUp = 0,
		LSMO_YUp = 1,
		LSMO_MAX = 2
	};

	/**
	 * Enum Landscape.ELandscapeLayerBlendType
	 */
	enum class ELandscapeLayerBlendType : uint8_t
	{
		LB_WeightBlend = 0,
		LB_AlphaBlend  = 1,
		LB_HeightBlend = 2,
		LB_MAX         = 3
	};

	/**
	 * Enum Landscape.ELandscapeCustomizedCoordType
	 */
	enum class ELandscapeCustomizedCoordType : uint8_t
	{
		LCCT_None        = 0,
		LCCT_CustomUV0   = 1,
		LCCT_CustomUV1   = 2,
		LCCT_CustomUV2   = 3,
		LCCT_WeightMapUV = 4,
		LCCT_MAX         = 5
	};

	/**
	 * Enum Landscape.ETerrainCoordMappingType
	 */
	enum class ETerrainCoordMappingType : uint8_t
	{
		TCMT_Auto = 0,
		TCMT_XY   = 1,
		TCMT_XZ   = 2,
		TCMT_YZ   = 3,
		TCMT_MAX  = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Landscape.LandscapeProxyMaterialOverride
	 * Size -> 0x0010
	 */
	struct FLandscapeProxyMaterialOverride
	{
	public:
		struct FPerPlatformInt                                     LODIndex;                                                // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SW9P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeComponentMaterialOverride
	 * Size -> 0x0010
	 */
	struct FLandscapeComponentMaterialOverride
	{
	public:
		struct FPerPlatformInt                                     LODIndex;                                                // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHDY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.WeightmapLayerAllocationInfo
	 * Size -> 0x0010
	 */
	struct FWeightmapLayerAllocationInfo
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfo;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WeightmapTextureIndex;                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WeightmapTextureChannel;                                 // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4D66[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.GrassVariety
	 * Size -> 0x0048
	 */
	struct FGrassVariety
	{
	public:
		class UStaticMesh*                                         GrassMesh;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformFloat                                   GrassDensity;                                            // 0x0008(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseGrid;                                                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YE9V[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlacementJitter;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     StartCullDistance;                                       // 0x0014(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     EndCullDistance;                                         // 0x0018(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MinLOD;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGrassScaling                                              Scaling;                                                 // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NF82[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatInterval                                      ScaleX;                                                  // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleY;                                                  // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleZ;                                                  // 0x0034(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomRotation;                                          // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlignToSurface;                                          // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLandscapeLightmap;                                   // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLightingChannels                                   LightingChannels;                                        // 0x003F(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bReceivesDecals;                                         // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastDynamicShadow;                                      // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepInstanceBufferCPUCopy;                              // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXE6[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineConnection
	 * Size -> 0x0010
	 */
	struct FLandscapeSplineConnection
	{
	public:
		class ULandscapeSplineSegment*                             Segment;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              End : 1;                                                 // 0x0008(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AA4N[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineInterpPoint
	 * Size -> 0x0040
	 */
	struct FLandscapeSplineInterpPoint
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Left;                                                    // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Right;                                                   // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FalloffLeft;                                             // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FalloffRight;                                            // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartEndFalloff;                                         // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineSegmentConnection
	 * Size -> 0x0018
	 */
	struct FLandscapeSplineSegmentConnection
	{
	public:
		class ULandscapeSplineControlPoint*                        ControlPoint;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TangentLen;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7ZJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.GrassInput
	 * Size -> 0x0028
	 */
	struct FGrassInput
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULandscapeGrassType*                                 GrassType;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExpressionInput                                    Input;                                                   // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42A8[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LayerBlendInput
	 * Size -> 0x0058
	 */
	struct FLayerBlendInput
	{
	public:
		class FName                                                LayerName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeLayerBlendType                                   BlendType;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IJ9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    LayerInput;                                              // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RW87[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpressionInput                                    HeightInput;                                             // 0x0028(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWRF[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PreviewWeight;                                           // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ConstLayerInput;                                         // 0x0044(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConstHeightInput;                                        // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSE3[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeEditToolRenderData
	 * Size -> 0x0028
	 */
	struct FLandscapeEditToolRenderData
	{
	public:
		class UMaterialInterface*                                  ToolMaterial;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  GizmoMaterial;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SelectedType;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugChannelR;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugChannelG;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebugChannelB;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          DataTexture;                                             // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.GizmoSelectData
	 * Size -> 0x0050
	 */
	struct FGizmoSelectData
	{
	public:
		unsigned char                                              UnknownData_R3ID[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeInfoLayerSettings
	 * Size -> 0x0010
	 */
	struct FLandscapeInfoLayerSettings
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfoObj;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LayerName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeImportLayerInfo
	 * Size -> 0x0001
	 */
	struct FLandscapeImportLayerInfo
	{
	public:
		unsigned char                                              UnknownData_HCUW[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeLayerStruct
	 * Size -> 0x0008
	 */
	struct FLandscapeLayerStruct
	{
	public:
		class ULandscapeLayerInfoObject*                           LayerInfoObj;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.LandscapeEditorLayerSettings
	 * Size -> 0x0001
	 */
	struct FLandscapeEditorLayerSettings
	{
	public:
		unsigned char                                              UnknownData_B1BK[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeWeightmapUsage
	 * Size -> 0x0020
	 */
	struct FLandscapeWeightmapUsage
	{
	public:
		class ULandscapeComponent*                                 ChannelUsage[0x4];                                       // 0x0000(0x0020) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Landscape.ForeignWorldSplineData
	 * Size -> 0x0001
	 */
	struct FForeignWorldSplineData
	{
	public:
		unsigned char                                              UnknownData_7Y1N[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.ForeignSplineSegmentData
	 * Size -> 0x0001
	 */
	struct FForeignSplineSegmentData
	{
	public:
		unsigned char                                              UnknownData_TVN7[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.ForeignControlPointData
	 * Size -> 0x0001
	 */
	struct FForeignControlPointData
	{
	public:
		unsigned char                                              UnknownData_AS94[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Landscape.LandscapeSplineMeshEntry
	 * Size -> 0x0038
	 */
	struct FLandscapeSplineMeshEntry
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          MaterialOverrides;                                       // 0x0008(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              bCenterH : 1;                                            // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHQG[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CenterAdjust;                                            // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bScaleToWidth : 1;                                       // 0x0024(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DS03[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELandscapeSplineMeshOrientation                            Orientation;                                             // 0x0034(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESplineMeshAxis                                            ForwardAxis;                                             // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESplineMeshAxis                                            UpAxis;                                                  // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FILC[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
