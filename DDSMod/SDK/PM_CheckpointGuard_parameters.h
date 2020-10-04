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

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkBackpackForIllegals
struct APM_CheckpointGuard_C_checkBackpackForIllegals_Params
{
	class AbackpackBase_C*                             Backpack;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.UserConstructionScript
struct APM_CheckpointGuard_C_UserConstructionScript_Params
{
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveBeginPlay
struct APM_CheckpointGuard_C_ReceiveBeginPlay_Params
{
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveTick
struct APM_CheckpointGuard_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkTrespass
struct APM_CheckpointGuard_C_checkTrespass_Params
{
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APM_CheckpointGuard_C_BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.ControlEnded
struct APM_CheckpointGuard_C_ControlEnded_Params
{
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.breakControl
struct APM_CheckpointGuard_C_breakControl_Params
{
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.EngageSuspect
struct APM_CheckpointGuard_C_EngageSuspect_Params
{
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.setSuicideTimer
struct APM_CheckpointGuard_C_setSuicideTimer_Params
{
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.trySuicide
struct APM_CheckpointGuard_C_trySuicide_Params
{
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.overrideSearch
struct APM_CheckpointGuard_C_overrideSearch_Params
{
};

// Function PM_CheckpointGuard.PM_CheckpointGuard_C.ExecuteUbergraph_PM_CheckpointGuard
struct APM_CheckpointGuard_C_ExecuteUbergraph_PM_CheckpointGuard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
