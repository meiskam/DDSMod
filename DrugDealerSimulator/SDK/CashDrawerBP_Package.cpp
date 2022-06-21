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
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.ProcessValuables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACashDrawerBP_C::ProcessValuables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.ProcessValuables");
		
		ACashDrawerBP_C_ProcessValuables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.CanAccessContainer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanAccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        DeclineReason                                              (Parm, OutParm)
	 */
	void ACashDrawerBP_C::CanAccessContainer(bool* CanAccess, class FText* DeclineReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.CanAccessContainer");
		
		ACashDrawerBP_C_CanAccessContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAccess != nullptr)
			*CanAccess = params.CanAccess;
		if (DeclineReason != nullptr)
			*DeclineReason = params.DeclineReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACashDrawerBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.UserConstructionScript");
		
		ACashDrawerBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACashDrawerBP_C::DrawerOpening__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__FinishedFunc");
		
		ACashDrawerBP_C_DrawerOpening__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACashDrawerBP_C::DrawerOpening__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__UpdateFunc");
		
		ACashDrawerBP_C_DrawerOpening__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.LongRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACashDrawerBP_C::LongRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.LongRadiusChanged");
		
		ACashDrawerBP_C_LongRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.OpenDrawer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACashDrawerBP_C::OpenDrawer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.OpenDrawer");
		
		ACashDrawerBP_C_OpenDrawer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.CloseDrawer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACashDrawerBP_C::CloseDrawer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.CloseDrawer");
		
		ACashDrawerBP_C_CloseDrawer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.closeEventScript
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACashDrawerBP_C::closeEventScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.closeEventScript");
		
		ACashDrawerBP_C_closeEventScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.ShortRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACashDrawerBP_C::ShortRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.ShortRadiusChanged");
		
		ACashDrawerBP_C_ShortRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.MoneyDeposited
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACashDrawerBP_C::MoneyDeposited(int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.MoneyDeposited");
		
		ACashDrawerBP_C_MoneyDeposited_Params params {};
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CashDrawerBP.CashDrawerBP_C.ExecuteUbergraph_CashDrawerBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACashDrawerBP_C::ExecuteUbergraph_CashDrawerBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CashDrawerBP.CashDrawerBP_C.ExecuteUbergraph_CashDrawerBP");
		
		ACashDrawerBP_C_ExecuteUbergraph_CashDrawerBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ACashDrawerBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACashDrawerBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CashDrawerBP.CashDrawerBP_C");
		return ptr;
	}

}


