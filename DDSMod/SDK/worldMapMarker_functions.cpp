
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

// Function worldMapMarker.worldMapMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AworldMapMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.UserConstructionScript");

	AworldMapMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AworldMapMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay");

	AworldMapMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EmapMarkerCategories> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ToolTip                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Dealer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            taskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldMapMarker_C::setup(TEnumAsByte<EmapMarkerCategories> Category, const struct FText& Name, const struct FText& ToolTip, bool Dealer, int taskID)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.setup");

	AworldMapMarker_C_setup_Params params;
	params.Category = Category;
	params.Name = Name;
	params.ToolTip = ToolTip;
	params.Dealer = Dealer;
	params.taskID = taskID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.checkTaskEnded
// (BlueprintCallable, BlueprintEvent)

void AworldMapMarker_C::checkTaskEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.checkTaskEnded");

	AworldMapMarker_C_checkTaskEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.ReInitialise
// (BlueprintCallable, BlueprintEvent)

void AworldMapMarker_C::ReInitialise()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.ReInitialise");

	AworldMapMarker_C_ReInitialise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.recalcWaitTime
// (BlueprintCallable, BlueprintEvent)

void AworldMapMarker_C::recalcWaitTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.recalcWaitTime");

	AworldMapMarker_C_recalcWaitTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldMapMarker_C::ExecuteUbergraph_worldMapMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker");

	AworldMapMarker_C_ExecuteUbergraph_worldMapMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
