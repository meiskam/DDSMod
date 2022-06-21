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
	 * BlueprintGeneratedClass SewageExitPeekPawn.SewageExitPeekPawn_C
	 * Size -> 0x0061 (FullSize[0x03E9] - InheritedSize[0x0388])
	 */
	class ASewageExitPeekPawn_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                MSH_Cover_11;                                            // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Rotator;                                                 // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                tunnelExitTopWell;                                       // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AsewageExit_C*                                       ExitLadderRef;                                           // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ready;                                                   // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NOMF[0x3];                                   // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      tempRot;                                                 // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USewagePeekHUD_C*                                    SewageHUD;                                               // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpaceHeld;                                               // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FSI4[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExitTime;                                                // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BackBlocker;                                             // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void InpActEvt_Escape_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_F10_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_SpaceBar_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_SpaceBar_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveTick(float DeltaSeconds);
		void InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1(float AxisValue);
		void Setup(class AsewageExit_C* ExitLadderRef, class AplayerCharacterBP_C* PlayerRef);
		void ReceivePossessed(class AController* NewController);
		void ReceiveUnpossessed(class AController* OldController);
		void ExecuteUbergraph_SewageExitPeekPawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
