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

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.selectFillBottle
struct AinteractiveWaterSinkBP_C_selectFillBottle_Params
{
	int                                                ChosenBottleQuantity;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.fillOneBottle
struct AinteractiveWaterSinkBP_C_fillOneBottle_Params
{
};

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.UserConstructionScript
struct AinteractiveWaterSinkBP_C_UserConstructionScript_Params
{
};

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ReceiveTick
struct AinteractiveWaterSinkBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionHeld
struct AinteractiveWaterSinkBP_C_sinkActionHeld_Params
{
};

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.sinkActionRelease
struct AinteractiveWaterSinkBP_C_sinkActionRelease_Params
{
};

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.showWaterFillDialogue
struct AinteractiveWaterSinkBP_C_showWaterFillDialogue_Params
{
};

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.hideWaterFillDialogue
struct AinteractiveWaterSinkBP_C_hideWaterFillDialogue_Params
{
};

// Function interactiveWaterSinkBP.interactiveWaterSinkBP_C.ExecuteUbergraph_interactiveWaterSinkBP
struct AinteractiveWaterSinkBP_C_ExecuteUbergraph_interactiveWaterSinkBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
