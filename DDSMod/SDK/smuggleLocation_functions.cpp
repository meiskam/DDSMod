
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function smuggleLocation.smuggleLocation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsmuggleLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function smuggleLocation.smuggleLocation_C.UserConstructionScript");

	AsmuggleLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smuggleLocation.smuggleLocation_C.shipmentScript
// (BlueprintCallable, BlueprintEvent)

void AsmuggleLocation_C::shipmentScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function smuggleLocation.smuggleLocation_C.shipmentScript");

	AsmuggleLocation_C_shipmentScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smuggleLocation.smuggleLocation_C.ExecuteUbergraph_smuggleLocation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsmuggleLocation_C::ExecuteUbergraph_smuggleLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function smuggleLocation.smuggleLocation_C.ExecuteUbergraph_smuggleLocation");

	AsmuggleLocation_C_ExecuteUbergraph_smuggleLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
