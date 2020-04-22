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

// Function lockpickWidget.lockpickWidget_C.compareAngles
struct UlockpickWidget_C_compareAngles_Params
{
	bool                                               aligned;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lockpickWidget.lockpickWidget_C.Construct
struct UlockpickWidget_C_Construct_Params
{
};

// Function lockpickWidget.lockpickWidget_C.Tick
struct UlockpickWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lockpickWidget.lockpickWidget_C.MouseY
struct UlockpickWidget_C_MouseY_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lockpickWidget.lockpickWidget_C.MouseX
struct UlockpickWidget_C_MouseX_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lockpickWidget.lockpickWidget_C.resetCircle
struct UlockpickWidget_C_resetCircle_Params
{
};

// Function lockpickWidget.lockpickWidget_C.unlockStep
struct UlockpickWidget_C_unlockStep_Params
{
};

// Function lockpickWidget.lockpickWidget_C.changeRotTempo
struct UlockpickWidget_C_changeRotTempo_Params
{
};

// Function lockpickWidget.lockpickWidget_C.updateAlignment
struct UlockpickWidget_C_updateAlignment_Params
{
};

// Function lockpickWidget.lockpickWidget_C.ExecuteUbergraph_lockpickWidget
struct UlockpickWidget_C_ExecuteUbergraph_lockpickWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
