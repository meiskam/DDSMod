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

// Function rainActor.rainActor_C.UserConstructionScript
struct ArainActor_C_UserConstructionScript_Params
{
};

// Function rainActor.rainActor_C.ReceiveBeginPlay
struct ArainActor_C_ReceiveBeginPlay_Params
{
};

// Function rainActor.rainActor_C.ReceiveTick
struct ArainActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function rainActor.rainActor_C.spawnThunder
struct ArainActor_C_spawnThunder_Params
{
};

// Function rainActor.rainActor_C.retrySetup
struct ArainActor_C_retrySetup_Params
{
};

// Function rainActor.rainActor_C.checkWeatherConditions
struct ArainActor_C_checkWeatherConditions_Params
{
};

// Function rainActor.rainActor_C.ExecuteUbergraph_rainActor
struct ArainActor_C_ExecuteUbergraph_rainActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
