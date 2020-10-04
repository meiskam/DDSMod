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

// BlueprintGeneratedClass BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C
// 0x0011 (0x0529 - 0x0518)
class ABP_WorldTimeAndConditions_C : public AWorldTimeAndConditions
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               worldInitiated;                                           // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ShadowsSettingsChanged();
	void updateShadowStatus();
	void InWorldInitiated();
	void ExecuteUbergraph_BP_WorldTimeAndConditions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
