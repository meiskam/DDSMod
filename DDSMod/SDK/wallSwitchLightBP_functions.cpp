
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

// Function wallSwitchLightBP.wallSwitchLightBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.UserConstructionScript");

	AwallSwitchLightBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AwallSwitchLightBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.ReceiveBeginPlay");

	AwallSwitchLightBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.activateSwitch
// (BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::activateSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.activateSwitch");

	AwallSwitchLightBP_C_activateSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.checkDistance
// (BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::checkDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.checkDistance");

	AwallSwitchLightBP_C_checkDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.resetMe
// (BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::resetMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.resetMe");

	AwallSwitchLightBP_C_resetMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.drawCheck
// (BlueprintCallable, BlueprintEvent)

void AwallSwitchLightBP_C::drawCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.drawCheck");

	AwallSwitchLightBP_C_drawCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSwitchLightBP.wallSwitchLightBP_C.ExecuteUbergraph_wallSwitchLightBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AwallSwitchLightBP_C::ExecuteUbergraph_wallSwitchLightBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSwitchLightBP.wallSwitchLightBP_C.ExecuteUbergraph_wallSwitchLightBP");

	AwallSwitchLightBP_C_ExecuteUbergraph_wallSwitchLightBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
