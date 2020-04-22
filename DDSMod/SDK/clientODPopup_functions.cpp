
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function clientODPopup.clientODPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UclientODPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function clientODPopup.clientODPopup_C.Construct");

	UclientODPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clientODPopup.clientODPopup_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ClientName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ClientOverdoseDrug             (BlueprintVisible, BlueprintReadOnly, Parm)

void UclientODPopup_C::setup(const struct FText& ClientName, const struct FText& ClientOverdoseDrug)
{
	static auto fn = UObject::FindObject<UFunction>("Function clientODPopup.clientODPopup_C.setup");

	UclientODPopup_C_setup_Params params;
	params.ClientName = ClientName;
	params.ClientOverdoseDrug = ClientOverdoseDrug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clientODPopup.clientODPopup_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UclientODPopup_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function clientODPopup.clientODPopup_C.killMe");

	UclientODPopup_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clientODPopup.clientODPopup_C.ExecuteUbergraph_clientODPopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UclientODPopup_C::ExecuteUbergraph_clientODPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function clientODPopup.clientODPopup_C.ExecuteUbergraph_clientODPopup");

	UclientODPopup_C_ExecuteUbergraph_clientODPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
