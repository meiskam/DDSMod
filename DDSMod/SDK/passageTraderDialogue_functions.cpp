
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

// Function passageTraderDialogue.passageTraderDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApassageTraderDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.UserConstructionScript");

	ApassageTraderDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function passageTraderDialogue.passageTraderDialogue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApassageTraderDialogue_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.ReceiveBeginPlay");

	ApassageTraderDialogue_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function passageTraderDialogue.passageTraderDialogue_C.openHatch
// (BlueprintCallable, BlueprintEvent)

void ApassageTraderDialogue_C::openHatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.openHatch");

	ApassageTraderDialogue_C_openHatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function passageTraderDialogue.passageTraderDialogue_C.checkPlayerCash
// (BlueprintCallable, BlueprintEvent)

void ApassageTraderDialogue_C::checkPlayerCash()
{
	static auto fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.checkPlayerCash");

	ApassageTraderDialogue_C_checkPlayerCash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function passageTraderDialogue.passageTraderDialogue_C.ExecuteUbergraph_passageTraderDialogue
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApassageTraderDialogue_C::ExecuteUbergraph_passageTraderDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function passageTraderDialogue.passageTraderDialogue_C.ExecuteUbergraph_passageTraderDialogue");

	ApassageTraderDialogue_C_ExecuteUbergraph_passageTraderDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
