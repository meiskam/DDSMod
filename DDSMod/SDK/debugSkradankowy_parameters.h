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

// Function debugSkradankowy.debugSkradankowy_C.Construct
struct UdebugSkradankowy_C_Construct_Params
{
};

// Function debugSkradankowy.debugSkradankowy_C.Tick
struct UdebugSkradankowy_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debugSkradankowy.debugSkradankowy_C.ExecuteUbergraph_debugSkradankowy
struct UdebugSkradankowy_C_ExecuteUbergraph_debugSkradankowy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
