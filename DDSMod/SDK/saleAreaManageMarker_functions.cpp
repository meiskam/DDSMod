
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function saleAreaManageMarker.saleAreaManageMarker_C.setParentReference
// (Public, BlueprintCallable, BlueprintEvent)

void UsaleAreaManageMarker_C::setParentReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.setParentReference");

	UsaleAreaManageMarker_C_setParentReference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManageMarker.saleAreaManageMarker_C.Get_alertIcon_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UsaleAreaManageMarker_C::Get_alertIcon_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.Get_alertIcon_ToolTipWidget_1");

	UsaleAreaManageMarker_C_Get_alertIcon_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function saleAreaManageMarker.saleAreaManageMarker_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UsaleAreaManageMarker_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.OnMouseButtonDown");

	UsaleAreaManageMarker_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function saleAreaManageMarker.saleAreaManageMarker_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UsaleAreaManageMarker_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.OnMouseEnter");

	UsaleAreaManageMarker_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManageMarker.saleAreaManageMarker_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UsaleAreaManageMarker_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.OnMouseLeave");

	UsaleAreaManageMarker_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManageMarker.saleAreaManageMarker_C.BndEvt__btnUnlockArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UsaleAreaManageMarker_C::BndEvt__btnUnlockArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.BndEvt__btnUnlockArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UsaleAreaManageMarker_C_BndEvt__btnUnlockArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManageMarker.saleAreaManageMarker_C.reInitiate
// (BlueprintCallable, BlueprintEvent)

void UsaleAreaManageMarker_C::reInitiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.reInitiate");

	UsaleAreaManageMarker_C_reInitiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManageMarker.saleAreaManageMarker_C.updateProgressBar
// (BlueprintCallable, BlueprintEvent)

void UsaleAreaManageMarker_C::updateProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.updateProgressBar");

	UsaleAreaManageMarker_C_updateProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManageMarker.saleAreaManageMarker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UsaleAreaManageMarker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.Construct");

	UsaleAreaManageMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManageMarker.saleAreaManageMarker_C.ExecuteUbergraph_saleAreaManageMarker
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaleAreaManageMarker_C::ExecuteUbergraph_saleAreaManageMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManageMarker.saleAreaManageMarker_C.ExecuteUbergraph_saleAreaManageMarker");

	UsaleAreaManageMarker_C_ExecuteUbergraph_saleAreaManageMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
