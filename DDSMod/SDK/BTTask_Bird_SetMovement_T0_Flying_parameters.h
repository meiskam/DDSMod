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

// Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.OnFail_DD4F82004EF7DB5A3D219180586AD970
struct UBTTask_Bird_SetMovement_T0_Flying_C_OnFail_DD4F82004EF7DB5A3D219180586AD970_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.OnSuccess_DD4F82004EF7DB5A3D219180586AD970
struct UBTTask_Bird_SetMovement_T0_Flying_C_OnSuccess_DD4F82004EF7DB5A3D219180586AD970_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.ReceiveExecuteAI
struct UBTTask_Bird_SetMovement_T0_Flying_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Flying
struct UBTTask_Bird_SetMovement_T0_Flying_C_ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Flying_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
