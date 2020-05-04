#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function popupFrame.popupFrame_C.Construct
struct UpopupFrame_C_Construct_Params
{
};

// Function popupFrame.popupFrame_C.BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UpopupFrame_C_BndEvt__btnAction_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function popupFrame.popupFrame_C.configure
struct UpopupFrame_C_configure_Params
{
	struct FText                                       PopupTitle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       PopupDesc;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ShowMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function popupFrame.popupFrame_C.killWidget
struct UpopupFrame_C_killWidget_Params
{
};

// Function popupFrame.popupFrame_C.ExecuteUbergraph_popupFrame
struct UpopupFrame_C_ExecuteUbergraph_popupFrame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
