#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function worldMapWidget.worldMapWidget_C.OnMouseButtonDoubleClick
struct UworldMapWidget_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function worldMapWidget.worldMapWidget_C.adjustMarkersToMap
struct UworldMapWidget_C_adjustMarkersToMap_Params
{
};

// Function worldMapWidget.worldMapWidget_C.OnMouseButtonUp
struct UworldMapWidget_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function worldMapWidget.worldMapWidget_C.OnMouseButtonDown
struct UworldMapWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function worldMapWidget.worldMapWidget_C.Construct
struct UworldMapWidget_C_Construct_Params
{
};

// Function worldMapWidget.worldMapWidget_C.Tick
struct UworldMapWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldMapWidget.worldMapWidget_C.setPlayerMarker
struct UworldMapWidget_C_setPlayerMarker_Params
{
};

// Function worldMapWidget.worldMapWidget_C.renderMapMarkers
struct UworldMapWidget_C_renderMapMarkers_Params
{
};

// Function worldMapWidget.worldMapWidget_C.killMap
struct UworldMapWidget_C_killMap_Params
{
};

// Function worldMapWidget.worldMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UworldMapWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function worldMapWidget.worldMapWidget_C.AddSingleMarker
struct UworldMapWidget_C_AddSingleMarker_Params
{
	class AworldMapMarker_C*                           MarkerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldMapWidget.worldMapWidget_C.mapZoomIn
struct UworldMapWidget_C_mapZoomIn_Params
{
};

// Function worldMapWidget.worldMapWidget_C.mapZoomOut
struct UworldMapWidget_C_mapZoomOut_Params
{
};

// Function worldMapWidget.worldMapWidget_C.ExecuteUbergraph_worldMapWidget
struct UworldMapWidget_C_ExecuteUbergraph_worldMapWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
