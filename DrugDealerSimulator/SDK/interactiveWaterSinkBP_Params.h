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
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.selectFillBottle
	 */
	struct AinteractiveWaterSinkBP_C_selectFillBottle_Params
	{
	public:
		int32_t                                                    ChosenBottleQuantity;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.fillOneBottle
	 */
	struct AinteractiveWaterSinkBP_C_fillOneBottle_Params
	{	};

	/**
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.UserConstructionScript
	 */
	struct AinteractiveWaterSinkBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ReceiveBeginPlay
	 */
	struct AinteractiveWaterSinkBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ReceiveTick
	 */
	struct AinteractiveWaterSinkBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionHeld
	 */
	struct AinteractiveWaterSinkBP_C_sinkActionHeld_Params
	{	};

	/**
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionRelease
	 */
	struct AinteractiveWaterSinkBP_C_sinkActionRelease_Params
	{	};

	/**
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.showWaterFillDialogue
	 */
	struct AinteractiveWaterSinkBP_C_showWaterFillDialogue_Params
	{	};

	/**
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.hideWaterFillDialogue
	 */
	struct AinteractiveWaterSinkBP_C_hideWaterFillDialogue_Params
	{	};

	/**
	 * Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ExecuteUbergraph_interactiveWaterSinkBP
	 */
	struct AinteractiveWaterSinkBP_C_ExecuteUbergraph_interactiveWaterSinkBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
