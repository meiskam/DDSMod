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

// Function dialogueResponseWidget.dialogueResponseWidget_C.setup
struct UdialogueResponseWidget_C_setup_Params
{
	struct FText                                       DialogueText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                responseID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UdialogueWidget_C*                           parentRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FdialogueResponseData                       responseData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function dialogueResponseWidget.dialogueResponseWidget_C.BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UdialogueResponseWidget_C_BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function dialogueResponseWidget.dialogueResponseWidget_C.ExecuteUbergraph_dialogueResponseWidget
struct UdialogueResponseWidget_C_ExecuteUbergraph_dialogueResponseWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
