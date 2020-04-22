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

// Function wallSprayMarking.wallSprayMarking_C.setSpraySymbol
struct AwallSprayMarking_C_setSpraySymbol_Params
{
};

// Function wallSprayMarking.wallSprayMarking_C.UserConstructionScript
struct AwallSprayMarking_C_UserConstructionScript_Params
{
};

// Function wallSprayMarking.wallSprayMarking_C.ReceiveBeginPlay
struct AwallSprayMarking_C_ReceiveBeginPlay_Params
{
};

// Function wallSprayMarking.wallSprayMarking_C.ReceiveTick
struct AwallSprayMarking_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wallSprayMarking.wallSprayMarking_C.ExecuteUbergraph_wallSprayMarking
struct AwallSprayMarking_C_ExecuteUbergraph_wallSprayMarking_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
