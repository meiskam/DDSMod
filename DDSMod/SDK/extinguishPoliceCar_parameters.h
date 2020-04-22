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

// Function extinguishPoliceCar.extinguishPoliceCar_C.UserConstructionScript
struct AextinguishPoliceCar_C_UserConstructionScript_Params
{
};

// Function extinguishPoliceCar.extinguishPoliceCar_C.ReceiveTick
struct AextinguishPoliceCar_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function extinguishPoliceCar.extinguishPoliceCar_C.startMoving
struct AextinguishPoliceCar_C_startMoving_Params
{
};

// Function extinguishPoliceCar.extinguishPoliceCar_C.ExecuteUbergraph_extinguishPoliceCar
struct AextinguishPoliceCar_C_ExecuteUbergraph_extinguishPoliceCar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
