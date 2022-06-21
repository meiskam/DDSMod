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
	 * Function dialogueWidget.dialogueWidget_C.OnKeyDown
	 */
	struct UdialogueWidget_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.OnMouseButtonDown
	 */
	struct UdialogueWidget_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.launchNewDialogue
	 */
	struct UdialogueWidget_C_launchNewDialogue_Params
	{
	public:
		int32_t                                                    NewDialogueID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ResponseShowDelay;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.executeFinishActions
	 */
	struct UdialogueWidget_C_executeFinishActions_Params
	{	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.setupResponses
	 */
	struct UdialogueWidget_C_setupResponses_Params
	{
	public:
		struct FdialogueData                                       dialogueData;                                            // 0x0000(0x0100)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.Construct
	 */
	struct UdialogueWidget_C_Construct_Params
	{	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.Setup
	 */
	struct UdialogueWidget_C_Setup_Params
	{
	public:
		class AdialogueInstance_C*                                 dialogueInstanceRef;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RiskFactor;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Speaker_Name;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.responseAction
	 */
	struct UdialogueWidget_C_responseAction_Params
	{
	public:
		struct FdialogueResponseData                               Data;                                                    // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.finishDialogue
	 */
	struct UdialogueWidget_C_finishDialogue_Params
	{	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.returnFromTrade
	 */
	struct UdialogueWidget_C_returnFromTrade_Params
	{	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.forceResponses
	 */
	struct UdialogueWidget_C_forceResponses_Params
	{	};

	/**
	 * Function dialogueWidget.dialogueWidget_C.ExecuteUbergraph_dialogueWidget
	 */
	struct UdialogueWidget_C_ExecuteUbergraph_dialogueWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
