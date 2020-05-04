#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function dogFindPlayerLoc.dogFindPlayerLoc_C.ReceiveExecute
struct UdogFindPlayerLoc_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dogFindPlayerLoc.dogFindPlayerLoc_C.ExecuteUbergraph_dogFindPlayerLoc
struct UdogFindPlayerLoc_C_ExecuteUbergraph_dogFindPlayerLoc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
