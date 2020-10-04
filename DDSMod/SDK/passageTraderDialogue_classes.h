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

// BlueprintGeneratedClass passageTraderDialogue.passageTraderDialogue_C
// 0x000D (0x0395 - 0x0388)
class ApassageTraderDialogue_C : public AdialogueInstance_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                curPrice;                                                 // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               respawned;                                                // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass passageTraderDialogue.passageTraderDialogue_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void openHatch();
	void checkPlayerCash();
	void ExecuteUbergraph_passageTraderDialogue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
