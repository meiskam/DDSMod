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

// Function colorButtonWidget.colorButtonWidget_C.setup
struct UcolorButtonWidget_C_setup_Params
{
	class UlabelEditWidget_C*                          Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FColor                                      Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColorIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function colorButtonWidget.colorButtonWidget_C.BndEvt__btnColor_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UcolorButtonWidget_C_BndEvt__btnColor_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function colorButtonWidget.colorButtonWidget_C.ExecuteUbergraph_colorButtonWidget
struct UcolorButtonWidget_C_ExecuteUbergraph_colorButtonWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
