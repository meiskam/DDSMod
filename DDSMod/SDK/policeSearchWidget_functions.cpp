
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

// Function policeSearchWidget.policeSearchWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UpoliceSearchWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeSearchWidget.policeSearchWidget_C.Construct");

	UpoliceSearchWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeSearchWidget.policeSearchWidget_C.ExecuteUbergraph_policeSearchWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpoliceSearchWidget_C::ExecuteUbergraph_policeSearchWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeSearchWidget.policeSearchWidget_C.ExecuteUbergraph_policeSearchWidget");

	UpoliceSearchWidget_C_ExecuteUbergraph_policeSearchWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
