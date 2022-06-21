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
	 * Function noisyNeighbourBP.noisyNeighbourBP_C.UserConstructionScript
	 */
	struct AnoisyNeighbourBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function noisyNeighbourBP.noisyNeighbourBP_C.ReceiveBeginPlay
	 */
	struct AnoisyNeighbourBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function noisyNeighbourBP.noisyNeighbourBP_C.ReceiveTick
	 */
	struct AnoisyNeighbourBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function noisyNeighbourBP.noisyNeighbourBP_C.reinitialise
	 */
	struct AnoisyNeighbourBP_C_reinitialise_Params
	{	};

	/**
	 * Function noisyNeighbourBP.noisyNeighbourBP_C.checkPlayerAtHome
	 */
	struct AnoisyNeighbourBP_C_checkPlayerAtHome_Params
	{	};

	/**
	 * Function noisyNeighbourBP.noisyNeighbourBP_C.retryPlay
	 */
	struct AnoisyNeighbourBP_C_retryPlay_Params
	{	};

	/**
	 * Function noisyNeighbourBP.noisyNeighbourBP_C.ExecuteUbergraph_noisyNeighbourBP
	 */
	struct AnoisyNeighbourBP_C_ExecuteUbergraph_noisyNeighbourBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
