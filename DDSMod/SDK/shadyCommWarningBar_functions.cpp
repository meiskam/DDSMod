
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

// Function shadyCommWarningBar.shadyCommWarningBar_C.Get_mainCanvas_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UshadyCommWarningBar_C::Get_mainCanvas_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.Get_mainCanvas_ToolTipWidget_1");

	UshadyCommWarningBar_C_Get_mainCanvas_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function shadyCommWarningBar.shadyCommWarningBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UshadyCommWarningBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.Construct");

	UshadyCommWarningBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommWarningBar.shadyCommWarningBar_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Content                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ToolTip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UshadyCommWarningBar_C::setup(const struct FText& Content, const struct FText& ToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.setup");

	UshadyCommWarningBar_C_setup_Params params;
	params.Content = Content;
	params.ToolTip = ToolTip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommWarningBar.shadyCommWarningBar_C.playPing
// (BlueprintCallable, BlueprintEvent)

void UshadyCommWarningBar_C::playPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.playPing");

	UshadyCommWarningBar_C_playPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UshadyCommWarningBar_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseEnter");

	UshadyCommWarningBar_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UshadyCommWarningBar_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseLeave");

	UshadyCommWarningBar_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyCommWarningBar.shadyCommWarningBar_C.ExecuteUbergraph_shadyCommWarningBar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyCommWarningBar_C::ExecuteUbergraph_shadyCommWarningBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.ExecuteUbergraph_shadyCommWarningBar");

	UshadyCommWarningBar_C_ExecuteUbergraph_shadyCommWarningBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
