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

// Function interactiveBaseObject.interactiveBaseObject_C.reconstructEquipmentData
struct AinteractiveBaseObject_C_reconstructEquipmentData_Params
{
};

// Function interactiveBaseObject.interactiveBaseObject_C.removeFromWorkStation
struct AinteractiveBaseObject_C_removeFromWorkStation_Params
{
};

// Function interactiveBaseObject.interactiveBaseObject_C.objectCanStoreApartment
struct AinteractiveBaseObject_C_objectCanStoreApartment_Params
{
	bool                                               CanStore;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Reason;                                                   // (Parm, OutParm)
};

// Function interactiveBaseObject.interactiveBaseObject_C.verifyCorrectNaming
struct AinteractiveBaseObject_C_verifyCorrectNaming_Params
{
};

// Function interactiveBaseObject.interactiveBaseObject_C.GetActionNames
struct AinteractiveBaseObject_C_GetActionNames_Params
{
	struct FText                                       OverrideKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       keyOverride;                                              // (Parm, OutParm)
	struct FText                                       Object_Name;                                              // (Parm, OutParm)
	struct FText                                       Action_Name;                                              // (Parm, OutParm)
};

// Function interactiveBaseObject.interactiveBaseObject_C.beenActivated
struct AinteractiveBaseObject_C_beenActivated_Params
{
};

// Function interactiveBaseObject.interactiveBaseObject_C.UserConstructionScript
struct AinteractiveBaseObject_C_UserConstructionScript_Params
{
};

// Function interactiveBaseObject.interactiveBaseObject_C.ReceiveBeginPlay
struct AinteractiveBaseObject_C_ReceiveBeginPlay_Params
{
};

// Function interactiveBaseObject.interactiveBaseObject_C.ReceiveTick
struct AinteractiveBaseObject_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function interactiveBaseObject.interactiveBaseObject_C.adaptPlaceMaterial
struct AinteractiveBaseObject_C_adaptPlaceMaterial_Params
{
};

// Function interactiveBaseObject.interactiveBaseObject_C.SetAsGizmo
struct AinteractiveBaseObject_C_SetAsGizmo_Params
{
};

// Function interactiveBaseObject.interactiveBaseObject_C.ExecuteUbergraph_interactiveBaseObject
struct AinteractiveBaseObject_C_ExecuteUbergraph_interactiveBaseObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
