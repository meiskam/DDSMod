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
	 * Function deaRaidCounterWidget.deaRaidCounterWidget_C.secondsToTime
	 */
	struct UdeaRaidCounterWidget_C_secondsToTime_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                timeText;                                                // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function deaRaidCounterWidget.deaRaidCounterWidget_C.Construct
	 */
	struct UdeaRaidCounterWidget_C_Construct_Params
	{	};

	/**
	 * Function deaRaidCounterWidget.deaRaidCounterWidget_C.Setup
	 */
	struct UdeaRaidCounterWidget_C_Setup_Params
	{
	public:
		int32_t                                                    baseSeconds;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function deaRaidCounterWidget.deaRaidCounterWidget_C.updateCountdown
	 */
	struct UdeaRaidCounterWidget_C_updateCountdown_Params
	{
	public:
		bool                                                       Drama;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    leftSeconds;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function deaRaidCounterWidget.deaRaidCounterWidget_C.killWidget
	 */
	struct UdeaRaidCounterWidget_C_killWidget_Params
	{	};

	/**
	 * Function deaRaidCounterWidget.deaRaidCounterWidget_C.ExecuteUbergraph_deaRaidCounterWidget
	 */
	struct UdeaRaidCounterWidget_C_ExecuteUbergraph_deaRaidCounterWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
