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

// Function largeLabMixer.largeLabMixer_C.UserConstructionScript
struct AlargeLabMixer_C_UserConstructionScript_Params
{
};

// Function largeLabMixer.largeLabMixer_C.ReceiveBeginPlay
struct AlargeLabMixer_C_ReceiveBeginPlay_Params
{
};

// Function largeLabMixer.largeLabMixer_C.ReceiveTick
struct AlargeLabMixer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function largeLabMixer.largeLabMixer_C.ExecuteUbergraph_largeLabMixer
struct AlargeLabMixer_C_ExecuteUbergraph_largeLabMixer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
