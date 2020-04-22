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

// Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnFail_F22B8A5A43E73BA6CA860ABAD38534D2
struct UBTTask_Bird_MoveToEnemyLocation_C_OnFail_F22B8A5A43E73BA6CA860ABAD38534D2_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2
struct UBTTask_Bird_MoveToEnemyLocation_C_OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ReceiveExecuteAI
struct UBTTask_Bird_MoveToEnemyLocation_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation
struct UBTTask_Bird_MoveToEnemyLocation_C_ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
