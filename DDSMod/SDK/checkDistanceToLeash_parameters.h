#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function checkDistanceToLeash.checkDistanceToLeash_C.ReceiveTick
struct UcheckDistanceToLeash_C_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function checkDistanceToLeash.checkDistanceToLeash_C.ExecuteUbergraph_checkDistanceToLeash
struct UcheckDistanceToLeash_C_ExecuteUbergraph_checkDistanceToLeash_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
