
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

// Function confirmDumpContent.confirmDumpContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UconfirmDumpContent_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.Construct");

	UconfirmDumpContent_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmDumpContent.confirmDumpContent_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AworkStationEquipmentBase_C* EqName                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UconfirmDumpContent_C::setup(class AworkStationEquipmentBase_C* EqName)
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.setup");

	UconfirmDumpContent_C_setup_Params params;
	params.EqName = EqName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmDumpContent.confirmDumpContent_C.Countdown
// (BlueprintCallable, BlueprintEvent)

void UconfirmDumpContent_C::Countdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.Countdown");

	UconfirmDumpContent_C_Countdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmDumpContent.confirmDumpContent_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UconfirmDumpContent_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UconfirmDumpContent_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmDumpContent.confirmDumpContent_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UconfirmDumpContent_C::BndEvt__btnConfirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UconfirmDumpContent_C_BndEvt__btnConfirm_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmDumpContent.confirmDumpContent_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UconfirmDumpContent_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.killMe");

	UconfirmDumpContent_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function confirmDumpContent.confirmDumpContent_C.ExecuteUbergraph_confirmDumpContent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UconfirmDumpContent_C::ExecuteUbergraph_confirmDumpContent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function confirmDumpContent.confirmDumpContent_C.ExecuteUbergraph_confirmDumpContent");

	UconfirmDumpContent_C_ExecuteUbergraph_confirmDumpContent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
