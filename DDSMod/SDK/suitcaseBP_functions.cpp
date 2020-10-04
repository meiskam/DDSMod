
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

// Function suitcaseBP.suitcaseBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsuitcaseBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function suitcaseBP.suitcaseBP_C.UserConstructionScript");

	AsuitcaseBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function suitcaseBP.suitcaseBP_C.putMoney
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsuitcaseBP_C::putMoney(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function suitcaseBP.suitcaseBP_C.putMoney");

	AsuitcaseBP_C_putMoney_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function suitcaseBP.suitcaseBP_C.ExecuteUbergraph_suitcaseBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsuitcaseBP_C::ExecuteUbergraph_suitcaseBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function suitcaseBP.suitcaseBP_C.ExecuteUbergraph_suitcaseBP");

	AsuitcaseBP_C_ExecuteUbergraph_suitcaseBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
