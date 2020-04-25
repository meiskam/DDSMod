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

// Function pickupItemBase.pickupItemBase_C.UserConstructionScript
struct ApickupItemBase_C_UserConstructionScript_Params
{
};

// Function pickupItemBase.pickupItemBase_C.ReceiveBeginPlay
struct ApickupItemBase_C_ReceiveBeginPlay_Params
{
};

// Function pickupItemBase.pickupItemBase_C.objectPickup
struct ApickupItemBase_C_objectPickup_Params
{
};

// Function pickupItemBase.pickupItemBase_C.pickupEventScript
struct ApickupItemBase_C_pickupEventScript_Params
{
};

// Function pickupItemBase.pickupItemBase_C.setupItem
struct ApickupItemBase_C_setupItem_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Object_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Action_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Droped;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SimulatePhysics;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isGizmo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickupItemBase.pickupItemBase_C.resetDroped
struct ApickupItemBase_C_resetDroped_Params
{
};

// Function pickupItemBase.pickupItemBase_C.ReceiveActorBeginOverlap
struct ApickupItemBase_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickupItemBase.pickupItemBase_C.ExecuteUbergraph_pickupItemBase
struct ApickupItemBase_C_ExecuteUbergraph_pickupItemBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
