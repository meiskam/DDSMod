#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function saveLoadWidget.saveLoadWidget_C.beforeLoadCleanup
struct UsaveLoadWidget_C_beforeLoadCleanup_Params
{
};

// Function saveLoadWidget.saveLoadWidget_C.getStringDateTime
struct UsaveLoadWidget_C_getStringDateTime_Params
{
	struct FString                                     DateTime;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function saveLoadWidget.saveLoadWidget_C.Construct
struct UsaveLoadWidget_C_Construct_Params
{
};

// Function saveLoadWidget.saveLoadWidget_C.SlotClicked
struct UsaveLoadWidget_C_SlotClicked_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function saveLoadWidget.saveLoadWidget_C.setup
struct UsaveLoadWidget_C_setup_Params
{
	bool                                               SaveGame;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               mainMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AsaveStation_C*                              saveStationRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UsaveLoadWidget_C_BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UsaveLoadWidget_C_BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UsaveLoadWidget_C_BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function saveLoadWidget.saveLoadWidget_C.ExecuteUbergraph_saveLoadWidget
struct UsaveLoadWidget_C_ExecuteUbergraph_saveLoadWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
