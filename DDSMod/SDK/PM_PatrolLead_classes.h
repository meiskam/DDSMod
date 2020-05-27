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

// BlueprintGeneratedClass PM_PatrolLead.PM_PatrolLead_C
// 0x0024 (0x088C - 0x0868)
class APM_PatrolLead_C : public APolicemanBaseClass_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0868(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               controlingPlayer;                                         // 0x0870(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0871(0x0007) MISSED OFFSET
	class UpoliceSearchWidget_C*                       controlWidget;                                            // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              controlTime;                                              // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              controlTimer;                                             // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              controlBreakDistance;                                     // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PM_PatrolLead.PM_PatrolLead_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void EngageSuspect();
	void BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ControlEnded();
	void breakControl();
	void overrideStartSearch();
	void ExecuteUbergraph_PM_PatrolLead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
