#pragma once

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass workStationMixerBase.workStationMixerBase_C
// 0x0058 (0x0778 - 0x0720)
class AworkStationMixerBase_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FdrugData>                           drugsAdded;                                               // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      drugsAddedAmount;                                         // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       endMixName;                                               // 0x0748(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       endMixDescription;                                        // 0x0760(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass workStationMixerBase.workStationMixerBase_C");
		return ptr;
	}


	void calcByStrengthening(float Value, float differenceMultiplier, float Strengthening, float* Result);
	void calcPrecision(float paramIn, float* paramOut);
	void processMix(struct FdrugData* mixProduct, float* mixProductAmount);
	void showAddPopup(class AinteractiveBaseObject_C* substanceRef);
	void UserConstructionScript();
	void applyMix();
	void workFinished();
	void addSubstance();
	void displayMixDetails();
	void ReceiveBeginPlay();
	void displayApllyMix();
	void tryAddSubstance();
	void ExecuteUbergraph_workStationMixerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
