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

// Function newDayWidget.newDayWidget_C.Construct
struct UnewDayWidget_C_Construct_Params
{
};

// Function newDayWidget.newDayWidget_C.setup
struct UnewDayWidget_C_setup_Params
{
	struct FText                                       DayNam;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function newDayWidget.newDayWidget_C.ExecuteUbergraph_newDayWidget
struct UnewDayWidget_C_ExecuteUbergraph_newDayWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
