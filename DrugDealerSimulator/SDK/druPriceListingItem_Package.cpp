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
	 * 		Name   -> Function druPriceListingItem.druPriceListingItem_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FdrugData                                   drugData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		float                                              BuyPrice                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurSellPrice                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DrugIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AmainComputer_C*                             computerRef                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               firstLocked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UdruPriceListingItem_C::Setup(const struct FdrugData& drugData, float BuyPrice, float CurSellPrice, int32_t DrugIndex, class AmainComputer_C* computerRef, bool firstLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.Setup");
		
		UdruPriceListingItem_C_Setup_Params params {};
		params.drugData = drugData;
		params.BuyPrice = BuyPrice;
		params.CurSellPrice = CurSellPrice;
		params.DrugIndex = DrugIndex;
		params.computerRef = computerRef;
		params.firstLocked = firstLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdruPriceListingItem_C::BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UdruPriceListingItem_C_BndEvt__btnPriceLower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdruPriceListingItem_C::BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UdruPriceListingItem_C_BndEvt__btnDisableEnable_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UdruPriceListingItem_C::BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UdruPriceListingItem_C_BndEvt__btnUnlockDrug_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function druPriceListingItem.druPriceListingItem_C.ExecuteUbergraph_druPriceListingItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdruPriceListingItem_C::ExecuteUbergraph_druPriceListingItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function druPriceListingItem.druPriceListingItem_C.ExecuteUbergraph_druPriceListingItem");
		
		UdruPriceListingItem_C_ExecuteUbergraph_druPriceListingItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UdruPriceListingItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UdruPriceListingItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass druPriceListingItem.druPriceListingItem_C");
		return ptr;
	}

}


