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

// Function introCreditsWidget.introCreditsWidget_C.Construct
struct UintroCreditsWidget_C_Construct_Params
{
};

// Function introCreditsWidget.introCreditsWidget_C.setup
struct UintroCreditsWidget_C_setup_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Person;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Company;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function introCreditsWidget.introCreditsWidget_C.ExecuteUbergraph_introCreditsWidget
struct UintroCreditsWidget_C_ExecuteUbergraph_introCreditsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
