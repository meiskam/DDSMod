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

// BlueprintGeneratedClass labFluidMixerBase.labFluidMixerBase_C
// 0x0008 (0x0780 - 0x0778)
class AlabFluidMixerBase_C : public AworkStationMixerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0778(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass labFluidMixerBase.labFluidMixerBase_C");
		return ptr;
	}


	void setEndMixForm(TEnumAsByte<EdrugForm>* EndForm, float* Humidity);
	void checkMixContents(bool* LiquidFound);
	void UserConstructionScript();
	void addSubstance();
	void applyMix();
	void workFinished();
	void tryAddSubstance();
	void ExecuteUbergraph_labFluidMixerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
