
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

// Function compassMarkerWidget.compassMarkerWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EmapMarkerCategories> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcompassMarkerWidget_C::setup(TEnumAsByte<EmapMarkerCategories> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function compassMarkerWidget.compassMarkerWidget_C.setup");

	UcompassMarkerWidget_C_setup_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function compassMarkerWidget.compassMarkerWidget_C.UpdateDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcompassMarkerWidget_C::UpdateDistance(float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function compassMarkerWidget.compassMarkerWidget_C.UpdateDistance");

	UcompassMarkerWidget_C_UpdateDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function compassMarkerWidget.compassMarkerWidget_C.ExecuteUbergraph_compassMarkerWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcompassMarkerWidget_C::ExecuteUbergraph_compassMarkerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function compassMarkerWidget.compassMarkerWidget_C.ExecuteUbergraph_compassMarkerWidget");

	UcompassMarkerWidget_C_ExecuteUbergraph_compassMarkerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
