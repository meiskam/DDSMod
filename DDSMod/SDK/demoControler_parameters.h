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

// Function demoControler.demoControler_C.UserConstructionScript
struct AdemoControler_C_UserConstructionScript_Params
{
};

// Function demoControler.demoControler_C.showEndScreen
struct AdemoControler_C_showEndScreen_Params
{
};

// Function demoControler.demoControler_C.Sleep
struct AdemoControler_C_Sleep_Params
{
};

// Function demoControler.demoControler_C.DemoEnded
struct AdemoControler_C_DemoEnded_Params
{
};

// Function demoControler.demoControler_C.ReceiveTick
struct AdemoControler_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function demoControler.demoControler_C.ReceiveBeginPlay
struct AdemoControler_C_ReceiveBeginPlay_Params
{
};

// Function demoControler.demoControler_C.ExecuteUbergraph_demoControler
struct AdemoControler_C_ExecuteUbergraph_demoControler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
