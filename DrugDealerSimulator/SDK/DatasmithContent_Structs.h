﻿#pragma once

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
	 * Enum DatasmithContent.EDatasmithAreaLightActorShape
	 */
	enum class EDatasmithAreaLightActorShape : uint8_t
	{
		Rectangle = 0,
		Disc      = 1,
		Sphere    = 2,
		Cylinder  = 3,
		MAX       = 4
	};

	/**
	 * Enum DatasmithContent.EVREDDataTableType
	 */
	enum class EVREDDataTableType : uint8_t
	{
		NotDatatable = 0,
		Variants     = 1,
		AnimClips    = 2,
		AnimNodes    = 3,
		MAX          = 4
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportHierarchy
	 */
	enum class EDatasmithImportHierarchy : uint8_t
	{
		UseMultipleActors = 0,
		UseSingleActor    = 1,
		UseOneBlueprint   = 2,
		MAX               = 3
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportScene
	 */
	enum class EDatasmithImportScene : uint8_t
	{
		NewLevel     = 0,
		CurrentLevel = 1,
		AssetsOnly   = 2,
		MAX          = 3
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportLightmapMax
	 */
	enum class EDatasmithImportLightmapMax : uint8_t
	{
		LIGHTMAP     = 0,
		LIGHTMAP01   = 1,
		LIGHTMAP02   = 2,
		LIGHTMAP03   = 3,
		LIGHTMAP04   = 4,
		LIGHTMAP05   = 5,
		LIGHTMAP06   = 6,
		LIGHTMAP_MAX = 7
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportLightmapMin
	 */
	enum class EDatasmithImportLightmapMin : uint8_t
	{
		LIGHTMAP     = 0,
		LIGHTMAP01   = 1,
		LIGHTMAP02   = 2,
		LIGHTMAP03   = 3,
		LIGHTMAP04   = 4,
		LIGHTMAP05   = 5,
		LIGHTMAP_MAX = 6
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportMaterialQuality
	 */
	enum class EDatasmithImportMaterialQuality : uint8_t
	{
		UseNoFresnelCurves         = 0,
		UseSimplifierFresnelCurves = 1,
		UseRealFresnelCurves       = 2,
		MAX                        = 3
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportActorPolicy
	 */
	enum class EDatasmithImportActorPolicy : uint8_t
	{
		Update = 0,
		Full   = 1,
		Ignore = 2,
		MAX    = 3
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
	 */
	enum class EDatasmithImportAssetConflictPolicy : uint8_t
	{
		Replace = 0,
		Update  = 1,
		Use     = 2,
		Ignore  = 3,
		MAX     = 4
	};

	/**
	 * Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
	 */
	enum class EDatasmithImportSearchPackagePolicy : uint8_t
	{
		Current = 0,
		All     = 1,
		MAX     = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
	 * Size -> 0x0008
	 */
	struct FDatasmithCameraFilmbackSettingsTemplate
	{
	public:
		float                                                      SensorWidth;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SensorHeight;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
	 * Size -> 0x0004
	 */
	struct FDatasmithCameraLensSettingsTemplate
	{
	public:
		float                                                      MaxFStop;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
	 * Size -> 0x0008
	 */
	struct FDatasmithCameraFocusSettingsTemplate
	{
	public:
		ECameraFocusMethod                                         FocusMethod;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BTF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ManualFocusDistance;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
	 * Size -> 0x0040
	 */
	struct FDatasmithPostProcessSettingsTemplate
	{
	public:
		unsigned char                                              bOverride_WhiteTemp : 1;                                 // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_ColorSaturation : 1;                           // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_VignetteIntensity : 1;                         // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_FilmWhitePoint : 1;                            // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_AutoExposureMethod : 1;                        // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_CameraISO : 1;                                 // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2H4N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WhiteTemp;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VignetteIntensity;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FilmWhitePoint;                                          // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDBD[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            ColorSaturation;                                         // 0x0020(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAutoExposureMethod                                        AutoExposureMethod;                                      // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V3EV[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraISO;                                               // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDEX[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithAssetImportOptions
	 * Size -> 0x0008
	 */
	struct FDatasmithAssetImportOptions
	{
	public:
		class FName                                                PackagePath;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
	 * Size -> 0x0004
	 */
	struct FDatasmithStaticMeshImportOptions
	{
	public:
		EDatasmithImportLightmapMin                                MinLightmapResolution;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDatasmithImportLightmapMax                                MaxLightmapResolution;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateLightmapUVs;                                    // 0x0002(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveDegenerates;                                      // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithImportBaseOptions
	 * Size -> 0x0018
	 */
	struct FDatasmithImportBaseOptions
	{
	public:
		EDatasmithImportScene                                      SceneHandling;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeGeometry;                                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeMaterial;                                        // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeLight;                                           // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeCamera;                                          // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPBS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDatasmithAssetImportOptions                        AssetOptions;                                            // 0x0008(0x0008) BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FDatasmithStaticMeshImportOptions                   StaticMeshOptions;                                       // 0x0010(0x0004) Edit, BlueprintVisible, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGK3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithTessellationOptions
	 * Size -> 0x000C
	 */
	struct FDatasmithTessellationOptions
	{
	public:
		float                                                      ChordTolerance;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxEdgeLength;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalTolerance;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithReimportOptions
	 * Size -> 0x0002
	 */
	struct FDatasmithReimportOptions
	{
	public:
		bool                                                       bUpdateActors;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRespawnDeletedActors;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
	 * Size -> 0x0004
	 */
	struct FDatasmithMeshSectionInfoTemplate
	{
	public:
		int32_t                                                    MaterialIndex;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
	 * Size -> 0x0050
	 */
	struct FDatasmithMeshSectionInfoMapTemplate
	{
	public:
		TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate>   Map;                                                     // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
	 * Size -> 0x0010
	 */
	struct FDatasmithMeshBuildSettingsTemplate
	{
	public:
		unsigned char                                              bUseMikkTSpace : 1;                                      // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRecomputeNormals : 1;                                   // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRecomputeTangents : 1;                                  // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRemoveDegenerates : 1;                                  // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBuildAdjacencyBuffer : 1;                               // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseHighPrecisionTangentBasis : 1;                       // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseFullPrecisionUVs : 1;                                // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateLightmapUVs : 1;                                // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3M92[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinLightmapResolution;                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SrcLightmapIndex;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DstLightmapIndex;                                        // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
	 * Size -> 0x0010
	 */
	struct FDatasmithStaticMaterialTemplate
	{
	public:
		class FName                                                MaterialSlotName;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MaterialInterface;                                       // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
