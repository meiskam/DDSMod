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

// Function drugWorkStation.drugWorkStation_C.checkHasEquipment
struct AdrugWorkStation_C_checkHasEquipment_Params
{
	bool                                               hasEquipment;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function drugWorkStation.drugWorkStation_C.displayInteractionError
struct AdrugWorkStation_C_displayInteractionError_Params
{
};

// Function drugWorkStation.drugWorkStation_C.eqGizmoUpdate
struct AdrugWorkStation_C_eqGizmoUpdate_Params
{
};

// Function drugWorkStation.drugWorkStation_C.setEqPlacementGizmo
struct AdrugWorkStation_C_setEqPlacementGizmo_Params
{
	bool                                               FromHoveredObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AworkStationEquipmentBase_C*                 HoveredEq;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function drugWorkStation.drugWorkStation_C.setDrugPlacementGizmo
struct AdrugWorkStation_C_setDrugPlacementGizmo_Params
{
};

// Function drugWorkStation.drugWorkStation_C.packageGizmoUpdate
struct AdrugWorkStation_C_packageGizmoUpdate_Params
{
};

// Function drugWorkStation.drugWorkStation_C.switchNextMode
struct AdrugWorkStation_C_switchNextMode_Params
{
};

// Function drugWorkStation.drugWorkStation_C.UserConstructionScript
struct AdrugWorkStation_C_UserConstructionScript_Params
{
};

// Function drugWorkStation.drugWorkStation_C.ActivateWorkStation
struct AdrugWorkStation_C_ActivateWorkStation_Params
{
};

// Function drugWorkStation.drugWorkStation_C.LeaveWorkStation
struct AdrugWorkStation_C_LeaveWorkStation_Params
{
};

// Function drugWorkStation.drugWorkStation_C.TabHeldDown
struct AdrugWorkStation_C_TabHeldDown_Params
{
};

// Function drugWorkStation.drugWorkStation_C.TabReleased
struct AdrugWorkStation_C_TabReleased_Params
{
};

// Function drugWorkStation.drugWorkStation_C.ShiftHeldDown
struct AdrugWorkStation_C_ShiftHeldDown_Params
{
};

// Function drugWorkStation.drugWorkStation_C.ShiftReleased
struct AdrugWorkStation_C_ShiftReleased_Params
{
};

// Function drugWorkStation.drugWorkStation_C.placeCurObject
struct AdrugWorkStation_C_placeCurObject_Params
{
};

// Function drugWorkStation.drugWorkStation_C.ReceiveTick
struct AdrugWorkStation_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function drugWorkStation.drugWorkStation_C.ReceiveBeginPlay
struct AdrugWorkStation_C_ReceiveBeginPlay_Params
{
};

// Function drugWorkStation.drugWorkStation_C.scrollOneUp
struct AdrugWorkStation_C_scrollOneUp_Params
{
};

// Function drugWorkStation.drugWorkStation_C.scrollOneDown
struct AdrugWorkStation_C_scrollOneDown_Params
{
};

// Function drugWorkStation.drugWorkStation_C.rotateGizmo
struct AdrugWorkStation_C_rotateGizmo_Params
{
	float                                              Axis;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function drugWorkStation.drugWorkStation_C.updateWorkStationObjects
struct AdrugWorkStation_C_updateWorkStationObjects_Params
{
	bool                                               Placed;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function drugWorkStation.drugWorkStation_C.ExecuteUbergraph_drugWorkStation
struct AdrugWorkStation_C_ExecuteUbergraph_drugWorkStation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
