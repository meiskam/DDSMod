#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function questWidget.questWidget_C.setup
struct UquestWidget_C_setup_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Short;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function questWidget.questWidget_C.BndEvt__btnMore_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UquestWidget_C_BndEvt__btnMore_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function questWidget.questWidget_C.BndEvt__btnActivateQuest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UquestWidget_C_BndEvt__btnActivateQuest_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function questWidget.questWidget_C.ExecuteUbergraph_questWidget
struct UquestWidget_C_ExecuteUbergraph_questWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
