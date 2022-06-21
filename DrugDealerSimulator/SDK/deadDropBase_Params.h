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
	 * Function deadDropBase.deadDropBase_C.checkNoDrugs
	 */
	struct AdeadDropBase_C_checkNoDrugs_Params
	{
	public:
		bool                                                       DrugsTaken;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function deadDropBase.deadDropBase_C.stealProbability
	 */
	struct AdeadDropBase_C_stealProbability_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function deadDropBase.deadDropBase_C.UserConstructionScript
	 */
	struct AdeadDropBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function deadDropBase.deadDropBase_C.ReceiveBeginPlay
	 */
	struct AdeadDropBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function deadDropBase.deadDropBase_C.ReceiveTick
	 */
	struct AdeadDropBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function deadDropBase.deadDropBase_C.closeEventScript
	 */
	struct AdeadDropBase_C_closeEventScript_Params
	{	};

	/**
	 * Function deadDropBase.deadDropBase_C.LongRadiusChanged
	 */
	struct AdeadDropBase_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function deadDropBase.deadDropBase_C.testItemSteal
	 */
	struct AdeadDropBase_C_testItemSteal_Params
	{	};

	/**
	 * Function deadDropBase.deadDropBase_C.clearContainer
	 */
	struct AdeadDropBase_C_clearContainer_Params
	{	};

	/**
	 * Function deadDropBase.deadDropBase_C.openEventScript
	 */
	struct AdeadDropBase_C_openEventScript_Params
	{	};

	/**
	 * Function deadDropBase.deadDropBase_C.ShortRadiusChanged
	 */
	struct AdeadDropBase_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function deadDropBase.deadDropBase_C.ExecuteUbergraph_deadDropBase
	 */
	struct AdeadDropBase_C_ExecuteUbergraph_deadDropBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
