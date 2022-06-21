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
	 * Function oneTaskWidget.oneTaskWidget_C.Construct
	 */
	struct UoneTaskWidget_C_Construct_Params
	{	};

	/**
	 * Function oneTaskWidget.oneTaskWidget_C.Setup
	 */
	struct UoneTaskWidget_C_Setup_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function oneTaskWidget.oneTaskWidget_C.ExecuteUbergraph_oneTaskWidget
	 */
	struct UoneTaskWidget_C_ExecuteUbergraph_oneTaskWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
