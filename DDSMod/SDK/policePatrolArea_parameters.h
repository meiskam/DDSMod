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

// Function policePatrolArea.policePatrolArea_C.getUnreachedPoint
struct ApolicePatrolArea_C_getUnreachedPoint_Params
{
	class ApolicePatrolPoint_C*                        Patrol_Point;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function policePatrolArea.policePatrolArea_C.UserConstructionScript
struct ApolicePatrolArea_C_UserConstructionScript_Params
{
};

// Function policePatrolArea.policePatrolArea_C.ReceiveBeginPlay
struct ApolicePatrolArea_C_ReceiveBeginPlay_Params
{
};

// Function policePatrolArea.policePatrolArea_C.resetPatrolArea
struct ApolicePatrolArea_C_resetPatrolArea_Params
{
};

// Function policePatrolArea.policePatrolArea_C.restartArea
struct ApolicePatrolArea_C_restartArea_Params
{
};

// Function policePatrolArea.policePatrolArea_C.ExecuteUbergraph_policePatrolArea
struct ApolicePatrolArea_C_ExecuteUbergraph_policePatrolArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
