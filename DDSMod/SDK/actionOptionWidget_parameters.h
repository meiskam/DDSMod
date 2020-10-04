#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function actionOptionWidget.actionOptionWidget_C.setup
struct UactionOptionWidget_C_setup_Params
{
	bool                                               InitActive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function actionOptionWidget.actionOptionWidget_C.SetActive
struct UactionOptionWidget_C_SetActive_Params
{
	bool                                               activated;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
