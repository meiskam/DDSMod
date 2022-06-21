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
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.changeLabel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               setEmpty                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        NewLabel                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AadditiveContainerBase_C::changeLabel(bool setEmpty, const class FText& NewLabel, const struct FLinearColor& NewColor, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.changeLabel");
		
		AadditiveContainerBase_C_changeLabel_Params params {};
		params.setEmpty = setEmpty;
		params.NewLabel = NewLabel;
		params.NewColor = NewColor;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AadditiveContainerBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.UserConstructionScript");
		
		AadditiveContainerBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AadditiveContainerBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.ReceiveBeginPlay");
		
		AadditiveContainerBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AadditiveContainerBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.ReceiveTick");
		
		AadditiveContainerBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.addSubstance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AadditiveContainerBase_C::addSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.addSubstance");
		
		AadditiveContainerBase_C_addSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.setLabel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AadditiveContainerBase_C::setLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.setLabel");
		
		AadditiveContainerBase_C_setLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.showLabel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AadditiveContainerBase_C::showLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.showLabel");
		
		AadditiveContainerBase_C_showLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.hideLabel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AadditiveContainerBase_C::hideLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.hideLabel");
		
		AadditiveContainerBase_C_hideLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.customiseLabel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AadditiveContainerBase_C::customiseLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.customiseLabel");
		
		AadditiveContainerBase_C_customiseLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.tryAddSubstance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AadditiveContainerBase_C::tryAddSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.tryAddSubstance");
		
		AadditiveContainerBase_C_tryAddSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.UserClickedConfirm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AadditiveContainerBase_C::UserClickedConfirm(const class FString& ActionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.UserClickedConfirm");
		
		AadditiveContainerBase_C_UserClickedConfirm_Params params {};
		params.ActionID = ActionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.UserClickedCancel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AadditiveContainerBase_C::UserClickedCancel(const class FString& ActionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.UserClickedCancel");
		
		AadditiveContainerBase_C_UserClickedCancel_Params params {};
		params.ActionID = ActionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function additiveContainerBase.additiveContainerBase_C.ExecuteUbergraph_additiveContainerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AadditiveContainerBase_C::ExecuteUbergraph_additiveContainerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function additiveContainerBase.additiveContainerBase_C.ExecuteUbergraph_additiveContainerBase");
		
		AadditiveContainerBase_C_ExecuteUbergraph_additiveContainerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AadditiveContainerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AadditiveContainerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass additiveContainerBase.additiveContainerBase_C");
		return ptr;
	}

}


