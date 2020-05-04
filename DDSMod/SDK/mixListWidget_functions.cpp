
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function mixListWidget.mixListWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Substance                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          totalMass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmixListWidget_C::setup(const struct FText& Substance, float Quantity, float totalMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function mixListWidget.mixListWidget_C.setup");

	UmixListWidget_C_setup_Params params;
	params.Substance = Substance;
	params.Quantity = Quantity;
	params.totalMass = totalMass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mixListWidget.mixListWidget_C.ExecuteUbergraph_mixListWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UmixListWidget_C::ExecuteUbergraph_mixListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mixListWidget.mixListWidget_C.ExecuteUbergraph_mixListWidget");

	UmixListWidget_C_ExecuteUbergraph_mixListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
