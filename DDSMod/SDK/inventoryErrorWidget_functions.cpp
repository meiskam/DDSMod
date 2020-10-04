
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

// Function inventoryErrorWidget.inventoryErrorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UinventoryErrorWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryErrorWidget.inventoryErrorWidget_C.Construct");

	UinventoryErrorWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryErrorWidget.inventoryErrorWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ErrorText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UinventoryErrorWidget_C::setup(const struct FText& ErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryErrorWidget.inventoryErrorWidget_C.setup");

	UinventoryErrorWidget_C_setup_Params params;
	params.ErrorText = ErrorText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryErrorWidget.inventoryErrorWidget_C.ExecuteUbergraph_inventoryErrorWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryErrorWidget_C::ExecuteUbergraph_inventoryErrorWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryErrorWidget.inventoryErrorWidget_C.ExecuteUbergraph_inventoryErrorWidget");

	UinventoryErrorWidget_C_ExecuteUbergraph_inventoryErrorWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
