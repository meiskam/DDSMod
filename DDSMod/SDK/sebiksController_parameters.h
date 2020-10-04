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

// Function sebiksController.sebiksController_C.UserConstructionScript
struct AsebiksController_C_UserConstructionScript_Params
{
};

// Function sebiksController.sebiksController_C.ReceiveBeginPlay
struct AsebiksController_C_ReceiveBeginPlay_Params
{
};

// Function sebiksController.sebiksController_C.ReceiveTick
struct AsebiksController_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function sebiksController.sebiksController_C.tryRespawn
struct AsebiksController_C_tryRespawn_Params
{
};

// Function sebiksController.sebiksController_C.ExecuteUbergraph_sebiksController
struct AsebiksController_C_ExecuteUbergraph_sebiksController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
