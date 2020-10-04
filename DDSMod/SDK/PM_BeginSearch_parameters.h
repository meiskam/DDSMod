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

// Function PM_BeginSearch.PM_BeginSearch_C.ReceiveExecute
struct UPM_BeginSearch_C_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_BeginSearch.PM_BeginSearch_C.ExecuteUbergraph_PM_BeginSearch
struct UPM_BeginSearch_C_ExecuteUbergraph_PM_BeginSearch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
