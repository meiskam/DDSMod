
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

// Function deaBustedScreenWidget.deaBustedScreenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UdeaBustedScreenWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaBustedScreenWidget.deaBustedScreenWidget_C.Construct");

	UdeaBustedScreenWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaBustedScreenWidget.deaBustedScreenWidget_C.showGameOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Reason                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UdeaBustedScreenWidget_C::showGameOver(const struct FText& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaBustedScreenWidget.deaBustedScreenWidget_C.showGameOver");

	UdeaBustedScreenWidget_C_showGameOver_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaBustedScreenWidget.deaBustedScreenWidget_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdeaBustedScreenWidget_C::BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaBustedScreenWidget.deaBustedScreenWidget_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UdeaBustedScreenWidget_C_BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaBustedScreenWidget.deaBustedScreenWidget_C.ExecuteUbergraph_deaBustedScreenWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdeaBustedScreenWidget_C::ExecuteUbergraph_deaBustedScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaBustedScreenWidget.deaBustedScreenWidget_C.ExecuteUbergraph_deaBustedScreenWidget");

	UdeaBustedScreenWidget_C_ExecuteUbergraph_deaBustedScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
