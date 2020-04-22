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

// Function noisyNeighbourBP.noisyNeighbourBP_C.UserConstructionScript
struct AnoisyNeighbourBP_C_UserConstructionScript_Params
{
};

// Function noisyNeighbourBP.noisyNeighbourBP_C.ReceiveBeginPlay
struct AnoisyNeighbourBP_C_ReceiveBeginPlay_Params
{
};

// Function noisyNeighbourBP.noisyNeighbourBP_C.ReceiveTick
struct AnoisyNeighbourBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function noisyNeighbourBP.noisyNeighbourBP_C.reInitialise
struct AnoisyNeighbourBP_C_reInitialise_Params
{
};

// Function noisyNeighbourBP.noisyNeighbourBP_C.checkPlayerAtHome
struct AnoisyNeighbourBP_C_checkPlayerAtHome_Params
{
};

// Function noisyNeighbourBP.noisyNeighbourBP_C.retryPlay
struct AnoisyNeighbourBP_C_retryPlay_Params
{
};

// Function noisyNeighbourBP.noisyNeighbourBP_C.ExecuteUbergraph_noisyNeighbourBP
struct AnoisyNeighbourBP_C_ExecuteUbergraph_noisyNeighbourBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
