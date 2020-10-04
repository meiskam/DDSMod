
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function worldMapWidget.worldMapWidget_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UworldMapWidget_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.OnMouseButtonDoubleClick");

	UworldMapWidget_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function worldMapWidget.worldMapWidget_C.adjustMarkersToMap
// (Public, BlueprintCallable, BlueprintEvent)

void UworldMapWidget_C::adjustMarkersToMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.adjustMarkersToMap");

	UworldMapWidget_C_adjustMarkersToMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UworldMapWidget_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.OnMouseButtonUp");

	UworldMapWidget_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function worldMapWidget.worldMapWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UworldMapWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.OnMouseButtonDown");

	UworldMapWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function worldMapWidget.worldMapWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UworldMapWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.Construct");

	UworldMapWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworldMapWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.Tick");

	UworldMapWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.setPlayerMarker
// (BlueprintCallable, BlueprintEvent)

void UworldMapWidget_C::setPlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.setPlayerMarker");

	UworldMapWidget_C_setPlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.renderMapMarkers
// (BlueprintCallable, BlueprintEvent)

void UworldMapWidget_C::renderMapMarkers()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.renderMapMarkers");

	UworldMapWidget_C_renderMapMarkers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.killMap
// (BlueprintCallable, BlueprintEvent)

void UworldMapWidget_C::killMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.killMap");

	UworldMapWidget_C_killMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UworldMapWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UworldMapWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.AddSingleMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AworldMapMarker_C*       MarkerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworldMapWidget_C::AddSingleMarker(class AworldMapMarker_C* MarkerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.AddSingleMarker");

	UworldMapWidget_C_AddSingleMarker_Params params;
	params.MarkerRef = MarkerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.mapZoomIn
// (BlueprintCallable, BlueprintEvent)

void UworldMapWidget_C::mapZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.mapZoomIn");

	UworldMapWidget_C_mapZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.mapZoomOut
// (BlueprintCallable, BlueprintEvent)

void UworldMapWidget_C::mapZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.mapZoomOut");

	UworldMapWidget_C_mapZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapWidget.worldMapWidget_C.ExecuteUbergraph_worldMapWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworldMapWidget_C::ExecuteUbergraph_worldMapWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapWidget.worldMapWidget_C.ExecuteUbergraph_worldMapWidget");

	UworldMapWidget_C_ExecuteUbergraph_worldMapWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
