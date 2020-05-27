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

// BlueprintGeneratedClass garage3m01.garage3m01_C
// 0x000C (0x0450 - 0x0444)
class Agarage3m01_C : public AgarageDoorBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class UMaterialInstance*                           garageDoorMaterial;                                       // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass garage3m01.garage3m01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
