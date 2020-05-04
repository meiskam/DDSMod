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

// Function tutorialTipWidget.tutorialTipWidget_C.Construct
struct UtutorialTipWidget_C_Construct_Params
{
};

// Function tutorialTipWidget.tutorialTipWidget_C.setup
struct UtutorialTipWidget_C_setup_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function tutorialTipWidget.tutorialTipWidget_C.ExecuteUbergraph_tutorialTipWidget
struct UtutorialTipWidget_C_ExecuteUbergraph_tutorialTipWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
