
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

// Function tooltipWidget.tooltipWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UtooltipWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function tooltipWidget.tooltipWidget_C.Construct");

	UtooltipWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tooltipWidget.tooltipWidget_C.ExecuteUbergraph_tooltipWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UtooltipWidget_C::ExecuteUbergraph_tooltipWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function tooltipWidget.tooltipWidget_C.ExecuteUbergraph_tooltipWidget");

	UtooltipWidget_C_ExecuteUbergraph_tooltipWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
