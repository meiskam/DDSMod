#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnFail_A030AE6644CF82915307329D4CCBBD31
struct UBTTask_Bird_TurnAndRunFrom_Enemy_C_OnFail_A030AE6644CF82915307329D4CCBBD31_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnSuccess_A030AE6644CF82915307329D4CCBBD31
struct UBTTask_Bird_TurnAndRunFrom_Enemy_C_OnSuccess_A030AE6644CF82915307329D4CCBBD31_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ReceiveExecuteAI
struct UBTTask_Bird_TurnAndRunFrom_Enemy_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy
struct UBTTask_Bird_TurnAndRunFrom_Enemy_C_ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
