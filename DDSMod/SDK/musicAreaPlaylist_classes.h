#pragma once

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass musicAreaPlaylist.musicAreaPlaylist_C
// 0x0068 (0x0390 - 0x0328)
class AmusicAreaPlaylist_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              musicVolumeFade_volume_658713694E4D204F544A279381339B8B;  // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    musicVolumeFade__Direction_658713694E4D204F544A279381339B8B;// 0x0344(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	class UTimelineComponent*                          musicVolumeFade;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AAmbientSound*>                       ambientSoundPoints;                                       // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class USoundBase*>                          Playlist;                                                 // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                curPlayerID;                                              // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               musicIsPlaying;                                           // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	float                                              minMusicVolume;                                           // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxMusicVolume;                                           // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              randVolume;                                               // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               first;                                                    // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               twoTowers;                                                // 0x0385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               fadeActive;                                               // 0x0386(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0387(0x0001) MISSED OFFSET
	float                                              minMusicVolNight;                                         // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxMusicVolNight;                                         // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass musicAreaPlaylist.musicAreaPlaylist_C");
		return ptr;
	}


	void getMusicVolume(float* Volume);
	void areaMusicEnabled(bool* Enabled);
	void UserConstructionScript();
	void musicVolumeFade__FinishedFunc();
	void musicVolumeFade__UpdateFunc();
	void ReceiveBeginPlay();
	void ActivateMusicInArea();
	void endMusic();
	void firstAreaInitiate();
	void bypassPlayMusic();
	void ExecuteUbergraph_musicAreaPlaylist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
