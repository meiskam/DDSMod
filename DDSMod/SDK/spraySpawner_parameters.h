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

// Function spraySpawner.spraySpawner_C.selectSpawnPoint
struct AspraySpawner_C_selectSpawnPoint_Params
{
	class AspraySpawnPoint_C*                          Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function spraySpawner.spraySpawner_C.UserConstructionScript
struct AspraySpawner_C_UserConstructionScript_Params
{
};

// Function spraySpawner.spraySpawner_C.ReceiveBeginPlay
struct AspraySpawner_C_ReceiveBeginPlay_Params
{
};

// Function spraySpawner.spraySpawner_C.ReceiveTick
struct AspraySpawner_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function spraySpawner.spraySpawner_C.trySpawnSpray
struct AspraySpawner_C_trySpawnSpray_Params
{
};

// Function spraySpawner.spraySpawner_C.burstInitialSprayPaint
struct AspraySpawner_C_burstInitialSprayPaint_Params
{
};

// Function spraySpawner.spraySpawner_C.ExecuteUbergraph_spraySpawner
struct AspraySpawner_C_ExecuteUbergraph_spraySpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
