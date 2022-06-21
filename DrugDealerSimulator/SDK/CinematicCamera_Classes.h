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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CinematicCamera.CameraRig_Crane
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class ACameraRig_Crane : public AActor
	{
	public:
		float                                                      CranePitch;                                              // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneYaw;                                                // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneArmLength;                                          // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountPitch;                                         // 0x0334(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountYaw;                                           // 0x0335(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JA8W[0x2];                                   // 0x0336(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x0338(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneYawControl;                                         // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CranePitchControl;                                       // 0x0348(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneCameraMount;                                        // 0x0350(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CameraRig_Rail
	 * Size -> 0x0020 (FullSize[0x0348] - InheritedSize[0x0328])
	 */
	class ACameraRig_Rail : public AActor
	{
	public:
		float                                                      CurrentPositionOnRail;                                   // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockOrientationToRail;                                  // 0x032C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQ87[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x0330(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USplineComponent*                                    RailSplineComponent;                                     // 0x0338(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     RailCameraMount;                                         // 0x0340(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraActor
	 * Size -> 0x0040 (FullSize[0x0880] - InheritedSize[0x0840])
	 */
	class ACineCameraActor : public ACameraActor
	{
	public:
		struct FCameraLookatTrackingSettings                       LookatTrackingSettings;                                  // 0x0840(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8XW[0x10];                                  // 0x0870(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCineCameraComponent* GetCineCameraComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraComponent
	 * Size -> 0x00C0 (FullSize[0x0850] - InheritedSize[0x0790])
	 */
	class UCineCameraComponent : public UCameraComponent
	{
	public:
		struct FCameraFilmbackSettings                             FilmbackSettings;                                        // 0x0790(0x000C) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FCameraLensSettings                                 LensSettings;                                            // 0x079C(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PHM[0x4];                                   // 0x07B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCameraFocusSettings                                FocusSettings;                                           // 0x07B8(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x07F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentAperture;                                         // 0x07F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFocusDistance;                                    // 0x07F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MU1H[0xC];                                   // 0x07FC(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNamedFilmbackPreset>                        FilmbackPresets;                                         // 0x0808(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FNamedLensPreset>                            LensPresets;                                             // 0x0818(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class FString                                              DefaultFilmbackPresetName;                               // 0x0828(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultLensPresetName;                                   // 0x0838(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFocalLength;                                  // 0x0848(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFStop;                                        // 0x084C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetLensPresetByName(const class FString& InPresetName);
		void SetFilmbackPresetByName(const class FString& InPresetName);
		float GetVerticalFieldOfView();
		class FString GetLensPresetName();
		float GetHorizontalFieldOfView();
		class FString GetFilmbackPresetName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
