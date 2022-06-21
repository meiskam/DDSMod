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
	 * Function introCreditsWidget.introCreditsWidget_C.Construct
	 */
	struct UintroCreditsWidget_C_Construct_Params
	{	};

	/**
	 * Function introCreditsWidget.introCreditsWidget_C.Setup
	 */
	struct UintroCreditsWidget_C_Setup_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Person;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Company;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function introCreditsWidget.introCreditsWidget_C.ExecuteUbergraph_introCreditsWidget
	 */
	struct UintroCreditsWidget_C_ExecuteUbergraph_introCreditsWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
