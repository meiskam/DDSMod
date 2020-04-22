
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

// Function millCoffeeElectric.millCoffeeElectric_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AmillCoffeeElectric_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function millCoffeeElectric.millCoffeeElectric_C.UserConstructionScript");

	AmillCoffeeElectric_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function millCoffeeElectric.millCoffeeElectric_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AmillCoffeeElectric_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function millCoffeeElectric.millCoffeeElectric_C.ReceiveBeginPlay");

	AmillCoffeeElectric_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function millCoffeeElectric.millCoffeeElectric_C.quantityChanged
// (Public, BlueprintCallable, BlueprintEvent)

void AmillCoffeeElectric_C::quantityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function millCoffeeElectric.millCoffeeElectric_C.quantityChanged");

	AmillCoffeeElectric_C_quantityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function millCoffeeElectric.millCoffeeElectric_C.ExecuteUbergraph_millCoffeeElectric
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmillCoffeeElectric_C::ExecuteUbergraph_millCoffeeElectric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function millCoffeeElectric.millCoffeeElectric_C.ExecuteUbergraph_millCoffeeElectric");

	AmillCoffeeElectric_C_ExecuteUbergraph_millCoffeeElectric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
