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
	 * Function spraySpawner.spraySpawner_C.selectSpawnPoint
	 */
	struct AspraySpawner_C_selectSpawnPoint_Params
	{
	public:
		class AspraySpawnPoint_C*                                  Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function spraySpawner.spraySpawner_C.UserConstructionScript
	 */
	struct AspraySpawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function spraySpawner.spraySpawner_C.ReceiveBeginPlay
	 */
	struct AspraySpawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function spraySpawner.spraySpawner_C.ReceiveTick
	 */
	struct AspraySpawner_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function spraySpawner.spraySpawner_C.trySpawnSpray
	 */
	struct AspraySpawner_C_trySpawnSpray_Params
	{	};

	/**
	 * Function spraySpawner.spraySpawner_C.burstInitialSprayPaint
	 */
	struct AspraySpawner_C_burstInitialSprayPaint_Params
	{	};

	/**
	 * Function spraySpawner.spraySpawner_C.ExecuteUbergraph_spraySpawner
	 */
	struct AspraySpawner_C_ExecuteUbergraph_spraySpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
