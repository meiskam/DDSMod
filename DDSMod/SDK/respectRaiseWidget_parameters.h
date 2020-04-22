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

// Function respectRaiseWidget.respectRaiseWidget_C.Construct
struct UrespectRaiseWidget_C_Construct_Params
{
};

// Function respectRaiseWidget.respectRaiseWidget_C.Tick
struct UrespectRaiseWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function respectRaiseWidget.respectRaiseWidget_C.setup
struct UrespectRaiseWidget_C_setup_Params
{
	float                                              respAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       areaNam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              respectNow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              respectAfter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              respectMax;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function respectRaiseWidget.respectRaiseWidget_C.ExecuteUbergraph_respectRaiseWidget
struct UrespectRaiseWidget_C_ExecuteUbergraph_respectRaiseWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
