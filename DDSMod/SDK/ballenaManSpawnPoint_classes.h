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

// BlueprintGeneratedClass ballenaManSpawnPoint.ballenaManSpawnPoint_C
// 0x0028 (0x0350 - 0x0328)
class AballenaManSpawnPoint_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             moneySpawn;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ballenaManSpawnPoint.ballenaManSpawnPoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ballenaManSpawnPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif