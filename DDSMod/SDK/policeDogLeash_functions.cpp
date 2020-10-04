
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function policeDogLeash.policeDogLeash_C.reconstructReferences
// (Public, BlueprintCallable, BlueprintEvent)

void ApoliceDogLeash_C::reconstructReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogLeash.policeDogLeash_C.reconstructReferences");

	ApoliceDogLeash_C_reconstructReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDogLeash.policeDogLeash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApoliceDogLeash_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogLeash.policeDogLeash_C.UserConstructionScript");

	ApoliceDogLeash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDogLeash.policeDogLeash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApoliceDogLeash_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogLeash.policeDogLeash_C.ReceiveBeginPlay");

	ApoliceDogLeash_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDogLeash.policeDogLeash_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceDogLeash_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogLeash.policeDogLeash_C.ReceiveTick");

	ApoliceDogLeash_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDogLeash.policeDogLeash_C.checkPositioning
// (BlueprintCallable, BlueprintEvent)

void ApoliceDogLeash_C::checkPositioning()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogLeash.policeDogLeash_C.checkPositioning");

	ApoliceDogLeash_C_checkPositioning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDogLeash.policeDogLeash_C.ExecuteUbergraph_policeDogLeash
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceDogLeash_C::ExecuteUbergraph_policeDogLeash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDogLeash.policeDogLeash_C.ExecuteUbergraph_policeDogLeash");

	ApoliceDogLeash_C_ExecuteUbergraph_policeDogLeash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
