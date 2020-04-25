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

// Function doorBreacher.doorBreacher_C.UserConstructionScript
struct AdoorBreacher_C_UserConstructionScript_Params
{
};

// Function doorBreacher.doorBreacher_C.breachAnimation__FinishedFunc
struct AdoorBreacher_C_breachAnimation__FinishedFunc_Params
{
};

// Function doorBreacher.doorBreacher_C.breachAnimation__UpdateFunc
struct AdoorBreacher_C_breachAnimation__UpdateFunc_Params
{
};

// Function doorBreacher.doorBreacher_C.breachAnimation__hitMoment__EventFunc
struct AdoorBreacher_C_breachAnimation__hitMoment__EventFunc_Params
{
};

// Function doorBreacher.doorBreacher_C.InpActEvt_Escape_K2Node_InputKeyEvent_2
struct AdoorBreacher_C_InpActEvt_Escape_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function doorBreacher.doorBreacher_C.InpActEvt_F10_K2Node_InputKeyEvent_1
struct AdoorBreacher_C_InpActEvt_F10_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function doorBreacher.doorBreacher_C.InpActEvt_JumpObstacle_K2Node_InputActionEvent_1
struct AdoorBreacher_C_InpActEvt_JumpObstacle_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function doorBreacher.doorBreacher_C.ReceivePossessed
struct AdoorBreacher_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function doorBreacher.doorBreacher_C.ReceiveUnpossessed
struct AdoorBreacher_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function doorBreacher.doorBreacher_C.breachHit
struct AdoorBreacher_C_breachHit_Params
{
};

// Function doorBreacher.doorBreacher_C.endBreach
struct AdoorBreacher_C_endBreach_Params
{
};

// Function doorBreacher.doorBreacher_C.rushBreach
struct AdoorBreacher_C_rushBreach_Params
{
};

// Function doorBreacher.doorBreacher_C.ReceiveTick
struct AdoorBreacher_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function doorBreacher.doorBreacher_C.ExecuteUbergraph_doorBreacher
struct AdoorBreacher_C_ExecuteUbergraph_doorBreacher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
