#pragma once

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eddieFirstDialogue.eddieFirstDialogue_C
// 0x00A8 (0x07E8 - 0x0740)
class AeddieFirstDialogue_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        phone;                                                    // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             spawnPoint;                                               // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               playerComeTrigger;                                        // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              blinkingEyesTL_Amount_895805BE4374DB3D02D8FABD08C2FB14;   // 0x0778(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    blinkingEyesTL__Direction_895805BE4374DB3D02D8FABD08C2FB14;// 0x077C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          blinkingEyesTL;                                           // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              mouthAnimTL_U_pose_3D8BE4384516E5C3D72A3A8C92B73554;      // 0x0788(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              mouthAnimTL_A_pose_3D8BE4384516E5C3D72A3A8C92B73554;      // 0x078C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    mouthAnimTL__Direction_3D8BE4384516E5C3D72A3A8C92B73554;  // 0x0790(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0791(0x0007) MISSED OFFSET
	class UTimelineComponent*                          mouthAnimTL;                                              // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               playerCame;                                               // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	TArray<class USoundWave*>                          inpatientQuotes;                                          // 0x07A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UeddieAnimBP_C*                              eddieAnimBP;                                              // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isSpeaking;                                               // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               playerIsSiting;                                           // 0x07C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               dialogueEnded;                                            // 0x07C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x07C3(0x0005) MISSED OFFSET
	class AsitingDownPawn_C*                           sitingPawn;                                               // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AextinguishPoliceCar_C*                      extinguishPolice;                                         // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UeddieFirstDialAnimBP_C*                     eddieFirstAnimBP;                                         // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AeddieBlantBP_C*                             blantRef;                                                 // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eddieFirstDialogue.eddieFirstDialogue_C");
		return ptr;
	}


	void playEddieDialogue(class USoundWave* Sound, const struct FText& DialogueText, float* Delay);
	void UserConstructionScript();
	void mouthAnimTL__FinishedFunc();
	void mouthAnimTL__UpdateFunc();
	void blinkingEyesTL__FinishedFunc();
	void blinkingEyesTL__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
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
	void ExecuteUbergraph_eddieFirstDialogue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
