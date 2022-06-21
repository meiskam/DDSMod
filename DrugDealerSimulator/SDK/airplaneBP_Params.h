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
	 * Function airplaneBP.airplaneBP_C.UserConstructionScript
	 */
	struct AairplaneBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function airplaneBP.airplaneBP_C.ReceiveBeginPlay
	 */
	struct AairplaneBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function airplaneBP.airplaneBP_C.ReceiveTick
	 */
	struct AairplaneBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function airplaneBP.airplaneBP_C.Stop
	 */
	struct AairplaneBP_C_Stop_Params
	{	};

	/**
	 * Function airplaneBP.airplaneBP_C.checkPlaneVisible
	 */
	struct AairplaneBP_C_checkPlaneVisible_Params
	{	};

	/**
	 * Function airplaneBP.airplaneBP_C.ExecuteUbergraph_airplaneBP
	 */
	struct AairplaneBP_C_ExecuteUbergraph_airplaneBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
