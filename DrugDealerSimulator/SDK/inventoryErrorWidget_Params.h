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
	 * Function inventoryErrorWidget.inventoryErrorWidget_C.Construct
	 */
	struct UinventoryErrorWidget_C_Construct_Params
	{	};

	/**
	 * Function inventoryErrorWidget.inventoryErrorWidget_C.Setup
	 */
	struct UinventoryErrorWidget_C_Setup_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function inventoryErrorWidget.inventoryErrorWidget_C.ExecuteUbergraph_inventoryErrorWidget
	 */
	struct UinventoryErrorWidget_C_ExecuteUbergraph_inventoryErrorWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
