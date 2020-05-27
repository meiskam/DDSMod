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

// BlueprintGeneratedClass eddieWalkHome.eddieWalkHome_C
// 0x0031 (0x0771 - 0x0740)
class AeddieWalkHome_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_U_pose_B34BF62C434297982C7FE3AD341DA30F;       // 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_A_pose_B34BF62C434297982C7FE3AD341DA30F;       // 0x075C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_B34BF62C434297982C7FE3AD341DA30F;   // 0x0760(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0761(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               isTalking;                                                // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eddieWalkHome.eddieWalkHome_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void walkHome();
	void animateMouth();
	void stopAnimateMouth();
	void RetryWalk();
	void ExecuteUbergraph_eddieWalkHome(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
