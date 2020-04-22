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

// Function mixListWidget.mixListWidget_C.setup
struct UmixListWidget_C_setup_Params
{
	struct FText                                       Substance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalMass;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mixListWidget.mixListWidget_C.ExecuteUbergraph_mixListWidget
struct UmixListWidget_C_ExecuteUbergraph_mixListWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
