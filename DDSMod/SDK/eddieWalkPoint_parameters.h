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

// Function eddieWalkPoint.eddieWalkPoint_C.UserConstructionScript
struct AeddieWalkPoint_C_UserConstructionScript_Params
{
};

// Function eddieWalkPoint.eddieWalkPoint_C.ReceiveActorBeginOverlap
struct AeddieWalkPoint_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function eddieWalkPoint.eddieWalkPoint_C.ExecuteUbergraph_eddieWalkPoint
struct AeddieWalkPoint_C_ExecuteUbergraph_eddieWalkPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
