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

// Function deadDropBase.deadDropBase_C.checkNoDrugs
struct AdeadDropBase_C_checkNoDrugs_Params
{
	bool                                               DrugsTaken;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function deadDropBase.deadDropBase_C.stealProbability
struct AdeadDropBase_C_stealProbability_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function deadDropBase.deadDropBase_C.UserConstructionScript
struct AdeadDropBase_C_UserConstructionScript_Params
{
};

// Function deadDropBase.deadDropBase_C.ReceiveBeginPlay
struct AdeadDropBase_C_ReceiveBeginPlay_Params
{
};

// Function deadDropBase.deadDropBase_C.ReceiveTick
struct AdeadDropBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function deadDropBase.deadDropBase_C.closeEventScript
struct AdeadDropBase_C_closeEventScript_Params
{
};

// Function deadDropBase.deadDropBase_C.testPlayerDistance
struct AdeadDropBase_C_testPlayerDistance_Params
{
};

// Function deadDropBase.deadDropBase_C.testItemSteal
struct AdeadDropBase_C_testItemSteal_Params
{
};

// Function deadDropBase.deadDropBase_C.clearContainer
struct AdeadDropBase_C_clearContainer_Params
{
};

// Function deadDropBase.deadDropBase_C.openEventScript
struct AdeadDropBase_C_openEventScript_Params
{
};

// Function deadDropBase.deadDropBase_C.ExecuteUbergraph_deadDropBase
struct AdeadDropBase_C_ExecuteUbergraph_deadDropBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
