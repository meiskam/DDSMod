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
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.getSubstanceName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        OutName                                                    (Parm, OutParm)
	 */
	void UworkStationSubstanceAddWidget_C::getSubstanceName(class FText* OutName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.getSubstanceName");
		
		UworkStationSubstanceAddWidget_C_getSubstanceName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutName != nullptr)
			*OutName = params.OutName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.setPackageIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EdrugForm                                          Form                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quan                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Original                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EitemCategories                                    Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  OutIcon                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UworkStationSubstanceAddWidget_C::setPackageIcon(EdrugForm Form, int32_t Quan, class UTexture2D* Original, EitemCategories Category, class UTexture2D** OutIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.setPackageIcon");
		
		UworkStationSubstanceAddWidget_C_setPackageIcon_Params params {};
		params.Form = Form;
		params.Quan = Quan;
		params.Original = Original;
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIcon != nullptr)
			*OutIcon = params.OutIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.addToEquipment
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DontChangeInput                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UworkStationSubstanceAddWidget_C::addToEquipment(bool* DontChangeInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.addToEquipment");
		
		UworkStationSubstanceAddWidget_C_addToEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DontChangeInput != nullptr)
			*DontChangeInput = params.DontChangeInput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UworkStationSubstanceAddWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Construct");
		
		UworkStationSubstanceAddWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AinteractiveBaseObject_C*                    SelectedSubstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AworkStationEquipmentBase_C*                 Equipment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UworkStationSubstanceAddWidget_C::Setup(class AinteractiveBaseObject_C* SelectedSubstance, class AworkStationEquipmentBase_C* Equipment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Setup");
		
		UworkStationSubstanceAddWidget_C_Setup_Params params {};
		params.SelectedSubstance = SelectedSubstance;
		params.Equipment = Equipment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UworkStationSubstanceAddWidget_C::BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UworkStationSubstanceAddWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UworkStationSubstanceAddWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UworkStationSubstanceAddWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.killWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DontChangeInput                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UworkStationSubstanceAddWidget_C::killWidget(bool DontChangeInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.killWidget");
		
		UworkStationSubstanceAddWidget_C_killWidget_Params params {};
		params.DontChangeInput = DontChangeInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UworkStationSubstanceAddWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Tick");
		
		UworkStationSubstanceAddWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.ExecuteUbergraph_workStationSubstanceAddWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UworkStationSubstanceAddWidget_C::ExecuteUbergraph_workStationSubstanceAddWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.ExecuteUbergraph_workStationSubstanceAddWidget");
		
		UworkStationSubstanceAddWidget_C_ExecuteUbergraph_workStationSubstanceAddWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UworkStationSubstanceAddWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UworkStationSubstanceAddWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass workStationSubstanceAddWidget.workStationSubstanceAddWidget_C");
		return ptr;
	}

}


