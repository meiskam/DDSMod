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

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.updateSprayLook
struct AsprayPlacementGizmo_C_updateSprayLook_Params
{
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.useSprayFromCan
struct AsprayPlacementGizmo_C_useSprayFromCan_Params
{
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkPlacementConditions
struct AsprayPlacementGizmo_C_checkPlacementConditions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               AreaUnlocked;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               showGizmo;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkSurroundings
struct AsprayPlacementGizmo_C_checkSurroundings_Params
{
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.countdownHold
struct AsprayPlacementGizmo_C_countdownHold_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.UserConstructionScript
struct AsprayPlacementGizmo_C_UserConstructionScript_Params
{
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveBeginPlay
struct AsprayPlacementGizmo_C_ReceiveBeginPlay_Params
{
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveTick
struct AsprayPlacementGizmo_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.ActionPress
struct AsprayPlacementGizmo_C_ActionPress_Params
{
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.actionRelease
struct AsprayPlacementGizmo_C_actionRelease_Params
{
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.PutSpraySymbol
struct AsprayPlacementGizmo_C_PutSpraySymbol_Params
{
};

// Function sprayPlacementGizmo.sprayPlacementGizmo_C.ExecuteUbergraph_sprayPlacementGizmo
struct AsprayPlacementGizmo_C_ExecuteUbergraph_sprayPlacementGizmo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
