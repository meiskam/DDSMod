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

// BlueprintGeneratedClass drugSeedPickup.drugSeedPickup_C
// 0x000B (0x0528 - 0x051D)
class AdrugSeedPickup_C : public ApickupItemBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	class UBoxComponent*                               Box;                                                      // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass drugSeedPickup.drugSeedPickup_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
