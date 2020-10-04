#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function dialogueWidget.dialogueWidget_C.OnKeyDown
struct UdialogueWidget_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function dialogueWidget.dialogueWidget_C.OnMouseButtonDown
struct UdialogueWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function dialogueWidget.dialogueWidget_C.launchNewDialogue
struct UdialogueWidget_C_launchNewDialogue_Params
{
	int                                                NewDialogueID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ResponseShowDelay;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function dialogueWidget.dialogueWidget_C.executeFinishActions
struct UdialogueWidget_C_executeFinishActions_Params
{
};

// Function dialogueWidget.dialogueWidget_C.setupResponses
struct UdialogueWidget_C_setupResponses_Params
{
	struct FdialogueData                               dialogueData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function dialogueWidget.dialogueWidget_C.Construct
struct UdialogueWidget_C_Construct_Params
{
};

// Function dialogueWidget.dialogueWidget_C.setup
struct UdialogueWidget_C_setup_Params
{
	class AdialogueInstance_C*                         dialogueInstanceRef;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RiskFactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Speaker_Name;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function dialogueWidget.dialogueWidget_C.responseAction
struct UdialogueWidget_C_responseAction_Params
{
	struct FdialogueResponseData                       Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function dialogueWidget.dialogueWidget_C.finishDialogue
struct UdialogueWidget_C_finishDialogue_Params
{
};

// Function dialogueWidget.dialogueWidget_C.returnFromTrade
struct UdialogueWidget_C_returnFromTrade_Params
{
};

// Function dialogueWidget.dialogueWidget_C.forceResponses
struct UdialogueWidget_C_forceResponses_Params
{
};

// Function dialogueWidget.dialogueWidget_C.ExecuteUbergraph_dialogueWidget
struct UdialogueWidget_C_ExecuteUbergraph_dialogueWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
