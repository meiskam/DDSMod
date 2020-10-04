#pragma once

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass mainMenuPawn.mainMenuPawn_C
// 0x006C (0x03F4 - 0x0388)
class AmainMenuPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             muzykaIntro;                                              // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             muzyka;                                                   // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              museicFade_Volume_4FE004F34243DD33E754DA87B9F2928E;       // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    museicFade__Direction_4FE004F34243DD33E754DA87B9F2928E;   // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          museicFade;                                               // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CamZoomLoop_FOV_03686C504DA619056831A7B906A053CD;         // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CamZoomLoop__Direction_03686C504DA619056831A7B906A053CD;  // 0x03C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CamZoomLoop;                                              // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              zoomIn_FOV_4655152047B46DE5E88749B9B3D60DF4;              // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    zoomIn__Direction_4655152047B46DE5E88749B9B3D60DF4;       // 0x03D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          zoomIn;                                                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UmainMenuWidget_C*                           mainMenuUI;                                               // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              camXoffset;                                               // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camYoffset;                                               // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MenuMusicTransitionTime;                                  // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass mainMenuPawn.mainMenuPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void zoomIn__FinishedFunc();
	void zoomIn__UpdateFunc();
	void CamZoomLoop__FinishedFunc();
	void CamZoomLoop__UpdateFunc();
	void museicFade__FinishedFunc();
	void museicFade__UpdateFunc();
	void ReceiveBeginPlay();
	void fadeOutMusic();
	void startMusic();
	void updateCamSlide(float CamX, float CamY);
	void BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent);
	void ExecuteUbergraph_mainMenuPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
