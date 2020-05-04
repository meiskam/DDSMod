#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function backpackBase.backpackBase_C.checkBackpackEmpty
struct AbackpackBase_C_checkBackpackEmpty_Params
{
};

// Function backpackBase.backpackBase_C.UserConstructionScript
struct AbackpackBase_C_UserConstructionScript_Params
{
};

// Function backpackBase.backpackBase_C.ReceiveBeginPlay
struct AbackpackBase_C_ReceiveBeginPlay_Params
{
};

// Function backpackBase.backpackBase_C.ReceiveTick
struct AbackpackBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function backpackBase.backpackBase_C.ExecuteUbergraph_backpackBase
struct AbackpackBase_C_ExecuteUbergraph_backpackBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
