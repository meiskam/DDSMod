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

// BlueprintGeneratedClass BP_Gas_Tank_Red.BP_Gas_Tank_Red_C
// 0x0008 (0x0330 - 0x0328)
class ABP_Gas_Tank_Red_C : public AActor
{
public:
	class UStaticMeshComponent*                        Gas_Tank_Red;                                             // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gas_Tank_Red.BP_Gas_Tank_Red_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
