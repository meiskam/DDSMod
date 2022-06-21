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
	 * Function drugTakenWidget.drugTakenWidget_C.Construct
	 */
	struct UdrugTakenWidget_C_Construct_Params
	{	};

	/**
	 * Function drugTakenWidget.drugTakenWidget_C.Setup
	 */
	struct UdrugTakenWidget_C_Setup_Params
	{
	public:
		class FText                                                DrugName;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function drugTakenWidget.drugTakenWidget_C.ExecuteUbergraph_drugTakenWidget
	 */
	struct UdrugTakenWidget_C_ExecuteUbergraph_drugTakenWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
