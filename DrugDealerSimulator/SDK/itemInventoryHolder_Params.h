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
	 * Function itemInventoryHolder.itemInventoryHolder_C.UserConstructionScript
	 */
	struct AitemInventoryHolder_C_UserConstructionScript_Params
	{	};

	/**
	 * Function itemInventoryHolder.itemInventoryHolder_C.ReceiveBeginPlay
	 */
	struct AitemInventoryHolder_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function itemInventoryHolder.itemInventoryHolder_C.SetContents
	 */
	struct AitemInventoryHolder_C_SetContents_Params
	{
	public:
		TArray<struct FinventoryItemStruct>                        contents;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
		TArray<int32_t>                                            Quantities;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      TotalSize;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalWieght;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function itemInventoryHolder.itemInventoryHolder_C.ExecuteUbergraph_itemInventoryHolder
	 */
	struct AitemInventoryHolder_C_ExecuteUbergraph_itemInventoryHolder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
