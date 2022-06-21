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
	 * Function quickMessageWidget.quickMessageWidget_C.Construct
	 */
	struct UquickMessageWidget_C_Construct_Params
	{	};

	/**
	 * Function quickMessageWidget.quickMessageWidget_C.Setup
	 */
	struct UquickMessageWidget_C_Setup_Params
	{
	public:
		class FText                                                SetText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function quickMessageWidget.quickMessageWidget_C.ExecuteUbergraph_quickMessageWidget
	 */
	struct UquickMessageWidget_C_ExecuteUbergraph_quickMessageWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
