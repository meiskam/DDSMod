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

// Function streetLantern.streetLantern_C.UserConstructionScript
struct AstreetLantern_C_UserConstructionScript_Params
{
};

// Function streetLantern.streetLantern_C.ReceiveBeginPlay
struct AstreetLantern_C_ReceiveBeginPlay_Params
{
};

// Function streetLantern.streetLantern_C.eventLightChange
struct AstreetLantern_C_eventLightChange_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function streetLantern.streetLantern_C.checkDayTime
struct AstreetLantern_C_checkDayTime_Params
{
};

// Function streetLantern.streetLantern_C.repairLantern
struct AstreetLantern_C_repairLantern_Params
{
};

// Function streetLantern.streetLantern_C.updatePlayerDistance
struct AstreetLantern_C_updatePlayerDistance_Params
{
};

// Function streetLantern.streetLantern_C.openOutLightRange
struct AstreetLantern_C_openOutLightRange_Params
{
};

// Function streetLantern.streetLantern_C.farDistancePlayerCheck
struct AstreetLantern_C_farDistancePlayerCheck_Params
{
};

// Function streetLantern.streetLantern_C.BndEvt__proximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AstreetLantern_C_BndEvt__proximitySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function streetLantern.streetLantern_C.BndEvt__proximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AstreetLantern_C_BndEvt__proximitySphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function streetLantern.streetLantern_C.ExecuteUbergraph_streetLantern
struct AstreetLantern_C_ExecuteUbergraph_streetLantern_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
