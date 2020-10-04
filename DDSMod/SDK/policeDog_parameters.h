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

// Function policeDog.policeDog_C.reconstructReferences
struct ApoliceDog_C_reconstructReferences_Params
{
};

// Function policeDog.policeDog_C.UserConstructionScript
struct ApoliceDog_C_UserConstructionScript_Params
{
};

// Function policeDog.policeDog_C.ReceiveBeginPlay
struct ApoliceDog_C_ReceiveBeginPlay_Params
{
};

// Function policeDog.policeDog_C.ReceiveTick
struct ApoliceDog_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policeDog.policeDog_C.testPlayerDistance
struct ApoliceDog_C_testPlayerDistance_Params
{
};

// Function policeDog.policeDog_C.sniffTest
struct ApoliceDog_C_sniffTest_Params
{
};

// Function policeDog.policeDog_C.sensedDrugs
struct ApoliceDog_C_sensedDrugs_Params
{
};

// Function policeDog.policeDog_C.resetBark
struct ApoliceDog_C_resetBark_Params
{
};

// Function policeDog.policeDog_C.ExecuteUbergraph_policeDog
struct ApoliceDog_C_ExecuteUbergraph_policeDog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
