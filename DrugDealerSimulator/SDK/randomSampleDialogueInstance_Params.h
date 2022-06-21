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
	 * Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.UserConstructionScript
	 */
	struct ArandomSampleDialogueInstance_C_UserConstructionScript_Params
	{	};

	/**
	 * Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.ReceiveBeginPlay
	 */
	struct ArandomSampleDialogueInstance_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.ConfigDialogue
	 */
	struct ArandomSampleDialogueInstance_C_ConfigDialogue_Params
	{
	public:
		bool                                                       Male;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function randomSampleDialogueInstance.randomSampleDialogueInstance_C.ExecuteUbergraph_randomSampleDialogueInstance
	 */
	struct ArandomSampleDialogueInstance_C_ExecuteUbergraph_randomSampleDialogueInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
