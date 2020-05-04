#pragma once

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass interactiveWaterSinkBP.interactiveWaterSinkBP_C
// 0x001F (0x0410 - 0x03F1)
class AinteractiveWaterSinkBP_C : public AinteractiveBaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               waterFound;                                               // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               allWaterFull;                                             // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               fillingWater;                                             // 0x0402(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0403(0x0001) MISSED OFFSET
	float                                              waterFillTimer;                                           // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              waterFillTimeFull;                                        // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              waterFillPerSecond;                                       // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass interactiveWaterSinkBP.interactiveWaterSinkBP_C");
		return ptr;
	}


	void selectFillBottle(int* ChosenBottleQuantity);
	void fillOneBottle();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void sinkActionHeld();
	void sinkActionRelease();
	void showWaterFillDialogue();
	void hideWaterFillDialogue();
	void ExecuteUbergraph_interactiveWaterSinkBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
