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

// BlueprintGeneratedClass pillMakerBase.pillMakerBase_C
// 0x0008 (0x0728 - 0x0720)
class ApillMakerBase_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass pillMakerBase.pillMakerBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void addSubstance();
	void tryAddSubstance();
	void makePills();
	void workFinished();
	void ExecuteUbergraph_pillMakerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
