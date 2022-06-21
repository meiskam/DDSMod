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
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkAvailableApartments
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ok                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentShopInterfaceWidget_C::checkAvailableApartments(bool* ok)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkAvailableApartments");
		
		UEquipmentShopInterfaceWidget_C_checkAvailableApartments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ok != nullptr)
			*ok = params.ok;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.updateBalance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::updateBalance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.updateBalance");
		
		UEquipmentShopInterfaceWidget_C_updateBalance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkPlayerHasApartments
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasApartments                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentShopInterfaceWidget_C::checkPlayerHasApartments(bool* hasApartments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.checkPlayerHasApartments");
		
		UEquipmentShopInterfaceWidget_C_checkPlayerHasApartments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasApartments != nullptr)
			*hasApartments = params.hasApartments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderAppartments
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::renderAppartments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderAppartments");
		
		UEquipmentShopInterfaceWidget_C_renderAppartments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderMainList
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::renderMainList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderMainList");
		
		UEquipmentShopInterfaceWidget_C_renderMainList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderCheckoutItems
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::renderCheckoutItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.renderCheckoutItems");
		
		UEquipmentShopInterfaceWidget_C_renderCheckoutItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.recalcCheckout
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::recalcCheckout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.recalcCheckout");
		
		UEquipmentShopInterfaceWidget_C_recalcCheckout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.AddListItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UequipmentShopItemWidget_C*                  ItemRef                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentShopInterfaceWidget_C::AddListItem(const class FName& ItemID, float Price, class UequipmentShopItemWidget_C** ItemRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.AddListItem");
		
		UEquipmentShopInterfaceWidget_C_AddListItem_Params params {};
		params.ItemID = ItemID;
		params.Price = Price;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemRef != nullptr)
			*ItemRef = params.ItemRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Construct");
		
		UEquipmentShopInterfaceWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Setup
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FappartmentEquipment>                baseEq                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      basePrices                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class AequipmentShop_C*                            ParentShopRef                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       Unlocked                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UEquipmentShopInterfaceWidget_C::Setup(TArray<struct FappartmentEquipment> baseEq, TArray<float> basePrices, class AequipmentShop_C* ParentShopRef, TArray<bool> Unlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.Setup");
		
		UEquipmentShopInterfaceWidget_C_Setup_Params params {};
		params.baseEq = baseEq;
		params.basePrices = basePrices;
		params.ParentShopRef = ParentShopRef;
		params.Unlocked = Unlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentShopInterfaceWidget_C_BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentShopInterfaceWidget_C_BndEvt__btnOrderPay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentShopInterfaceWidget_C_BndEvt__btnConfirmAddress_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentShopInterfaceWidget_C_BndEvt__btnCloseShop_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentShopInterfaceWidget_C_BndEvt__btnShowAll_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentShopInterfaceWidget_C_BndEvt__btnShowFunctional_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UEquipmentShopInterfaceWidget_C::BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentShopInterfaceWidget_C_BndEvt__btnShowDeco_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.ExecuteUbergraph_EquipmentShopInterfaceWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentShopInterfaceWidget_C::ExecuteUbergraph_EquipmentShopInterfaceWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C.ExecuteUbergraph_EquipmentShopInterfaceWidget");
		
		UEquipmentShopInterfaceWidget_C_ExecuteUbergraph_EquipmentShopInterfaceWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEquipmentShopInterfaceWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipmentShopInterfaceWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EquipmentShopInterfaceWidget.EquipmentShopInterfaceWidget_C");
		return ptr;
	}

}


