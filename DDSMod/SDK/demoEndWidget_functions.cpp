
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

// Function demoEndWidget.demoEndWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UdemoEndWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function demoEndWidget.demoEndWidget_C.Construct");

	UdemoEndWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function demoEndWidget.demoEndWidget_C.BndEvt__btnMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdemoEndWidget_C::BndEvt__btnMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function demoEndWidget.demoEndWidget_C.BndEvt__btnMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UdemoEndWidget_C_BndEvt__btnMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function demoEndWidget.demoEndWidget_C.ExecuteUbergraph_demoEndWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdemoEndWidget_C::ExecuteUbergraph_demoEndWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function demoEndWidget.demoEndWidget_C.ExecuteUbergraph_demoEndWidget");

	UdemoEndWidget_C_ExecuteUbergraph_demoEndWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
