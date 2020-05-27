
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

// Function appartmentWallPicker.appartmentWallPicker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AappartmentWallPicker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.UserConstructionScript");

	AappartmentWallPicker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentWallPicker.appartmentWallPicker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AappartmentWallPicker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.ReceiveBeginPlay");

	AappartmentWallPicker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentWallPicker.appartmentWallPicker_C.highlightAppartment
// (BlueprintCallable, BlueprintEvent)

void AappartmentWallPicker_C::highlightAppartment()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.highlightAppartment");

	AappartmentWallPicker_C_highlightAppartment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentWallPicker.appartmentWallPicker_C.disableHighlight
// (BlueprintCallable, BlueprintEvent)

void AappartmentWallPicker_C::disableHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.disableHighlight");

	AappartmentWallPicker_C_disableHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentWallPicker.appartmentWallPicker_C.ExecuteUbergraph_appartmentWallPicker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AappartmentWallPicker_C::ExecuteUbergraph_appartmentWallPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentWallPicker.appartmentWallPicker_C.ExecuteUbergraph_appartmentWallPicker");

	AappartmentWallPicker_C_ExecuteUbergraph_appartmentWallPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
