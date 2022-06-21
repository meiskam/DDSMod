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
	 * Enum CinematicCamera.ECameraFocusMethod
	 */
	enum class ECameraFocusMethod : uint8_t
	{
		None     = 0,
		Manual   = 1,
		Tracking = 2,
		MAX      = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CinematicCamera.CameraLookatTrackingSettings
	 * Size -> 0x0030
	 */
	struct FCameraLookatTrackingSettings
	{
	public:
		unsigned char                                              bEnableLookAtTracking : 1;                               // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDebugLookAtTrackingPosition : 1;                    // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6JI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookAtTrackingInterpSpeed;                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEH0[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ActorToTrack;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RelativeOffset;                                          // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowRoll : 1;                                          // 0x002C(0x0001) BIT_FIELD Edit, BlueprintVisible, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUY5[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CinematicCamera.CameraFilmbackSettings
	 * Size -> 0x000C
	 */
	struct FCameraFilmbackSettings
	{
	public:
		float                                                      SensorWidth;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SensorHeight;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SensorAspectRatio;                                       // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CinematicCamera.CameraLensSettings
	 * Size -> 0x0018
	 */
	struct FCameraLensSettings
	{
	public:
		float                                                      MinFocalLength;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFocalLength;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinFStop;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFStop;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumFocusDistance;                                    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DiaphragmBladeCount;                                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CinematicCamera.CameraTrackingFocusSettings
	 * Size -> 0x0018
	 */
	struct FCameraTrackingFocusSettings
	{
	public:
		class AActor*                                              ActorToTrack;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RelativeOffset;                                          // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDebugTrackingFocusPoint : 1;                        // 0x0014(0x0001) BIT_FIELD Edit, BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ3O[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CinematicCamera.CameraFocusSettings
	 * Size -> 0x0038
	 */
	struct FCameraFocusSettings
	{
	public:
		ECameraFocusMethod                                         FocusMethod;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNTZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ManualFocusDistance;                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCameraTrackingFocusSettings                        TrackingFocusSettings;                                   // 0x0008(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDebugFocusPlane : 1;                                // 0x0020(0x0001) BIT_FIELD Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6LD[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              DebugFocusPlaneColor;                                    // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSmoothFocusChanges : 1;                                 // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F874[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FocusSmoothingInterpSpeed;                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusOffset;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCJT[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CinematicCamera.NamedFilmbackPreset
	 * Size -> 0x0020
	 */
	struct FNamedFilmbackPreset
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCameraFilmbackSettings                             FilmbackSettings;                                        // 0x0010(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFVT[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CinematicCamera.NamedLensPreset
	 * Size -> 0x0028
	 */
	struct FNamedLensPreset
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCameraLensSettings                                 LensSettings;                                            // 0x0010(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
