#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BTService_Bird_FlyToARandomPerchTarget.BTService_Bird_FlyToARandomPerchTarget_C.ReceiveTickAI
struct UBTService_Bird_FlyToARandomPerchTarget_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTService_Bird_FlyToARandomPerchTarget.BTService_Bird_FlyToARandomPerchTarget_C.ExecuteUbergraph_BTService_Bird_FlyToARandomPerchTarget
struct UBTService_Bird_FlyToARandomPerchTarget_C_ExecuteUbergraph_BTService_Bird_FlyToARandomPerchTarget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
