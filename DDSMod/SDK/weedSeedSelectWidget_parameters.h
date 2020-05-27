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

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.plantCurrentSeed
struct UweedSeedSelectWidget_C_plantCurrentSeed_Params
{
};

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.renderSeedList
struct UweedSeedSelectWidget_C_renderSeedList_Params
{
};

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.Tick
struct UweedSeedSelectWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.setup
struct UweedSeedSelectWidget_C_setup_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showIndoor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.scrolledUp
struct UweedSeedSelectWidget_C_scrolledUp_Params
{
};

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.scrolledDown
struct UweedSeedSelectWidget_C_scrolledDown_Params
{
};

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.actionDown
struct UweedSeedSelectWidget_C_actionDown_Params
{
};

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.actionUp
struct UweedSeedSelectWidget_C_actionUp_Params
{
};

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.resetPlant
struct UweedSeedSelectWidget_C_resetPlant_Params
{
};

// Function weedSeedSelectWidget.weedSeedSelectWidget_C.ExecuteUbergraph_weedSeedSelectWidget
struct UweedSeedSelectWidget_C_ExecuteUbergraph_weedSeedSelectWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
