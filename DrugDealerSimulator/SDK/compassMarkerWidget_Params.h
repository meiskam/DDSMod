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
	 * Function compassMarkerWidget.compassMarkerWidget_C.Setup
	 */
	struct UcompassMarkerWidget_C_Setup_Params
	{
	public:
		EmapMarkerCategories                                       Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function compassMarkerWidget.compassMarkerWidget_C.UpdateDistance
	 */
	struct UcompassMarkerWidget_C_UpdateDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function compassMarkerWidget.compassMarkerWidget_C.ExecuteUbergraph_compassMarkerWidget
	 */
	struct UcompassMarkerWidget_C_ExecuteUbergraph_compassMarkerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
