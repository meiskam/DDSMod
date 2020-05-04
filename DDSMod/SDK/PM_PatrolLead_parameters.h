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

// Function PM_PatrolLead.PM_PatrolLead_C.UserConstructionScript
struct APM_PatrolLead_C_UserConstructionScript_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.ReceiveBeginPlay
struct APM_PatrolLead_C_ReceiveBeginPlay_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.ReceiveTick
struct APM_PatrolLead_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_PatrolLead.PM_PatrolLead_C.EngageSuspect
struct APM_PatrolLead_C_EngageSuspect_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APM_PatrolLead_C_BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PM_PatrolLead.PM_PatrolLead_C.ControlEnded
struct APM_PatrolLead_C_ControlEnded_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.breakControl
struct APM_PatrolLead_C_breakControl_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.overrideStartSearch
struct APM_PatrolLead_C_overrideStartSearch_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.ExecuteUbergraph_PM_PatrolLead
struct APM_PatrolLead_C_ExecuteUbergraph_PM_PatrolLead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
