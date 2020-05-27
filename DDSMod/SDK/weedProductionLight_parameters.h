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

// Function weedProductionLight.weedProductionLight_C.UserConstructionScript
struct AweedProductionLight_C_UserConstructionScript_Params
{
};

// Function weedProductionLight.weedProductionLight_C.ReceiveBeginPlay
struct AweedProductionLight_C_ReceiveBeginPlay_Params
{
};

// Function weedProductionLight.weedProductionLight_C.ReceiveTick
struct AweedProductionLight_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weedProductionLight.weedProductionLight_C.ExecuteUbergraph_weedProductionLight
struct AweedProductionLight_C_ExecuteUbergraph_weedProductionLight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
