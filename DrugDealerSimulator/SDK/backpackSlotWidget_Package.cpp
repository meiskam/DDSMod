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
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.Get_curBackpackIcon_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UbackpackSlotWidget_C::Get_curBackpackIcon_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.Get_curBackpackIcon_ToolTipWidget_1");
		
		UbackpackSlotWidget_C_Get_curBackpackIcon_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.Get_curBackpackIcon_ToolTipText_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UbackpackSlotWidget_C::Get_curBackpackIcon_ToolTipText_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.Get_curBackpackIcon_ToolTipText_1");
		
		UbackpackSlotWidget_C_Get_curBackpackIcon_ToolTipText_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.extractItemContents
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            FromIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGuid                                       ParentGuid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AitemInventoryHolder_C*                      ItemHolderRef                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UbackpackSlotWidget_C::extractItemContents(const class FString& Source, int32_t FromIndex, const struct FGuid& ParentGuid, class AitemInventoryHolder_C** ItemHolderRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.extractItemContents");
		
		UbackpackSlotWidget_C_extractItemContents_Params params {};
		params.Source = Source;
		params.FromIndex = FromIndex;
		params.ParentGuid = ParentGuid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemHolderRef != nullptr)
			*ItemHolderRef = params.ItemHolderRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.setBackpack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FinventoryItemStruct                        Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class FName                                        BackpackID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FromVendor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UbackpackSlotWidget_C::setBackpack(class UDragDropOperation* Operation, const struct FinventoryItemStruct& Data, const class FName& BackpackID, bool FromVendor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.setBackpack");
		
		UbackpackSlotWidget_C_setBackpack_Params params {};
		params.Operation = Operation;
		params.Data = Data;
		params.BackpackID = BackpackID;
		params.FromVendor = FromVendor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.OnDragDetected
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UbackpackSlotWidget_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnDragDetected");
		
		UbackpackSlotWidget_C_OnDragDetected_Params params {};
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
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.OnMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UbackpackSlotWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnMouseButtonDown");
		
		UbackpackSlotWidget_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.OnDrop
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UbackpackSlotWidget_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnDrop");
		
		UbackpackSlotWidget_C_OnDrop_Params params {};
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
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.OnDragEnter
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UbackpackSlotWidget_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnDragEnter");
		
		UbackpackSlotWidget_C_OnDragEnter_Params params {};
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
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.OnDragLeave
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UbackpackSlotWidget_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.OnDragLeave");
		
		UbackpackSlotWidget_C_OnDragLeave_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.clearBackpackSlot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UbackpackSlotWidget_C::clearBackpackSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.clearBackpackSlot");
		
		UbackpackSlotWidget_C_clearBackpackSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function backpackSlotWidget.backpackSlotWidget_C.ExecuteUbergraph_backpackSlotWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UbackpackSlotWidget_C::ExecuteUbergraph_backpackSlotWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function backpackSlotWidget.backpackSlotWidget_C.ExecuteUbergraph_backpackSlotWidget");
		
		UbackpackSlotWidget_C_ExecuteUbergraph_backpackSlotWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UbackpackSlotWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UbackpackSlotWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass backpackSlotWidget.backpackSlotWidget_C");
		return ptr;
	}

}


