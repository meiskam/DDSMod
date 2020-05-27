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

// BlueprintGeneratedClass laBallena.laBallena_C
// 0x0090 (0x07D0 - 0x0740)
class AlaBallena_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_Amount_7B4DEB9C4D36404A4744EAB763D498AF;       // 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_7B4DEB9C4D36404A4744EAB763D498AF;   // 0x075C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_U_pose_E76EA01F48533E595B08F999C656F380;       // 0x0768(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_A_pose_E76EA01F48533E595B08F999C656F380;       // 0x076C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_E76EA01F48533E595B08F999C656F380;   // 0x0770(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UnarratorSubtitlesWidget_C*                  curDialogueWidget;                                        // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               isSpeaking;                                               // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	class UlaBallenaAnimBP_C*                          AnimBP;                                                   // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AsitingDownPawn_C*                           sitingPawn;                                               // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  tempTransform;                                            // 0x07A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass laBallena.laBallena_C");
		return ptr;
	}


	void playDialogueLine(class USoundWave* InSound, const struct FText& Text, float* Delay);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void playerSatDown();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float* DeltaSeconds);
	void animateMouth();
	void stopAnimateMouth();
	void eyeBlink();
	void sureAm();
	void whatYouWant();
	void howMuch();
	void imIn();
	void listening();
	void notSure();
	void resetBallena();
	void ExecuteUbergraph_laBallena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
