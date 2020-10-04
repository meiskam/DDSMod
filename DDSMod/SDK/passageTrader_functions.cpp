
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

// Function passageTrader.passageTrader_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApassageTrader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function passageTrader.passageTrader_C.UserConstructionScript");

	ApassageTrader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function passageTrader.passageTrader_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApassageTrader_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function passageTrader.passageTrader_C.ReceiveBeginPlay");

	ApassageTrader_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function passageTrader.passageTrader_C.updatePrice
// (BlueprintCallable, BlueprintEvent)

void ApassageTrader_C::updatePrice()
{
	static auto fn = UObject::FindObject<UFunction>("Function passageTrader.passageTrader_C.updatePrice");

	ApassageTrader_C_updatePrice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function passageTrader.passageTrader_C.ExecuteUbergraph_passageTrader
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApassageTrader_C::ExecuteUbergraph_passageTrader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function passageTrader.passageTrader_C.ExecuteUbergraph_passageTrader");

	ApassageTrader_C_ExecuteUbergraph_passageTrader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
