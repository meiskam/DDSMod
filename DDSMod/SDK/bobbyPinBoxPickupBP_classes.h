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

// BlueprintGeneratedClass bobbyPinBoxPickupBP.bobbyPinBoxPickupBP_C
// 0x000B (0x0528 - 0x051D)
class AbobbyPinBoxPickupBP_C : public ApickupItemBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bobbyPinBoxPickupBP.bobbyPinBoxPickupBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_bobbyPinBoxPickupBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
