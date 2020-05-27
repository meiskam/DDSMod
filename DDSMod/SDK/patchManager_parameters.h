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

// Function patchManager.patchManager_C.UserConstructionScript
struct ApatchManager_C_UserConstructionScript_Params
{
};

// Function patchManager.patchManager_C.ReceiveBeginPlay
struct ApatchManager_C_ReceiveBeginPlay_Params
{
};

// Function patchManager.patchManager_C.activatePatchingScript
struct ApatchManager_C_activatePatchingScript_Params
{
	int                                                ScriptIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function patchManager.patchManager_C.ExecuteUbergraph_patchManager
struct ApatchManager_C_ExecuteUbergraph_patchManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
