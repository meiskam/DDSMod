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

// Function burningTires.burningTires_C.UserConstructionScript
struct AburningTires_C_UserConstructionScript_Params
{
};

// Function burningTires.burningTires_C.lightIntensity__FinishedFunc
struct AburningTires_C_lightIntensity__FinishedFunc_Params
{
};

// Function burningTires.burningTires_C.lightIntensity__UpdateFunc
struct AburningTires_C_lightIntensity__UpdateFunc_Params
{
};

// Function burningTires.burningTires_C.ReceiveBeginPlay
struct AburningTires_C_ReceiveBeginPlay_Params
{
};

// Function burningTires.burningTires_C.extinguish
struct AburningTires_C_extinguish_Params
{
};

// Function burningTires.burningTires_C.stopTimeline
struct AburningTires_C_stopTimeline_Params
{
};

// Function burningTires.burningTires_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AburningTires_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function burningTires.burningTires_C.ExecuteUbergraph_burningTires
struct AburningTires_C_ExecuteUbergraph_burningTires_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
