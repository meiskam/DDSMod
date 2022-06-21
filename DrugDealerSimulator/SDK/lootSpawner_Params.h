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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function lootSpawner.lootSpawner_C.pickRandomLoot
	 */
	struct AlootSpawner_C_pickRandomLoot_Params
	{
	public:
		class UClass*                                              LootOut;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function lootSpawner.lootSpawner_C.UserConstructionScript
	 */
	struct AlootSpawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function lootSpawner.lootSpawner_C.ReceiveBeginPlay
	 */
	struct AlootSpawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function lootSpawner.lootSpawner_C.ReceiveTick
	 */
	struct AlootSpawner_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function lootSpawner.lootSpawner_C.spawnRandomLoot
	 */
	struct AlootSpawner_C_spawnRandomLoot_Params
	{	};

	/**
	 * Function lootSpawner.lootSpawner_C.testCountdownSpawn
	 */
	struct AlootSpawner_C_testCountdownSpawn_Params
	{	};

	/**
	 * Function lootSpawner.lootSpawner_C.ExecuteUbergraph_lootSpawner
	 */
	struct AlootSpawner_C_ExecuteUbergraph_lootSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
