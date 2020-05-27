
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function worldMapUI_Marker.worldMapUI_Marker_C.checkAreaUnlocked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           unlocked                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UworldMapUI_Marker_C::checkAreaUnlocked(bool* unlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapUI_Marker.worldMapUI_Marker_C.checkAreaUnlocked");

	UworldMapUI_Marker_C_checkAreaUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (unlocked != nullptr)
		*unlocked = params.unlocked;
}


// Function worldMapUI_Marker.worldMapUI_Marker_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UworldMapUI_Marker_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapUI_Marker.worldMapUI_Marker_C.OnMouseButtonDoubleClick");

	UworldMapUI_Marker_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function worldMapUI_Marker.worldMapUI_Marker_C.Get_mainCanvas_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UworldMapUI_Marker_C::Get_mainCanvas_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapUI_Marker.worldMapUI_Marker_C.Get_mainCanvas_ToolTipWidget_1");

	UworldMapUI_Marker_C_Get_mainCanvas_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function worldMapUI_Marker.worldMapUI_Marker_C.Get_mainCanvas_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UworldMapUI_Marker_C::Get_mainCanvas_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapUI_Marker.worldMapUI_Marker_C.Get_mainCanvas_bIsEnabled_1");

	UworldMapUI_Marker_C_Get_mainCanvas_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function worldMapUI_Marker.worldMapUI_Marker_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MarkerName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EmapMarkerCategories> MarkerType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               basePos                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ToolTip                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           dealer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AreaString                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UworldMapUI_Marker_C::setup(const struct FText& MarkerName, TEnumAsByte<EmapMarkerCategories> MarkerType, const struct FVector2D& basePos, const struct FText& ToolTip, bool dealer, const struct FString& AreaString)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapUI_Marker.worldMapUI_Marker_C.setup");

	UworldMapUI_Marker_C_setup_Params params;
	params.MarkerName = MarkerName;
	params.MarkerType = MarkerType;
	params.basePos = basePos;
	params.ToolTip = ToolTip;
	params.dealer = dealer;
	params.AreaString = AreaString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapUI_Marker.worldMapUI_Marker_C.ExecuteUbergraph_worldMapUI_Marker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworldMapUI_Marker_C::ExecuteUbergraph_worldMapUI_Marker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapUI_Marker.worldMapUI_Marker_C.ExecuteUbergraph_worldMapUI_Marker");

	UworldMapUI_Marker_C_ExecuteUbergraph_worldMapUI_Marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
