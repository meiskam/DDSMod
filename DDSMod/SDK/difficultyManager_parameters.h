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

// Function difficultyManager.difficultyManager_C.UserConstructionScript
struct AdifficultyManager_C_UserConstructionScript_Params
{
};

// Function difficultyManager.difficultyManager_C.ReceiveBeginPlay
struct AdifficultyManager_C_ReceiveBeginPlay_Params
{
};

// Function difficultyManager.difficultyManager_C.applyDifficultyRuntime
struct AdifficultyManager_C_applyDifficultyRuntime_Params
{
	TEnumAsByte<EdifficultyLevels>                     NewDifficulty;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function difficultyManager.difficultyManager_C.ExecuteUbergraph_difficultyManager
struct AdifficultyManager_C_ExecuteUbergraph_difficultyManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
