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

// BlueprintGeneratedClass dealerSaleDialogueInstance.dealerSaleDialogueInstance_C
// 0x0020 (0x03A8 - 0x0388)
class AdealerSaleDialogueInstance_C : public AdialogueInstance_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               clientIsMale;                                             // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	TArray<struct FText>                               randomDialogueLines;                                      // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dealerSaleDialogueInstance.dealerSaleDialogueInstance_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ConfigDialogue(bool male);
	void ExecuteUbergraph_dealerSaleDialogueInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
