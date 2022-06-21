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
	 * Function enviroLightBase.enviroLightBase_C.checkDayTime
	 */
	struct AenviroLightBase_C_checkDayTime_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.UserConstructionScript
	 */
	struct AenviroLightBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.LongRadiusChanged
	 */
	struct AenviroLightBase_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.ReceiveBeginPlay
	 */
	struct AenviroLightBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.turnLightOn
	 */
	struct AenviroLightBase_C_turnLightOn_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.turnLightOff
	 */
	struct AenviroLightBase_C_turnLightOff_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.farPlayerCheck
	 */
	struct AenviroLightBase_C_farPlayerCheck_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.closeDistanceCheck
	 */
	struct AenviroLightBase_C_closeDistanceCheck_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.updateLightAffectPlayer
	 */
	struct AenviroLightBase_C_updateLightAffectPlayer_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.openOutLightRange
	 */
	struct AenviroLightBase_C_openOutLightRange_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.retryGather
	 */
	struct AenviroLightBase_C_retryGather_Params
	{	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.ShortRadiusChanged
	 */
	struct AenviroLightBase_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.ToggleShadows
	 */
	struct AenviroLightBase_C_ToggleShadows_Params
	{
	public:
		bool                                                       on;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function enviroLightBase.enviroLightBase_C.ExecuteUbergraph_enviroLightBase
	 */
	struct AenviroLightBase_C_ExecuteUbergraph_enviroLightBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
