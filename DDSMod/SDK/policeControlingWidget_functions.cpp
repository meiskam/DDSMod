
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function policeControlingWidget.policeControlingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UpoliceControlingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeControlingWidget.policeControlingWidget_C.Construct");

	UpoliceControlingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeControlingWidget.policeControlingWidget_C.ToggleVisibility
// (BlueprintCallable, BlueprintEvent)

void UpoliceControlingWidget_C::ToggleVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeControlingWidget.policeControlingWidget_C.ToggleVisibility");

	UpoliceControlingWidget_C_ToggleVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeControlingWidget.policeControlingWidget_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UpoliceControlingWidget_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeControlingWidget.policeControlingWidget_C.killMe");

	UpoliceControlingWidget_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeControlingWidget.policeControlingWidget_C.ExecuteUbergraph_policeControlingWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpoliceControlingWidget_C::ExecuteUbergraph_policeControlingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeControlingWidget.policeControlingWidget_C.ExecuteUbergraph_policeControlingWidget");

	UpoliceControlingWidget_C_ExecuteUbergraph_policeControlingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
