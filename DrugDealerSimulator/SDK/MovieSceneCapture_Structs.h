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
	 * Enum MovieSceneCapture.EHDRCaptureGamut
	 */
	enum class EHDRCaptureGamut : uint8_t
	{
		HCGM_Rec709  = 0,
		HCGM_P3DCI   = 1,
		HCGM_Rec2020 = 2,
		HCGM_ACES    = 3,
		HCGM_ACEScg  = 4,
		HCGM_Linear  = 5,
		HCGM_MAX     = 6
	};

	/**
	 * Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
	 */
	enum class EMovieSceneCaptureProtocolState : uint8_t
	{
		Idle        = 0,
		Initialized = 1,
		Capturing   = 2,
		Finalizing  = 3,
		MAX         = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
	 * Size -> 0x0010
	 */
	struct FCompositionGraphCapturePasses
	{
	public:
		TArray<class FString>                                      Value;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieSceneCapture.CaptureResolution
	 * Size -> 0x0008
	 */
	struct FCaptureResolution
	{
	public:
		int32_t                                                    ResX;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResY;                                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
	 * Size -> 0x0050
	 */
	struct FMovieSceneCaptureSettings
	{
	public:
		struct FDirectoryPath                                      OutputDirectory;                                         // 0x0000(0x0010) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		class UClass*                                              GameModeOverride;                                        // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputFormat;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverwriteExisting;                                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRelativeFrameNumbers;                                // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UD6N[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HandleFrames;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ZeroPadFrameNumbers;                                     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6YT[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameRate                                          FrameRate;                                               // 0x0034(0x0008) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCaptureResolution                                  Resolution;                                              // 0x003C(0x0008) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableTextureStreaming;                                 // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCinematicEngineScalability;                             // 0x0045(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCinematicMode;                                          // 0x0046(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMovement;                                          // 0x0047(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTurning;                                           // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPlayer;                                             // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowHUD;                                                // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5S7B[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieSceneCapture.FrameMetrics
	 * Size -> 0x0010
	 */
	struct FFrameMetrics
	{
	public:
		float                                                      TotalElapsedTime;                                        // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameDelta;                                              // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameNumber;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumDroppedFrames;                                        // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieSceneCapture.CapturedPixels
	 * Size -> 0x0010
	 */
	struct FCapturedPixels
	{
	public:
		unsigned char                                              UnknownData_T6D4[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
