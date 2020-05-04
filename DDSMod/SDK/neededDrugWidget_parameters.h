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

// Function neededDrugWidget.neededDrugWidget_C.setup
struct UneededDrugWidget_C_setup_Params
{
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function neededDrugWidget.neededDrugWidget_C.ExecuteUbergraph_neededDrugWidget
struct UneededDrugWidget_C_ExecuteUbergraph_neededDrugWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
