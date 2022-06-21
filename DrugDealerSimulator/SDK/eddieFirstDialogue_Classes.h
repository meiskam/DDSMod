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
	 * BlueprintGeneratedClass eddieFirstDialogue.eddieFirstDialogue_C
	 * Size -> 0x00A8 (FullSize[0x07E8] - InheritedSize[0x0740])
	 */
	class AeddieFirstDialogue_C : public ACharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0740(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                phone;                                                   // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     spawnPoint;                                              // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule;                                                 // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio;                                                   // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       playerComeTrigger;                                       // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      blinkingEyesTL_Amount_895805BE4374DB3D02D8FABD08C2FB14;  // 0x0778(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         blinkingEyesTL__Direction_895805BE4374DB3D02D8FABD08C2FB14; // 0x077C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V41M[0x3];                                   // 0x077D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  blinkingEyesTL;                                          // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mouthAnimTL_U_pose_3D8BE4384516E5C3D72A3A8C92B73554;     // 0x0788(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mouthAnimTL_A_pose_3D8BE4384516E5C3D72A3A8C92B73554;     // 0x078C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         mouthAnimTL__Direction_3D8BE4384516E5C3D72A3A8C92B73554; // 0x0790(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_08SX[0x7];                                   // 0x0791(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  mouthAnimTL;                                             // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       playerCame;                                              // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D1QJ[0x7];                                   // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USoundWave*>                                  inpatientQuotes;                                         // 0x07A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UeddieAnimBP_C*                                      eddieAnimBP;                                             // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isSpeaking;                                              // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       playerIsSiting;                                          // 0x07C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       dialogueEnded;                                           // 0x07C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T2UE[0x5];                                   // 0x07C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AsitingDownPawn_C*                                   sitingPawn;                                              // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AextinguishPoliceCar_C*                              extinguishPolice;                                        // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UeddieFirstDialAnimBP_C*                             eddieFirstAnimBP;                                        // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AeddieBlantBP_C*                                     blantRef;                                                // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void playEddieDialogue(class USoundWave* Sound, const class FText& DialogueText, float* Delay);
		void UserConstructionScript();
		void mouthAnimTL__FinishedFunc();
		void mouthAnimTL__UpdateFunc();
		void blinkingEyesTL__FinishedFunc();
		void blinkingEyesTL__UpdateFunc();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void playInpatientQuote();
		void PlayerSatDown();
		void animateMouth();
		void stopAnimateMouth();
		void eyeBlink();
		void breakDialogue();
		void playerTookJoint();
		void playerRefusedJoint();
		void continuePartyQuestion();
		void whyLaptop();
		void deaddropQuestion();
		void endDialogue();
		void ExecuteUbergraph_eddieFirstDialogue(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
