#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass lootSpawner.lootSpawner_C
	 * Size -> 0x0130 (FullSize[0x0458] - InheritedSize[0x0328])
	 */
	class AlootSpawner_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnTimeout;                                            // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      spawnTimeoutMin;                                         // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      spawnTimeoutMax;                                         // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      lootSpawnChance;                                         // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Countdown;                                               // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X4JI[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      spawnableLoot;                                           // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<int32_t>                                            spawnableQuanMin;                                        // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<int32_t>                                            spawnableQuanMax;                                        // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<float>                                              spawnableSpawnWeight;                                    // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    memQuan;                                                 // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GWUG[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FdrugData                                           memDrug;                                                 // 0x03A8(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void pickRandomLoot(class UClass** LootOut, int32_t* Quantity, int32_t* Index);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void spawnRandomLoot();
		void testCountdownSpawn();
		void ExecuteUbergraph_lootSpawner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
