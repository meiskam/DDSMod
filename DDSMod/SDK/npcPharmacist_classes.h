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

// BlueprintGeneratedClass npcPharmacist.npcPharmacist_C
// 0x000C (0x0AC8 - 0x0ABC)
class AnpcPharmacist_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ABC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npcPharmacist.npcPharmacist_C");
		return ptr;
	}


	void UserConstructionScript();
	void eventEnterDialogue();
	void ExecuteUbergraph_npcPharmacist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
