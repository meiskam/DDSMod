
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function neededDrugWidget.neededDrugWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdrugData               drugData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UneededDrugWidget_C::setup(const struct FdrugData& drugData, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function neededDrugWidget.neededDrugWidget_C.setup");

	UneededDrugWidget_C_setup_Params params;
	params.drugData = drugData;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function neededDrugWidget.neededDrugWidget_C.ExecuteUbergraph_neededDrugWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UneededDrugWidget_C::ExecuteUbergraph_neededDrugWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function neededDrugWidget.neededDrugWidget_C.ExecuteUbergraph_neededDrugWidget");

	UneededDrugWidget_C_ExecuteUbergraph_neededDrugWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
