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
	 * Function SectorCWicket.SectorCWicket_C.UserConstructionScript
	 */
	struct ASectorCWicket_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SectorCWicket.SectorCWicket_C.LongRadiusChanged
	 */
	struct ASectorCWicket_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SectorCWicket.SectorCWicket_C.eventDoorActivated
	 */
	struct ASectorCWicket_C_eventDoorActivated_Params
	{	};

	/**
	 * Function SectorCWicket.SectorCWicket_C.ShortRadiusChanged
	 */
	struct ASectorCWicket_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SectorCWicket.SectorCWicket_C.ExecuteUbergraph_SectorCWicket
	 */
	struct ASectorCWicket_C_ExecuteUbergraph_SectorCWicket_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
