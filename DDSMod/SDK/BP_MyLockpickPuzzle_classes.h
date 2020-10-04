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

// BlueprintGeneratedClass BP_MyLockpickPuzzle.BP_MyLockpickPuzzle_C
// 0x0068 (0x0500 - 0x0498)
class ABP_MyLockpickPuzzle_C : public ALockpickPuzzle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             breakLoop;                                                // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        screwDriver;                                              // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bobbyPinRotator;                                          // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        lockRotator;                                              // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        lockMainModel;                                            // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              bobbyPinInit_position_2ED72F4F4BEC4FBA276F308675FFEBB3;   // 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    bobbyPinInit__Direction_2ED72F4F4BEC4FBA276F308675FFEBB3; // 0x04DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          bobbyPinInit;                                             // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UlockpickWidget_C*                           parentWidget;                                             // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ASceneCapture2D*                             screenCapture;                                            // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              bobbyPinMoveRange;                                        // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              bobbyPinLocOffset;                                        // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MyLockpickPuzzle.BP_MyLockpickPuzzle_C");
		return ptr;
	}


	void UserConstructionScript();
	void bobbyPinInit__FinishedFunc();
	void bobbyPinInit__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void UnlockedDone();
	void BrokenEvent();
	void Initiate();
	void EndLockpick();
	void animateBobbyPin();
	void StartTakingDamage();
	void EndTakingDamage();
	void ExecuteUbergraph_BP_MyLockpickPuzzle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
