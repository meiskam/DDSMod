#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PM_GetSearchPoint.PM_GetSearchPoint_C.ReceiveExecute
struct UPM_GetSearchPoint_C_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_GetSearchPoint.PM_GetSearchPoint_C.ExecuteUbergraph_PM_GetSearchPoint
struct UPM_GetSearchPoint_C_ExecuteUbergraph_PM_GetSearchPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
