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

// Function labelEditWidget.labelEditWidget_C.Tick
struct UlabelEditWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labelEditWidget.labelEditWidget_C.setup
struct UlabelEditWidget_C_setup_Params
{
	class AadditiveContainerBase_C*                    parentContainer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DefaultName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DisableCancel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function labelEditWidget.labelEditWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UlabelEditWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function labelEditWidget.labelEditWidget_C.BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UlabelEditWidget_C_BndEvt__btnSave_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function labelEditWidget.labelEditWidget_C.killMe
struct UlabelEditWidget_C_killMe_Params
{
};

// Function labelEditWidget.labelEditWidget_C.ExecuteUbergraph_labelEditWidget
struct UlabelEditWidget_C_ExecuteUbergraph_labelEditWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
