
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

// Function splinePath.splinePath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsplinePath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function splinePath.splinePath_C.UserConstructionScript");

	AsplinePath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function splinePath.splinePath_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsplinePath_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function splinePath.splinePath_C.ReceiveBeginPlay");

	AsplinePath_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function splinePath.splinePath_C.ExecuteUbergraph_splinePath
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsplinePath_C::ExecuteUbergraph_splinePath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function splinePath.splinePath_C.ExecuteUbergraph_splinePath");

	AsplinePath_C_ExecuteUbergraph_splinePath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
