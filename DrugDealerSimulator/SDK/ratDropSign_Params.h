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
	 * Function ratDropSign.ratDropSign_C.UserConstructionScript
	 */
	struct AratDropSign_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ratDropSign.ratDropSign_C.AnimLoop__FinishedFunc
	 */
	struct AratDropSign_C_AnimLoop__FinishedFunc_Params
	{	};

	/**
	 * Function ratDropSign.ratDropSign_C.AnimLoop__UpdateFunc
	 */
	struct AratDropSign_C_AnimLoop__UpdateFunc_Params
	{	};

	/**
	 * Function ratDropSign.ratDropSign_C.ReceiveBeginPlay
	 */
	struct AratDropSign_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ratDropSign.ratDropSign_C.SetActivationState
	 */
	struct AratDropSign_C_SetActivationState_Params
	{
	public:
		bool                                                       active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Delay;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ratDropSign.ratDropSign_C.startPlayAnim
	 */
	struct AratDropSign_C_startPlayAnim_Params
	{	};

	/**
	 * Function ratDropSign.ratDropSign_C.endPlayAnim
	 */
	struct AratDropSign_C_endPlayAnim_Params
	{	};

	/**
	 * Function ratDropSign.ratDropSign_C.ExecuteUbergraph_ratDropSign
	 */
	struct AratDropSign_C_ExecuteUbergraph_ratDropSign_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
