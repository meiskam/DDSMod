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
	 * Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.chooseKnowSomething
	 */
	struct AdealerSaleDialogueInstance_C_chooseKnowSomething_Params
	{
	public:
		TArray<class FText>                                        outResponses;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.UserConstructionScript
	 */
	struct AdealerSaleDialogueInstance_C_UserConstructionScript_Params
	{	};

	/**
	 * Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ConfigDialogue
	 */
	struct AdealerSaleDialogueInstance_C_ConfigDialogue_Params
	{
	public:
		bool                                                       Male;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ReceiveBeginPlay
	 */
	struct AdealerSaleDialogueInstance_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.gangUnlock
	 */
	struct AdealerSaleDialogueInstance_C_gangUnlock_Params
	{	};

	/**
	 * Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.askedAround
	 */
	struct AdealerSaleDialogueInstance_C_askedAround_Params
	{	};

	/**
	 * Function dealerSaleDialogueInstance.dealerSaleDialogueInstance_C.ExecuteUbergraph_dealerSaleDialogueInstance
	 */
	struct AdealerSaleDialogueInstance_C_ExecuteUbergraph_dealerSaleDialogueInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
