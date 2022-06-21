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
	 * Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.Construct
	 */
	struct UcutsceneDialogueWidget_C_Construct_Params
	{	};

	/**
	 * Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.Setup
	 */
	struct UcutsceneDialogueWidget_C_Setup_Params
	{
	public:
		class AActor*                                              Speaker;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OptionA;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                OptionB;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              functionOptionA;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              FunctionOptionB;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateA
	 */
	struct UcutsceneDialogueWidget_C_ActivateA_Params
	{	};

	/**
	 * Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ActivateB
	 */
	struct UcutsceneDialogueWidget_C_ActivateB_Params
	{	};

	/**
	 * Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.killWidget
	 */
	struct UcutsceneDialogueWidget_C_killWidget_Params
	{	};

	/**
	 * Function cutsceneDialogueWidget.cutsceneDialogueWidget_C.ExecuteUbergraph_cutsceneDialogueWidget
	 */
	struct UcutsceneDialogueWidget_C_ExecuteUbergraph_cutsceneDialogueWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
