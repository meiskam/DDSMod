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

// Function plantStasWidget.plantStasWidget_C.Construct
struct UplantStasWidget_C_Construct_Params
{
};

// Function plantStasWidget.plantStasWidget_C.Tick
struct UplantStasWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function plantStasWidget.plantStasWidget_C.setup
struct UplantStasWidget_C_setup_Params
{
	class AweedPlantBP_C*                              PlantRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function plantStasWidget.plantStasWidget_C.updateMe
struct UplantStasWidget_C_updateMe_Params
{
};

// Function plantStasWidget.plantStasWidget_C.ExecuteUbergraph_plantStasWidget
struct UplantStasWidget_C_ExecuteUbergraph_plantStasWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
