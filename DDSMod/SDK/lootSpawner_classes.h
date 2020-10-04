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

// BlueprintGeneratedClass lootSpawner.lootSpawner_C
// 0x0130 (0x0458 - 0x0328)
class AlootSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              spawnTimeout;                                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              spawnTimeoutMin;                                          // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              spawnTimeoutMax;                                          // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lootSpawnChance;                                          // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Countdown;                                                // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	TArray<class UClass*>                              spawnableLoot;                                            // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        spawnableQuanMin;                                         // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        spawnableQuanMax;                                         // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      spawnableSpawnWeight;                                     // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                memQuan;                                                  // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	struct FdrugData                                   memDrug;                                                  // 0x03A8(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lootSpawner.lootSpawner_C");
		return ptr;
	}


	void pickRandomLoot(class UClass** LootOut, int* quantity, int* Index);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void spawnRandomLoot();
	void testCountdownSpawn();
	void ExecuteUbergraph_lootSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
