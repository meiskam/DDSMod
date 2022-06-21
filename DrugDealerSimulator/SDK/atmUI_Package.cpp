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
	 * 		Name   -> Function atmUI.atmUI_C.renderMoneyAmount
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TextAmount                                                 (Parm, OutParm)
	 */
	void UatmUI_C::renderMoneyAmount(class FText* TextAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.renderMoneyAmount");
		
		UatmUI_C_renderMoneyAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextAmount != nullptr)
			*TextAmount = params.TextAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnWithdraw_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnDeposite_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnCheckBalance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnWith100_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnWith250_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnWith500_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnWith1000_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnWithBack_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnDepositeBack_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnBalanceBack_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.withdrawMoney
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UatmUI_C::withdrawMoney(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.withdrawMoney");
		
		UatmUI_C_withdrawMoney_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UatmUI_C::BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__depositeAmountInput_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnWithCustom_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnCustomBack_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnWithAccept_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnWithdrawErrorBack_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UatmUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.Construct");
		
		UatmUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.depositeMoney
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UatmUI_C::depositeMoney(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.depositeMoney");
		
		UatmUI_C_depositeMoney_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UatmUI_C::BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");
		
		UatmUI_C_BndEvt__btnDepoAccept_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function atmUI.atmUI_C.ExecuteUbergraph_atmUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UatmUI_C::ExecuteUbergraph_atmUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function atmUI.atmUI_C.ExecuteUbergraph_atmUI");
		
		UatmUI_C_ExecuteUbergraph_atmUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UatmUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UatmUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass atmUI.atmUI_C");
		return ptr;
	}

}


