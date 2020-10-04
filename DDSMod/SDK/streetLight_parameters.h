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

// Function streetLight.streetLight_C.UserConstructionScript
struct AstreetLight_C_UserConstructionScript_Params
{
};

// Function streetLight.streetLight_C.ReceiveBeginPlay
struct AstreetLight_C_ReceiveBeginPlay_Params
{
};

// Function streetLight.streetLight_C.turnOn
struct AstreetLight_C_turnOn_Params
{
};

// Function streetLight.streetLight_C.turnOff
struct AstreetLight_C_turnOff_Params
{
};

// Function streetLight.streetLight_C.eventLightChange
struct AstreetLight_C_eventLightChange_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function streetLight.streetLight_C.ExecuteUbergraph_streetLight
struct AstreetLight_C_ExecuteUbergraph_streetLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
