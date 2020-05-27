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

// BlueprintGeneratedClass drugMillBase.drugMillBase_C
// 0x0008 (0x0728 - 0x0720)
class AdrugMillBase_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass drugMillBase.drugMillBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void addSubstance();
	void millContents();
	void workFinished();
	void tryAddSubstance();
	void ExecuteUbergraph_drugMillBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
