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
	 * Function mapMarkerWidget.mapMarkerWidget_C.Construct
	 */
	struct UmapMarkerWidget_C_Construct_Params
	{	};

	/**
	 * Function mapMarkerWidget.mapMarkerWidget_C.Tick
	 */
	struct UmapMarkerWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mapMarkerWidget.mapMarkerWidget_C.checkDistance
	 */
	struct UmapMarkerWidget_C_checkDistance_Params
	{	};

	/**
	 * Function mapMarkerWidget.mapMarkerWidget_C.ExecuteUbergraph_mapMarkerWidget
	 */
	struct UmapMarkerWidget_C_ExecuteUbergraph_mapMarkerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
