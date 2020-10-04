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

// BlueprintGeneratedClass wallSwitchLightBP.wallSwitchLightBP_C
// 0x006F (0x0460 - 0x03F1)
class AwallSwitchLightBP_C : public AinteractiveBaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            pawnOverlap;                                              // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AappartmentLight_C*                          lightRef;                                                 // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Double;                                                   // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	struct FText                                       textActionTurnOn;                                         // 0x0420(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       textActionTurnOff;                                        // 0x0438(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              widgetDrawDistance;                                       // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	class UWidgetComponent*                            Widget;                                                   // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wallSwitchLightBP.wallSwitchLightBP_C");
		return ptr;
	}


	void clearWidgetComponents();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void activateSwitch();
	void resetMe();
	void drawCheck();
	void BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_wallSwitchLightBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
