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
	 * Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.chooseKnowResponses
	 */
	struct ArandomSaleDialogueInstance_C_chooseKnowResponses_Params
	{
	public:
		TArray<class FText>                                        outResponses;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.UserConstructionScript
	 */
	struct ArandomSaleDialogueInstance_C_UserConstructionScript_Params
	{	};

	/**
	 * Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ReceiveBeginPlay
	 */
	struct ArandomSaleDialogueInstance_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ConfigDialogue
	 */
	struct ArandomSaleDialogueInstance_C_ConfigDialogue_Params
	{
	public:
		bool                                                       Male;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.gangUnlock
	 */
	struct ArandomSaleDialogueInstance_C_gangUnlock_Params
	{	};

	/**
	 * Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.askedAround
	 */
	struct ArandomSaleDialogueInstance_C_askedAround_Params
	{	};

	/**
	 * Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ExecuteUbergraph_randomSaleDialogueInstance
	 */
	struct ArandomSaleDialogueInstance_C_ExecuteUbergraph_randomSaleDialogueInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
