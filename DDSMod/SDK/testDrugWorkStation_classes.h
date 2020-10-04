#pragma once

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass testDrugWorkStation.testDrugWorkStation_C
// 0x0007 (0x049C - 0x0495)
class AtestDrugWorkStation_C : public AdrugWorkStation_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	int                                                ActivateTaskID;                                           // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass testDrugWorkStation.testDrugWorkStation_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
