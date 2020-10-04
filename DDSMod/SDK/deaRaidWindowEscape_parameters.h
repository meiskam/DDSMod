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

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.UserConstructionScript
struct AdeaRaidWindowEscape_C_UserConstructionScript_Params
{
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.ReceiveBeginPlay
struct AdeaRaidWindowEscape_C_ReceiveBeginPlay_Params
{
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.ReceiveTick
struct AdeaRaidWindowEscape_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.Activate
struct AdeaRaidWindowEscape_C_Activate_Params
{
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.Deactivate
struct AdeaRaidWindowEscape_C_Deactivate_Params
{
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.WindowActionPressed
struct AdeaRaidWindowEscape_C_WindowActionPressed_Params
{
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.WindowActionRelease
struct AdeaRaidWindowEscape_C_WindowActionRelease_Params
{
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.escapeThroughtWindow
struct AdeaRaidWindowEscape_C_escapeThroughtWindow_Params
{
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AdeaRaidWindowEscape_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AdeaRaidWindowEscape_C_BndEvt__pawnOverlap_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function deaRaidWindowEscape.deaRaidWindowEscape_C.ExecuteUbergraph_deaRaidWindowEscape
struct AdeaRaidWindowEscape_C_ExecuteUbergraph_deaRaidWindowEscape_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
