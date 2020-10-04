#pragma once

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass garageDoorBase.garageDoorBase_C
// 0x0053 (0x0444 - 0x03F1)
class AgarageDoorBase_C : public AinteractiveBaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box1;                                                     // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              openClose_progress_43A1DF6645BA848D731E128533893824;      // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    openClose__Direction_43A1DF6645BA848D731E128533893824;    // 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          openClose;                                                // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               garageLocked;                                             // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               garageOpen;                                               // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0422(0x0002) MISSED OFFSET
	float                                              baseZPos;                                                 // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              endRot;                                                   // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndPos;                                                   // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canLockpick;                                              // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                keyID;                                                    // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     collisionSize;                                            // 0x0438(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass garageDoorBase.garageDoorBase_C");
		return ptr;
	}


	void getGarageOptions(TArray<struct FText>* ReturnNames, TArray<struct FString>* Actions);
	void UserConstructionScript();
	void openClose__FinishedFunc();
	void openClose__UpdateFunc();
	void ReceiveBeginPlay();
	void toggleGarageDoor();
	void executeGarageOption(const struct FString& optionString);
	void ExecuteUbergraph_garageDoorBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
