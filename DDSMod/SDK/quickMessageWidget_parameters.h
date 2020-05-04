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

// Function quickMessageWidget.quickMessageWidget_C.Construct
struct UquickMessageWidget_C_Construct_Params
{
};

// Function quickMessageWidget.quickMessageWidget_C.setup
struct UquickMessageWidget_C_setup_Params
{
	struct FText                                       SetText;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function quickMessageWidget.quickMessageWidget_C.ExecuteUbergraph_quickMessageWidget
struct UquickMessageWidget_C_ExecuteUbergraph_quickMessageWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
