#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function mixConfirmWidget.mixConfirmWidget_C.Tick
struct UmixConfirmWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mixConfirmWidget.mixConfirmWidget_C.setup
struct UmixConfirmWidget_C_setup_Params
{
	class AworkStationMixerBase_C*                     Mixer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mixConfirmWidget.mixConfirmWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UmixConfirmWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function mixConfirmWidget.mixConfirmWidget_C.BndEvt__btnApply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UmixConfirmWidget_C_BndEvt__btnApply_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function mixConfirmWidget.mixConfirmWidget_C.killMe
struct UmixConfirmWidget_C_killMe_Params
{
};

// Function mixConfirmWidget.mixConfirmWidget_C.ExecuteUbergraph_mixConfirmWidget
struct UmixConfirmWidget_C_ExecuteUbergraph_mixConfirmWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
