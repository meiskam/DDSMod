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

// Function PM_CaughtPlayer.PM_CaughtPlayer_C.ReceiveExecute
struct UPM_CaughtPlayer_C_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_CaughtPlayer.PM_CaughtPlayer_C.ExecuteUbergraph_PM_CaughtPlayer
struct UPM_CaughtPlayer_C_ExecuteUbergraph_PM_CaughtPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
