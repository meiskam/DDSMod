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

// BlueprintGeneratedClass labDryerBase.labDryerBase_C
// 0x0008 (0x0728 - 0x0720)
class AlabDryerBase_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass labDryerBase.labDryerBase_C");
		return ptr;
	}


	void calcProperties(float inParam, float* OutParam);
	void makeFinalDrugForm(TEnumAsByte<EdrugForm> In, TEnumAsByte<EdrugForm>* OutDried);
	void UserConstructionScript();
	void addSubstance();
	void tryAddSubstance();
	void workFinished();
	void startDrying();
	void ExecuteUbergraph_labDryerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
