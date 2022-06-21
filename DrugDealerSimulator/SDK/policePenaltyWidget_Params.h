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
	 * Function policePenaltyWidget.policePenaltyWidget_C.Construct
	 */
	struct UpolicePenaltyWidget_C_Construct_Params
	{	};

	/**
	 * Function policePenaltyWidget.policePenaltyWidget_C.Setup
	 */
	struct UpolicePenaltyWidget_C_Setup_Params
	{
	public:
		class FText                                                Reason;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policePenaltyWidget.policePenaltyWidget_C.ExecuteUbergraph_policePenaltyWidget
	 */
	struct UpolicePenaltyWidget_C_ExecuteUbergraph_policePenaltyWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
