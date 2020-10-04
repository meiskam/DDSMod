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

// Function lootSpawner.lootSpawner_C.pickRandomLoot
struct AlootSpawner_C_pickRandomLoot_Params
{
	class UClass*                                      LootOut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lootSpawner.lootSpawner_C.UserConstructionScript
struct AlootSpawner_C_UserConstructionScript_Params
{
};

// Function lootSpawner.lootSpawner_C.ReceiveBeginPlay
struct AlootSpawner_C_ReceiveBeginPlay_Params
{
};

// Function lootSpawner.lootSpawner_C.ReceiveTick
struct AlootSpawner_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lootSpawner.lootSpawner_C.spawnRandomLoot
struct AlootSpawner_C_spawnRandomLoot_Params
{
};

// Function lootSpawner.lootSpawner_C.testCountdownSpawn
struct AlootSpawner_C_testCountdownSpawn_Params
{
};

// Function lootSpawner.lootSpawner_C.ExecuteUbergraph_lootSpawner
struct AlootSpawner_C_ExecuteUbergraph_lootSpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
