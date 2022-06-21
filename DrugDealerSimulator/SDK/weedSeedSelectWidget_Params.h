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
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.plantCurrentSeed
	 */
	struct UweedSeedSelectWidget_C_plantCurrentSeed_Params
	{	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.renderSeedList
	 */
	struct UweedSeedSelectWidget_C_renderSeedList_Params
	{	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.Construct
	 */
	struct UweedSeedSelectWidget_C_Construct_Params
	{	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.Tick
	 */
	struct UweedSeedSelectWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.Setup
	 */
	struct UweedSeedSelectWidget_C_Setup_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       showIndoor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.scrolledUp
	 */
	struct UweedSeedSelectWidget_C_scrolledUp_Params
	{	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.scrolledDown
	 */
	struct UweedSeedSelectWidget_C_scrolledDown_Params
	{	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.actionDown
	 */
	struct UweedSeedSelectWidget_C_actionDown_Params
	{	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.actionUp
	 */
	struct UweedSeedSelectWidget_C_actionUp_Params
	{	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.resetPlant
	 */
	struct UweedSeedSelectWidget_C_resetPlant_Params
	{	};

	/**
	 * Function weedSeedSelectWidget.weedSeedSelectWidget_C.ExecuteUbergraph_weedSeedSelectWidget
	 */
	struct UweedSeedSelectWidget_C_ExecuteUbergraph_weedSeedSelectWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
