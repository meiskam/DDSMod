#pragma once

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass appartmentViewerPawn.appartmentViewerPawn_C
// 0x0048 (0x03D0 - 0x0388)
class AappartmentViewerPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpringArmComponent*                         SpringArm;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Rotator;                                                  // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              camSpeed;                                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              camArmLength;                                             // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              camRotOffset;                                             // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<class AstreamMapLoader_C*>                  allStreamActors;                                          // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass appartmentViewerPawn.appartmentViewerPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_NextAppartment_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_PreviousAppartment_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_F10_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1(float AxisValue);
	void SpaceHeldDown();
	void ReceivePossessed(class AController* NewController);
	void ReceiveUnpossessed(class AController* OldController);
	void checkStreamAreas();
	void ExecuteUbergraph_appartmentViewerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
