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
	 * Function plantStatsWidget.plantStatsWidget_C.Construct
	 */
	struct UplantStatsWidget_C_Construct_Params
	{	};

	/**
	 * Function plantStatsWidget.plantStatsWidget_C.Tick
	 */
	struct UplantStatsWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function plantStatsWidget.plantStatsWidget_C.Setup
	 */
	struct UplantStatsWidget_C_Setup_Params
	{
	public:
		class AweedPlantBP_C*                                      PlantRef;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function plantStatsWidget.plantStatsWidget_C.updateMe
	 */
	struct UplantStatsWidget_C_updateMe_Params
	{	};

	/**
	 * Function plantStatsWidget.plantStatsWidget_C.Destruct
	 */
	struct UplantStatsWidget_C_Destruct_Params
	{	};

	/**
	 * Function plantStatsWidget.plantStatsWidget_C.ExecuteUbergraph_plantStatsWidget
	 */
	struct UplantStatsWidget_C_ExecuteUbergraph_plantStatsWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
