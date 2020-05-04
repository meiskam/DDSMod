#pragma once

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass policeWalkieTalkie.policeWalkieTalkie_C
// 0x0038 (0x0360 - 0x0328)
class ApoliceWalkieTalkie_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        WalkieTalkie;                                             // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APolicemanBaseClass_C*                       policemanRef;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass policeWalkieTalkie.policeWalkieTalkie_C");
		return ptr;
	}


	void checkDisplayWidget(class AplayerCharacterBP_C* playerRef, bool* Display);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void playRadio(class USoundBase* NewParam);
	void checkReasonToLive();
	void checkPlayerMoving();
	void ExecuteUbergraph_policeWalkieTalkie(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
