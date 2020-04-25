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

// Function PM_GetPointCloseToPlayer.PM_GetPointCloseToPlayer_C.ReceiveExecute
struct UPM_GetPointCloseToPlayer_C_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_GetPointCloseToPlayer.PM_GetPointCloseToPlayer_C.ExecuteUbergraph_PM_GetPointCloseToPlayer
struct UPM_GetPointCloseToPlayer_C_ExecuteUbergraph_PM_GetPointCloseToPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
