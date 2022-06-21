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
	 * Function psychedelicWeedJoe.psychedelicWeedJoe_C.getReturnLine
	 */
	struct ApsychedelicWeedJoe_C_getReturnLine_Params
	{
	public:
		TArray<struct FinventoryItemStruct>                        Items;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
		TArray<struct FMixProportionsStruct>                       ItemMixes;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            Quantities;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            Amounts;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       Trade_canceled;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FdialogueData                                       ReturnData;                                              // 0x0000(0x0100)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<int32_t>                                            ReturnIndexes;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function psychedelicWeedJoe.psychedelicWeedJoe_C.UserConstructionScript
	 */
	struct ApsychedelicWeedJoe_C_UserConstructionScript_Params
	{	};

	/**
	 * Function psychedelicWeedJoe.psychedelicWeedJoe_C.ReceiveBeginPlay
	 */
	struct ApsychedelicWeedJoe_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function psychedelicWeedJoe.psychedelicWeedJoe_C.retryInitiate
	 */
	struct ApsychedelicWeedJoe_C_retryInitiate_Params
	{	};

	/**
	 * Function psychedelicWeedJoe.psychedelicWeedJoe_C.ExecuteUbergraph_psychedelicWeedJoe
	 */
	struct ApsychedelicWeedJoe_C_ExecuteUbergraph_psychedelicWeedJoe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
