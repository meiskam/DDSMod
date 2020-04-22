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

// BlueprintGeneratedClass npcDonaldMcKensey.npcDonaldMcKensey_C
// 0x000C (0x0AB8 - 0x0AAC)
class AnpcDonaldMcKensey_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npcDonaldMcKensey.npcDonaldMcKensey_C");
		return ptr;
	}


	void UserConstructionScript();
	void eventEnterDialogue();
	void ExecuteUbergraph_npcDonaldMcKensey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif