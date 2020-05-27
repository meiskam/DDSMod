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

// BlueprintGeneratedClass doorBase.doorBase_C
// 0x00CF (0x04C0 - 0x03F1)
class AdoorBase_C : public AinteractiveBaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        doorFrameMesh;                                            // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             doorAudio;                                                // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               overlapBlocker;                                           // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               doorOverlap;                                              // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               doorArea;                                                 // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        doorWingModel;                                            // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_pos_05B10EA04CC23697A48C67BA150080AD;          // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_angle_05B10EA04CC23697A48C67BA150080AD;        // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_05B10EA04CC23697A48C67BA150080AD;   // 0x0440(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              doorOpening_pos_33D0B1B746672166CA9386900762D045;         // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              doorOpening_angle_33D0B1B746672166CA9386900762D045;       // 0x0454(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    doorOpening__Direction_33D0B1B746672166CA9386900762D045;  // 0x0458(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	class UTimelineComponent*                          doorOpening;                                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     doorWingPosition;                                         // 0x0468(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               autoClose;                                                // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	float                                              autoCloseDelay;                                           // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               doorIsOpen;                                               // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               doorMoving;                                               // 0x047D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x047E(0x0002) MISSED OFFSET
	float                                              doorDirectionMultiplier;                                  // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               doorClosing;                                              // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	struct FVector                                     doorOverlapSize;                                          // 0x0488(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               doorLocked;                                               // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	int                                                keyId;                                                    // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canBreach;                                                // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canLockpick;                                              // 0x049D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x049E(0x0002) MISSED OFFSET
	int                                                lockpickDifficulty;                                       // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              doorBreachHealth;                                         // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              doorBreachHealthCurrent;                                  // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class UStaticMesh*                                 frameMesh;                                                // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   frameMaterial;                                            // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass doorBase.doorBase_C");
		return ptr;
	}


	void playDoorSound(class USoundCue* Sound);
	void getDoorOptions(TArray<struct FText>* ActionNames, TArray<struct FString>* Actions);
	void UserConstructionScript();
	void doorOpening__FinishedFunc();
	void doorOpening__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void openDoor();
	void closeDoor();
	void toggleDoor();
	void closeDoorAuto();
	void BndEvt__doorOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void executeDoorOption(const struct FString& doorActionName);
	void doorBreachEnd();
	void breachDoor();
	void eventDoorActivated();
	void ExecuteUbergraph_doorBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
