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

// Function plantStatsWidget.plantStatsWidget_C.Construct
struct UplantStatsWidget_C_Construct_Params
{
};

// Function plantStatsWidget.plantStatsWidget_C.Tick
struct UplantStatsWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function plantStatsWidget.plantStatsWidget_C.setup
struct UplantStatsWidget_C_setup_Params
{
	class AweedPlantBP_C*                              PlantRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function plantStatsWidget.plantStatsWidget_C.updateMe
struct UplantStatsWidget_C_updateMe_Params
{
};

// Function plantStatsWidget.plantStatsWidget_C.Destruct
struct UplantStatsWidget_C_Destruct_Params
{
};

// Function plantStatsWidget.plantStatsWidget_C.ExecuteUbergraph_plantStatsWidget
struct UplantStatsWidget_C_ExecuteUbergraph_plantStatsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
