/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommWarningBar.shadyCommWarningBar_C.Get_mainCanvas_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UshadyCommWarningBar_C::Get_mainCanvas_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.Get_mainCanvas_ToolTipWidget_1");
		
		UshadyCommWarningBar_C_Get_mainCanvas_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommWarningBar.shadyCommWarningBar_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UshadyCommWarningBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.Construct");
		
		UshadyCommWarningBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommWarningBar.shadyCommWarningBar_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Content                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ToolTip                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UshadyCommWarningBar_C::Setup(const class FText& Content, const class FText& ToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.Setup");
		
		UshadyCommWarningBar_C_Setup_Params params {};
		params.Content = Content;
		params.ToolTip = ToolTip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommWarningBar.shadyCommWarningBar_C.playPing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UshadyCommWarningBar_C::playPing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.playPing");
		
		UshadyCommWarningBar_C_playPing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UshadyCommWarningBar_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseEnter");
		
		UshadyCommWarningBar_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UshadyCommWarningBar_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.OnMouseLeave");
		
		UshadyCommWarningBar_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommWarningBar.shadyCommWarningBar_C.ExecuteUbergraph_shadyCommWarningBar
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommWarningBar_C::ExecuteUbergraph_shadyCommWarningBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommWarningBar.shadyCommWarningBar_C.ExecuteUbergraph_shadyCommWarningBar");
		
		UshadyCommWarningBar_C_ExecuteUbergraph_shadyCommWarningBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UshadyCommWarningBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UshadyCommWarningBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass shadyCommWarningBar.shadyCommWarningBar_C");
		return ptr;
	}

}


