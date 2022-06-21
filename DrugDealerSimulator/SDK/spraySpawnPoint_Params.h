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
	 * Function spraySpawnPoint.spraySpawnPoint_C.checkObstacles
	 */
	struct AspraySpawnPoint_C_checkObstacles_Params
	{
	public:
		bool                                                       CanSpawn;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function spraySpawnPoint.spraySpawnPoint_C.UserConstructionScript
	 */
	struct AspraySpawnPoint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function spraySpawnPoint.spraySpawnPoint_C.ReceiveBeginPlay
	 */
	struct AspraySpawnPoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function spraySpawnPoint.spraySpawnPoint_C.ReceiveTick
	 */
	struct AspraySpawnPoint_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function spraySpawnPoint.spraySpawnPoint_C.spawnSpray
	 */
	struct AspraySpawnPoint_C_spawnSpray_Params
	{	};

	/**
	 * Function spraySpawnPoint.spraySpawnPoint_C.ExecuteUbergraph_spraySpawnPoint
	 */
	struct AspraySpawnPoint_C_ExecuteUbergraph_spraySpawnPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
