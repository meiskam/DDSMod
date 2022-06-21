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
	 * Function demoControler.demoControler_C.UserConstructionScript
	 */
	struct AdemoControler_C_UserConstructionScript_Params
	{	};

	/**
	 * Function demoControler.demoControler_C.showEndScreen
	 */
	struct AdemoControler_C_showEndScreen_Params
	{	};

	/**
	 * Function demoControler.demoControler_C.Sleep
	 */
	struct AdemoControler_C_Sleep_Params
	{	};

	/**
	 * Function demoControler.demoControler_C.DemoEnded
	 */
	struct AdemoControler_C_DemoEnded_Params
	{	};

	/**
	 * Function demoControler.demoControler_C.ReceiveTick
	 */
	struct AdemoControler_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function demoControler.demoControler_C.ReceiveBeginPlay
	 */
	struct AdemoControler_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function demoControler.demoControler_C.ExecuteUbergraph_demoControler
	 */
	struct AdemoControler_C_ExecuteUbergraph_demoControler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
