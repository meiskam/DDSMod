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

// BlueprintGeneratedClass dealerCashTransactionDialogue.dealerCashTransactionDialogue_C
// 0x0018 (0x03A0 - 0x0388)
class AdealerCashTransactionDialogue_C : public AdialogueInstance_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FText>                               randomLine01Text;                                         // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dealerCashTransactionDialogue.dealerCashTransactionDialogue_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void giveMoney();
	void ExecuteUbergraph_dealerCashTransactionDialogue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
