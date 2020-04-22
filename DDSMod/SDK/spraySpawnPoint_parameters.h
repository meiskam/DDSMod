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

// Function spraySpawnPoint.spraySpawnPoint_C.checkObstacles
struct AspraySpawnPoint_C_checkObstacles_Params
{
	bool                                               CanSpawn;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function spraySpawnPoint.spraySpawnPoint_C.UserConstructionScript
struct AspraySpawnPoint_C_UserConstructionScript_Params
{
};

// Function spraySpawnPoint.spraySpawnPoint_C.ReceiveBeginPlay
struct AspraySpawnPoint_C_ReceiveBeginPlay_Params
{
};

// Function spraySpawnPoint.spraySpawnPoint_C.ReceiveTick
struct AspraySpawnPoint_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function spraySpawnPoint.spraySpawnPoint_C.spawnSpray
struct AspraySpawnPoint_C_spawnSpray_Params
{
};

// Function spraySpawnPoint.spraySpawnPoint_C.ExecuteUbergraph_spraySpawnPoint
struct AspraySpawnPoint_C_ExecuteUbergraph_spraySpawnPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
