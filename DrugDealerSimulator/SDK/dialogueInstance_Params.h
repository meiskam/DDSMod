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
	 * Function dialogueInstance.dialogueInstance_C.GetDialogueData
	 */
	struct AdialogueInstance_C_GetDialogueData_Params
	{	};

	/**
	 * Function dialogueInstance.dialogueInstance_C.UserConstructionScript
	 */
	struct AdialogueInstance_C_UserConstructionScript_Params
	{	};

	/**
	 * Function dialogueInstance.dialogueInstance_C.ReceiveBeginPlay
	 */
	struct AdialogueInstance_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function dialogueInstance.dialogueInstance_C.eventActivateDialogue
	 */
	struct AdialogueInstance_C_eventActivateDialogue_Params
	{
	public:
		class AbaseNPC_C*                                          talkerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function dialogueInstance.dialogueInstance_C.playDialogueAudio
	 */
	struct AdialogueInstance_C_playDialogueAudio_Params
	{
	public:
		class USoundWave*                                          AudioFile;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function dialogueInstance.dialogueInstance_C.openTrading
	 */
	struct AdialogueInstance_C_openTrading_Params
	{
	public:
		bool                                                       regularShop;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function dialogueInstance.dialogueInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AdialogueInstance_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function dialogueInstance.dialogueInstance_C.DialogueLoaded
	 */
	struct AdialogueInstance_C_DialogueLoaded_Params
	{	};

	/**
	 * Function dialogueInstance.dialogueInstance_C.DialogueActivated
	 */
	struct AdialogueInstance_C_DialogueActivated_Params
	{	};

	/**
	 * Function dialogueInstance.dialogueInstance_C.ExecuteUbergraph_dialogueInstance
	 */
	struct AdialogueInstance_C_ExecuteUbergraph_dialogueInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
