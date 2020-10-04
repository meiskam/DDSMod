
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

// Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdealerCashTransactionDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.UserConstructionScript");

	AdealerCashTransactionDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdealerCashTransactionDialogue_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.ReceiveBeginPlay");

	AdealerCashTransactionDialogue_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.giveMoney
// (BlueprintCallable, BlueprintEvent)

void AdealerCashTransactionDialogue_C::giveMoney()
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.giveMoney");

	AdealerCashTransactionDialogue_C_giveMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.ExecuteUbergraph_dealerCashTransactionDialogue
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdealerCashTransactionDialogue_C::ExecuteUbergraph_dealerCashTransactionDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dealerCashTransactionDialogue.dealerCashTransactionDialogue_C.ExecuteUbergraph_dealerCashTransactionDialogue");

	AdealerCashTransactionDialogue_C_ExecuteUbergraph_dealerCashTransactionDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
