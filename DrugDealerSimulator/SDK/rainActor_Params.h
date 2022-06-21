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
	 * Function rainActor.rainActor_C.UserConstructionScript
	 */
	struct ArainActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function rainActor.rainActor_C.ReceiveBeginPlay
	 */
	struct ArainActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function rainActor.rainActor_C.ReceiveTick
	 */
	struct ArainActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rainActor.rainActor_C.spawnThunder
	 */
	struct ArainActor_C_spawnThunder_Params
	{	};

	/**
	 * Function rainActor.rainActor_C.retrySetup
	 */
	struct ArainActor_C_retrySetup_Params
	{	};

	/**
	 * Function rainActor.rainActor_C.checkWeatherConditions
	 */
	struct ArainActor_C_checkWeatherConditions_Params
	{	};

	/**
	 * Function rainActor.rainActor_C.ExecuteUbergraph_rainActor
	 */
	struct ArainActor_C_ExecuteUbergraph_rainActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
