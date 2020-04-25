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

// Function mapMarkerWidget.mapMarkerWidget_C.Construct
struct UmapMarkerWidget_C_Construct_Params
{
};

// Function mapMarkerWidget.mapMarkerWidget_C.Tick
struct UmapMarkerWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mapMarkerWidget.mapMarkerWidget_C.checkDistance
struct UmapMarkerWidget_C_checkDistance_Params
{
};

// Function mapMarkerWidget.mapMarkerWidget_C.ExecuteUbergraph_mapMarkerWidget
struct UmapMarkerWidget_C_ExecuteUbergraph_mapMarkerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
