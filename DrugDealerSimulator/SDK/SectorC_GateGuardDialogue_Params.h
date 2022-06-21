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
	 * Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.CheckPlayerPass
	 */
	struct ASectorC_GateGuardDialogue_C_CheckPlayerPass_Params
	{
	public:
		bool                                                       Pass;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.UserConstructionScript
	 */
	struct ASectorC_GateGuardDialogue_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueLoaded
	 */
	struct ASectorC_GateGuardDialogue_C_DialogueLoaded_Params
	{	};

	/**
	 * Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.RecheckPlayerPass
	 */
	struct ASectorC_GateGuardDialogue_C_RecheckPlayerPass_Params
	{	};

	/**
	 * Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.tryOpenPass
	 */
	struct ASectorC_GateGuardDialogue_C_tryOpenPass_Params
	{	};

	/**
	 * Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.DialogueActivated
	 */
	struct ASectorC_GateGuardDialogue_C_DialogueActivated_Params
	{	};

	/**
	 * Function SectorC_GateGuardDialogue.SectorC_GateGuardDialogue_C.ExecuteUbergraph_SectorC_GateGuardDialogue
	 */
	struct ASectorC_GateGuardDialogue_C_ExecuteUbergraph_SectorC_GateGuardDialogue_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
