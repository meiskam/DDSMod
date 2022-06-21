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
	 * Function gameTipPopup.gameTipPopup_C.Construct
	 */
	struct UgameTipPopup_C_Construct_Params
	{	};

	/**
	 * Function gameTipPopup.gameTipPopup_C.Setup
	 */
	struct UgameTipPopup_C_Setup_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function gameTipPopup.gameTipPopup_C.killWidget
	 */
	struct UgameTipPopup_C_killWidget_Params
	{	};

	/**
	 * Function gameTipPopup.gameTipPopup_C.ExecuteUbergraph_gameTipPopup
	 */
	struct UgameTipPopup_C_ExecuteUbergraph_gameTipPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
