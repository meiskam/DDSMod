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
	 * Function worldMapMarker.worldMapMarker_C.UserConstructionScript
	 */
	struct AworldMapMarker_C_UserConstructionScript_Params
	{	};

	/**
	 * Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay
	 */
	struct AworldMapMarker_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function worldMapMarker.worldMapMarker_C.Setup
	 */
	struct AworldMapMarker_C_Setup_Params
	{
	public:
		EmapMarkerCategories                                       Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ToolTip;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       dealer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TaskID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function worldMapMarker.worldMapMarker_C.checkTaskEnded
	 */
	struct AworldMapMarker_C_checkTaskEnded_Params
	{	};

	/**
	 * Function worldMapMarker.worldMapMarker_C.reinitialise
	 */
	struct AworldMapMarker_C_reinitialise_Params
	{	};

	/**
	 * Function worldMapMarker.worldMapMarker_C.recalcWaitTime
	 */
	struct AworldMapMarker_C_recalcWaitTime_Params
	{	};

	/**
	 * Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker
	 */
	struct AworldMapMarker_C_ExecuteUbergraph_worldMapMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
