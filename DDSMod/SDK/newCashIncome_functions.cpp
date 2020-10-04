
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

// Function newCashIncome.newCashIncome_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UnewCashIncome_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function newCashIncome.newCashIncome_C.Construct");

	UnewCashIncome_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function newCashIncome.newCashIncome_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CashAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UnewCashIncome_C::setup(int CashAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function newCashIncome.newCashIncome_C.setup");

	UnewCashIncome_C_setup_Params params;
	params.CashAmount = CashAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function newCashIncome.newCashIncome_C.ExecuteUbergraph_newCashIncome
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UnewCashIncome_C::ExecuteUbergraph_newCashIncome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function newCashIncome.newCashIncome_C.ExecuteUbergraph_newCashIncome");

	UnewCashIncome_C_ExecuteUbergraph_newCashIncome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
