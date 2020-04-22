#pragma once

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass twoTowersRubberDollBP.twoTowersRubberDollBP_C
// 0x002C (0x0354 - 0x0328)
class AtwoTowersRubberDollBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        twoTowersRubberDoll;                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              rotDoll_NewTrack_0_09D6CBDA4EE8B71ECE5F5D824E8C38E4;      // 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    rotDoll__Direction_09D6CBDA4EE8B71ECE5F5D824E8C38E4;      // 0x0344(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	class UTimelineComponent*                          rotDoll;                                                  // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              rotAmount;                                                // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass twoTowersRubberDollBP.twoTowersRubberDollBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void rotDoll__FinishedFunc();
	void rotDoll__UpdateFunc();
	void ReceiveBeginPlay();
	void checkPlayerDistance();
	void playRotation();
	void stopRotation();
	void ExecuteUbergraph_twoTowersRubberDollBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
