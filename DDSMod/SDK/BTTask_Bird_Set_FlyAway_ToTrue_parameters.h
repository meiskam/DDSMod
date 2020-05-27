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

// Function BTTask_Bird_Set_FlyAway_ToTrue.BTTask_Bird_Set_FlyAway_ToTrue_C.ReceiveExecuteAI
struct UBTTask_Bird_Set_FlyAway_ToTrue_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_Bird_Set_FlyAway_ToTrue.BTTask_Bird_Set_FlyAway_ToTrue_C.ExecuteUbergraph_BTTask_Bird_Set_FlyAway_ToTrue
struct UBTTask_Bird_Set_FlyAway_ToTrue_C_ExecuteUbergraph_BTTask_Bird_Set_FlyAway_ToTrue_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
