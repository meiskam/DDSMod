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
	 * 		Name   -> Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.getMaxQuantity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      targetString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            sourceQuan                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FinventoryItemStruct                        Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int32_t                                            maxQuantity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UfurnitureDropQuantityWidget_C::getMaxQuantity(const class FString& targetString, class UUserWidget* Widget, int32_t sourceQuan, const struct FinventoryItemStruct& Data, int32_t* maxQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.getMaxQuantity");
		
		UfurnitureDropQuantityWidget_C_getMaxQuantity_Params params {};
		params.targetString = targetString;
		params.Widget = Widget;
		params.sourceQuan = sourceQuan;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (maxQuantity != nullptr)
			*maxQuantity = params.maxQuantity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UfurnitureDropQuantityWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.PreConstruct");
		
		UfurnitureDropQuantityWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UfurnitureDropQuantityWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Construct");
		
		UfurnitureDropQuantityWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UfurnitureDropQuantityWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UfurnitureDropQuantityWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      targetString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuanMax                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAppManageList_C*                            ManageList                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UfurnitureDropQuantityWidget_C::Setup(const class FString& targetString, int32_t QuanMax, class UAppManageList_C* ManageList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.Setup");
		
		UfurnitureDropQuantityWidget_C_Setup_Params params {};
		params.targetString = targetString;
		params.QuanMax = QuanMax;
		params.ManageList = ManageList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UfurnitureDropQuantityWidget_C::BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");
		
		UfurnitureDropQuantityWidget_C_BndEvt__quantitySlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UfurnitureDropQuantityWidget_C::BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UfurnitureDropQuantityWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.ExecuteUbergraph_furnitureDropQuantityWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UfurnitureDropQuantityWidget_C::ExecuteUbergraph_furnitureDropQuantityWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function furnitureDropQuantityWidget.furnitureDropQuantityWidget_C.ExecuteUbergraph_furnitureDropQuantityWidget");
		
		UfurnitureDropQuantityWidget_C_ExecuteUbergraph_furnitureDropQuantityWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UfurnitureDropQuantityWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UfurnitureDropQuantityWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass furnitureDropQuantityWidget.furnitureDropQuantityWidget_C");
		return ptr;
	}

}


