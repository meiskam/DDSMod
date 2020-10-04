#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function airplaneBP.airplaneBP_C.UserConstructionScript
struct AairplaneBP_C_UserConstructionScript_Params
{
};

// Function airplaneBP.airplaneBP_C.ReceiveBeginPlay
struct AairplaneBP_C_ReceiveBeginPlay_Params
{
};

// Function airplaneBP.airplaneBP_C.ReceiveTick
struct AairplaneBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function airplaneBP.airplaneBP_C.Stop
struct AairplaneBP_C_Stop_Params
{
};

// Function airplaneBP.airplaneBP_C.checkPlaneVisible
struct AairplaneBP_C_checkPlaneVisible_Params
{
};

// Function airplaneBP.airplaneBP_C.ExecuteUbergraph_airplaneBP
struct AairplaneBP_C_ExecuteUbergraph_airplaneBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
