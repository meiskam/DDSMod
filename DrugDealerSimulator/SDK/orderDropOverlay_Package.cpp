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
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.GetText_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UorderDropOverlay_C::GetText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.GetText_1");
		
		UorderDropOverlay_C_GetText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.GetPlayerOrderLimit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              OrderLimit                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UorderDropOverlay_C::GetPlayerOrderLimit(float* OrderLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.GetPlayerOrderLimit");
		
		UorderDropOverlay_C_GetPlayerOrderLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OrderLimit != nullptr)
			*OrderLimit = params.OrderLimit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.Get_btnEvenCrypto_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UorderDropOverlay_C::Get_btnEvenCrypto_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.Get_btnEvenCrypto_ToolTipWidget_1");
		
		UorderDropOverlay_C_Get_btnEvenCrypto_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.calcCryptoBoost
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllowRaise                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UorderDropOverlay_C::calcCryptoBoost(bool AllowRaise)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.calcCryptoBoost");
		
		UorderDropOverlay_C_calcCryptoBoost_Params params {};
		params.AllowRaise = AllowRaise;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.checkOrderButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UorderDropOverlay_C::checkOrderButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.checkOrderButtons");
		
		UorderDropOverlay_C_checkOrderButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.removeFromOrder
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        DrugID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UorderDropOverlay_C::removeFromOrder(const class FName& DrugID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.removeFromOrder");
		
		UorderDropOverlay_C_removeFromOrder_Params params {};
		params.DrugID = DrugID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.recalcTotalOrder
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UorderDropOverlay_C::recalcTotalOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.recalcTotalOrder");
		
		UorderDropOverlay_C_recalcTotalOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.displayAddMessage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UorderDropOverlay_C::displayAddMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.displayAddMessage");
		
		UorderDropOverlay_C_displayAddMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.sortGrid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UorderDropOverlay_C::sortGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.sortGrid");
		
		UorderDropOverlay_C_sortGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.OnDragDetected
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UorderDropOverlay_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDragDetected");
		
		UorderDropOverlay_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.OnDrop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UorderDropOverlay_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDrop");
		
		UorderDropOverlay_C_OnDrop_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UorderDropOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.Construct");
		
		UorderDropOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.OnDragCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UorderDropOverlay_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDragCancelled");
		
		UorderDropOverlay_C_OnDragCancelled_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.OnDragEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UorderDropOverlay_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDragEnter");
		
		UorderDropOverlay_C_OnDragEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.OnDragLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UorderDropOverlay_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.OnDragLeave");
		
		UorderDropOverlay_C_OnDragLeave_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UorderDropOverlay_C::BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UorderDropOverlay_C_BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UorderDropOverlay_C::BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UorderDropOverlay_C_BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UorderDropOverlay_C::BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UorderDropOverlay_C_BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UorderDropOverlay_C::BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UorderDropOverlay_C_BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UorderDropOverlay_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UorderDropOverlay_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UorderDropOverlay_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UorderDropOverlay_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UorderDropOverlay_C::BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UorderDropOverlay_C_BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.BndEvt__buyPTC_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UorderDropOverlay_C::BndEvt__buyPTC_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.BndEvt__buyPTC_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UorderDropOverlay_C_BndEvt__buyPTC_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.ExecuteUbergraph_orderDropOverlay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UorderDropOverlay_C::ExecuteUbergraph_orderDropOverlay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.ExecuteUbergraph_orderDropOverlay");
		
		UorderDropOverlay_C_ExecuteUbergraph_orderDropOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderDropOverlay.orderDropOverlay_C.ClickedBuytPTC__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UorderDropOverlay_C::ClickedBuytPTC__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderDropOverlay.orderDropOverlay_C.ClickedBuytPTC__DelegateSignature");
		
		UorderDropOverlay_C_ClickedBuytPTC__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UorderDropOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UorderDropOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass orderDropOverlay.orderDropOverlay_C");
		return ptr;
	}

}


