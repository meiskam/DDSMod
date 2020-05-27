#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function pauseMenu.pauseMenu_C.showConfirm
struct UpauseMenu_C_showConfirm_Params
{
	struct FText                                       Header;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Desc;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ConfirmActionIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pauseMenu.pauseMenu_C.terminateMe
struct UpauseMenu_C_terminateMe_Params
{
	bool                                               canUnpause;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function pauseMenu.pauseMenu_C.Construct
struct UpauseMenu_C_Construct_Params
{
};

// Function pauseMenu.pauseMenu_C.BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UpauseMenu_C_BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function pauseMenu.pauseMenu_C.BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UpauseMenu_C_BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function pauseMenu.pauseMenu_C.BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UpauseMenu_C_BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function pauseMenu.pauseMenu_C.BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UpauseMenu_C_BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function pauseMenu.pauseMenu_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UpauseMenu_C_BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function pauseMenu.pauseMenu_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UpauseMenu_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function pauseMenu.pauseMenu_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UpauseMenu_C_BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function pauseMenu.pauseMenu_C.ExecuteUbergraph_pauseMenu
struct UpauseMenu_C_ExecuteUbergraph_pauseMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
