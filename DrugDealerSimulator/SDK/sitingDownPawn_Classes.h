#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass sitingDownPawn.sitingDownPawn_C
	 * Size -> 0x0059 (FullSize[0x03E1] - InheritedSize[0x0388])
	 */
	class AsitingDownPawn_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCameraComponent*                                    Camera;                                                  // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsActive;                                                // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5K8M[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AsitDownPlace_C*                                     sitDownPlaceRef;                                         // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       canStandUp;                                              // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VVPI[0x3];                                   // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    overrideHitAmount;                                       // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AbaseNPC_C*                                          talkerRef;                                               // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       choiceIsUp;                                              // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A72E[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UcutsceneDialogueWidget_C*                           curChoiceWidget;                                         // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      tempYawMin;                                              // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      tempPitchMin;                                            // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      tempYawMax;                                              // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      tempPitchMax;                                            // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceFinishPossible;                                     // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
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
		void ReceivePossessed(class AController* NewController);
		void forceStandUp();
		void CreateChoiceOption(const class FText& OptionANam, const class FText& OptionBNam, const class FString& FunctionOnA, const class FString& FunctionOnB);
		void forceChoiceA();
		void ForceChoiceB();
		void ExecuteUbergraph_sitingDownPawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
