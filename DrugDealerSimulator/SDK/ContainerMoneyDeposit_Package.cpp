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
	 * 		Name   -> Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.CanAccessContainer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanAccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        DeclineReason                                              (Parm, OutParm)
	 */
	void AContainerMoneyDeposit_C::CanAccessContainer(bool* CanAccess, class FText* DeclineReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.CanAccessContainer");
		
		AContainerMoneyDeposit_C_CanAccessContainer_Params params {};
		
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
	 * 		Name   -> Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AContainerMoneyDeposit_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.UserConstructionScript");
		
		AContainerMoneyDeposit_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.NewPickupQuest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TaskID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AContainerMoneyDeposit_C::NewPickupQuest(int32_t TaskID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.NewPickupQuest");
		
		AContainerMoneyDeposit_C_NewPickupQuest_Params params {};
		params.TaskID = TaskID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.closeEventScript
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AContainerMoneyDeposit_C::closeEventScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.closeEventScript");
		
		AContainerMoneyDeposit_C_closeEventScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.DepositCash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AContainerMoneyDeposit_C::DepositCash(int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.DepositCash");
		
		AContainerMoneyDeposit_C_DepositCash_Params params {};
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.ExecuteUbergraph_ContainerMoneyDeposit
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AContainerMoneyDeposit_C::ExecuteUbergraph_ContainerMoneyDeposit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.ExecuteUbergraph_ContainerMoneyDeposit");
		
		AContainerMoneyDeposit_C_ExecuteUbergraph_ContainerMoneyDeposit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AContainerMoneyDeposit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContainerMoneyDeposit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ContainerMoneyDeposit.ContainerMoneyDeposit_C");
		return ptr;
	}

}


