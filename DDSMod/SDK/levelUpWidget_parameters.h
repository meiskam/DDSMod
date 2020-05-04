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

// Function levelUpWidget.levelUpWidget_C.Construct
struct UlevelUpWidget_C_Construct_Params
{
};

// Function levelUpWidget.levelUpWidget_C.Tick
struct UlevelUpWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function levelUpWidget.levelUpWidget_C.setup
struct UlevelUpWidget_C_setup_Params
{
	int                                                NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function levelUpWidget.levelUpWidget_C.ExecuteUbergraph_levelUpWidget
struct UlevelUpWidget_C_ExecuteUbergraph_levelUpWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
