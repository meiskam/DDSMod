#pragma once

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass doorBreacher.doorBreacher_C
// 0x0069 (0x03F1 - 0x0388)
class AdoorBreacher_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              breachAnimation_camYRot_73C8C8154EC4B1294778CEA38CF9408B; // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              breachAnimation_camXPos_73C8C8154EC4B1294778CEA38CF9408B; // 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              breachAnimation_camZRot_73C8C8154EC4B1294778CEA38CF9408B; // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    breachAnimation__Direction_73C8C8154EC4B1294778CEA38CF9408B;// 0x03AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          breachAnimation;                                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               breaching;                                                // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class UdoorBreachWidget_C*                         breachWidget;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AplayerCharacterBP_C*                        previousPawn;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AdoorBase_C*                                 doorRef;                                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               blockBreaching;                                           // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              breachPoints;                                             // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          circleProgressImages;                                     // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ready;                                                    // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass doorBreacher.doorBreacher_C");
		return ptr;
	}


	void UserConstructionScript();
	void breachAnimation__FinishedFunc();
	void breachAnimation__UpdateFunc();
	void breachAnimation__hitMoment__EventFunc();
	void InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F10_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_JumpObstacle_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceivePossessed(class AController** NewController);
	void ReceiveUnpossessed(class AController** OldController);
	void breachHit();
	void endBreach();
	void rushBreach();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_doorBreacher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
