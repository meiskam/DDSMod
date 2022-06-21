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
	 * BlueprintGeneratedClass doorBreacher.doorBreacher_C
	 * Size -> 0x0069 (FullSize[0x03F1] - InheritedSize[0x0388])
	 */
	class AdoorBreacher_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCameraComponent*                                    Camera;                                                  // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      breachAnimation_camYRot_73C8C8154EC4B1294778CEA38CF9408B; // 0x03A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      breachAnimation_camXPos_73C8C8154EC4B1294778CEA38CF9408B; // 0x03A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      breachAnimation_camZRot_73C8C8154EC4B1294778CEA38CF9408B; // 0x03A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         breachAnimation__Direction_73C8C8154EC4B1294778CEA38CF9408B; // 0x03AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_702W[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  breachAnimation;                                         // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       breaching;                                               // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TO2H[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UdoorBreachWidget_C*                                 breachWidget;                                            // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AplayerCharacterBP_C*                                previousPawn;                                            // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AdoorBase_C*                                         doorRef;                                                 // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       blockBreaching;                                          // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W70O[0x3];                                   // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      breachPoints;                                            // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  circleProgressImages;                                    // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       ready;                                                   // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void breachAnimation__FinishedFunc();
		void breachAnimation__UpdateFunc();
		void breachAnimation__hitMoment__EventFunc();
		void InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_F10_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_JumpObstacle_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceivePossessed(class AController* NewController);
		void ReceiveUnpossessed(class AController* OldController);
		void breachHit();
		void endBreach();
		void rushBreach();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_doorBreacher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
