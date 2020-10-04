
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

// Function lightDistanceDisabler.lightDistanceDisabler_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlightDistanceDisabler_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightDistanceDisabler.lightDistanceDisabler_C.UserConstructionScript");

	AlightDistanceDisabler_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightDistanceDisabler.lightDistanceDisabler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlightDistanceDisabler_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightDistanceDisabler.lightDistanceDisabler_C.ReceiveBeginPlay");

	AlightDistanceDisabler_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightDistanceDisabler.lightDistanceDisabler_C.checkDistance
// (BlueprintCallable, BlueprintEvent)

void AlightDistanceDisabler_C::checkDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightDistanceDisabler.lightDistanceDisabler_C.checkDistance");

	AlightDistanceDisabler_C_checkDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightDistanceDisabler.lightDistanceDisabler_C.ExecuteUbergraph_lightDistanceDisabler
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlightDistanceDisabler_C::ExecuteUbergraph_lightDistanceDisabler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lightDistanceDisabler.lightDistanceDisabler_C.ExecuteUbergraph_lightDistanceDisabler");

	AlightDistanceDisabler_C_ExecuteUbergraph_lightDistanceDisabler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
