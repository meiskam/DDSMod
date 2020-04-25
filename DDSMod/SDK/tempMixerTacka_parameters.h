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

// Function tempMixerTacka.tempMixerTacka_C.UserConstructionScript
struct AtempMixerTacka_C_UserConstructionScript_Params
{
};

// Function tempMixerTacka.tempMixerTacka_C.ReceiveTick
struct AtempMixerTacka_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function tempMixerTacka.tempMixerTacka_C.quantityChanged
struct AtempMixerTacka_C_quantityChanged_Params
{
};

// Function tempMixerTacka.tempMixerTacka_C.ExecuteUbergraph_tempMixerTacka
struct AtempMixerTacka_C_ExecuteUbergraph_tempMixerTacka_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
