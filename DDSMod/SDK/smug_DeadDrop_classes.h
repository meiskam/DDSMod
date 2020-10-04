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

// BlueprintGeneratedClass smug_DeadDrop.smug_DeadDrop_C
// 0x0035 (0x03AD - 0x0378)
class Asmug_DeadDrop_C : public AsmuggleLocation_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       DeadDropName;                                             // 0x0388(0x0018) (Edit, BlueprintVisible)
	class AdeadDropBase_C*                             dropContainer;                                            // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                dropContainerID;                                          // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               secondSide;                                               // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass smug_DeadDrop.smug_DeadDrop_C");
		return ptr;
	}


	void findDeadDropRef();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_smug_DeadDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
