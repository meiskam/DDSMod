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

// BlueprintGeneratedClass sitingDownPawn.sitingDownPawn_C
// 0x0059 (0x03E1 - 0x0388)
class AsitingDownPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            Camera;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class AsitDownPlace_C*                             sitDownPlaceRef;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               canStandUp;                                               // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                overrideHitAmount;                                        // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AbaseNPC_C*                                  talkerRef;                                                // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               choiceIsUp;                                               // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	class UcutsceneDialogueWidget_C*                   curChoiceWidget;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              tempYawMin;                                               // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tempPitchMin;                                             // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tempYawMax;                                               // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              tempPitchMax;                                             // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceFinishPossible;                                      // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sitingDownPawn.sitingDownPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_F10_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_B_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Action_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_E_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_LookSideways_K2Node_InputAxisEvent_2(float AxisValue);
	void ReceivePossessed(class AController** NewController);
	void forceStandUp();
	void CreateChoiceOption(const struct FText& OptionANam, const struct FText& OptionBNam, const struct FString& FunctionOnA, const struct FString& FunctionOnB);
	void forceChoiceA();
	void ForceChoiceB();
	void ExecuteUbergraph_sitingDownPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
