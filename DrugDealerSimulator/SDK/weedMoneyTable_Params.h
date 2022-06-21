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
	 * Function weedMoneyTable.weedMoneyTable_C.depositeSafeMoney
	 */
	struct AweedMoneyTable_C_depositeSafeMoney_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function weedMoneyTable.weedMoneyTable_C.parseInventory
	 */
	struct AweedMoneyTable_C_parseInventory_Params
	{
	public:
		TArray<struct FinventoryItemStruct>                        backpack;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
		TArray<int32_t>                                            backpackQuan;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FinventoryItemStruct>                        Pockets;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
		TArray<int32_t>                                            pocketQuan;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    quantityFound;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function weedMoneyTable.weedMoneyTable_C.UserConstructionScript
	 */
	struct AweedMoneyTable_C_UserConstructionScript_Params
	{	};

	/**
	 * Function weedMoneyTable.weedMoneyTable_C.tableActivated
	 */
	struct AweedMoneyTable_C_tableActivated_Params
	{
	public:
		class AplayerCharacterBP_C*                                Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function weedMoneyTable.weedMoneyTable_C.ExecuteUbergraph_weedMoneyTable
	 */
	struct AweedMoneyTable_C_ExecuteUbergraph_weedMoneyTable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
