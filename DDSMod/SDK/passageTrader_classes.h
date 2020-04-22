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

// BlueprintGeneratedClass passageTrader.passageTrader_C
// 0x0010 (0x0ABC - 0x0AAC)
class ApassageTrader_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Price;                                                    // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass passageTrader.passageTrader_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void updatePrice();
	void ExecuteUbergraph_passageTrader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
