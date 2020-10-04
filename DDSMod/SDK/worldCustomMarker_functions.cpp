
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function worldCustomMarker.worldCustomMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AworldCustomMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldCustomMarker.worldCustomMarker_C.UserConstructionScript");

	AworldCustomMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldCustomMarker.worldCustomMarker_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AworldCustomMarker_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function worldCustomMarker.worldCustomMarker_C.ReceiveDestroyed");

	AworldCustomMarker_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function worldCustomMarker.worldCustomMarker_C.ExecuteUbergraph_worldCustomMarker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworldCustomMarker_C::ExecuteUbergraph_worldCustomMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function worldCustomMarker.worldCustomMarker_C.ExecuteUbergraph_worldCustomMarker");

	AworldCustomMarker_C_ExecuteUbergraph_worldCustomMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
