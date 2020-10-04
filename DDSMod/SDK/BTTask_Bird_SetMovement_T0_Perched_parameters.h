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

// Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.OnFail_1112766D49DE3644F96D37AFC9E0BC84
struct UBTTask_Bird_SetMovement_T0_Perched_C_OnFail_1112766D49DE3644F96D37AFC9E0BC84_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.OnSuccess_1112766D49DE3644F96D37AFC9E0BC84
struct UBTTask_Bird_SetMovement_T0_Perched_C_OnSuccess_1112766D49DE3644F96D37AFC9E0BC84_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.ReceiveExecuteAI
struct UBTTask_Bird_SetMovement_T0_Perched_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Perched
struct UBTTask_Bird_SetMovement_T0_Perched_C_ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Perched_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
