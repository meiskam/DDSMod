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

// Function worldMapMarker.worldMapMarker_C.UserConstructionScript
struct AworldMapMarker_C_UserConstructionScript_Params
{
};

// Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay
struct AworldMapMarker_C_ReceiveBeginPlay_Params
{
};

// Function worldMapMarker.worldMapMarker_C.setup
struct AworldMapMarker_C_setup_Params
{
	TEnumAsByte<EmapMarkerCategories>                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ToolTip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               dealer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TaskID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldMapMarker.worldMapMarker_C.checkTaskEnded
struct AworldMapMarker_C_checkTaskEnded_Params
{
};

// Function worldMapMarker.worldMapMarker_C.reInitialise
struct AworldMapMarker_C_reInitialise_Params
{
};

// Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker
struct AworldMapMarker_C_ExecuteUbergraph_worldMapMarker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
