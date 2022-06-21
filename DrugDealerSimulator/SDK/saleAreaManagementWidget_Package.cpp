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
	 * 		Name   -> Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerSetAreaVisuals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BorderOpacity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 BorderColor                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsaleAreaManagementWidget_C::markerSetAreaVisuals(float BorderOpacity, const struct FSlateColor& BorderColor, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerSetAreaVisuals");
		
		UsaleAreaManagementWidget_C_markerSetAreaVisuals_Params params {};
		params.BorderOpacity = BorderOpacity;
		params.BorderColor = BorderColor;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerHoverAction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsaleAreaManagementWidget_C::markerHoverAction(int32_t Index, class UTexture2D* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerHoverAction");
		
		UsaleAreaManagementWidget_C_markerHoverAction_Params params {};
		params.Index = Index;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saleAreaManagementWidget.saleAreaManagementWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UsaleAreaManagementWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.Construct");
		
		UsaleAreaManagementWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saleAreaManagementWidget.saleAreaManagementWidget_C.BndEvt__btnChangeSpray_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UsaleAreaManagementWidget_C::BndEvt__btnChangeSpray_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.BndEvt__btnChangeSpray_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UsaleAreaManagementWidget_C_BndEvt__btnChangeSpray_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saleAreaManagementWidget.saleAreaManagementWidget_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UsaleAreaManagementWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.Destruct");
		
		UsaleAreaManagementWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saleAreaManagementWidget.saleAreaManagementWidget_C.ExecuteUbergraph_saleAreaManagementWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsaleAreaManagementWidget_C::ExecuteUbergraph_saleAreaManagementWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.ExecuteUbergraph_saleAreaManagementWidget");
		
		UsaleAreaManagementWidget_C_ExecuteUbergraph_saleAreaManagementWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UsaleAreaManagementWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UsaleAreaManagementWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass saleAreaManagementWidget.saleAreaManagementWidget_C");
		return ptr;
	}

}


