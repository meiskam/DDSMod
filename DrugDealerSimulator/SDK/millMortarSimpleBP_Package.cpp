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
	 * 		Name   -> Function millMortarSimpleBP.millMortarSimpleBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmillMortarSimpleBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function millMortarSimpleBP.millMortarSimpleBP_C.UserConstructionScript");
		
		AmillMortarSimpleBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function millMortarSimpleBP.millMortarSimpleBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AmillMortarSimpleBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function millMortarSimpleBP.millMortarSimpleBP_C.ReceiveBeginPlay");
		
		AmillMortarSimpleBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function millMortarSimpleBP.millMortarSimpleBP_C.quantityChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmillMortarSimpleBP_C::quantityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function millMortarSimpleBP.millMortarSimpleBP_C.quantityChanged");
		
		AmillMortarSimpleBP_C_quantityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function millMortarSimpleBP.millMortarSimpleBP_C.ExecuteUbergraph_millMortarSimpleBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmillMortarSimpleBP_C::ExecuteUbergraph_millMortarSimpleBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function millMortarSimpleBP.millMortarSimpleBP_C.ExecuteUbergraph_millMortarSimpleBP");
		
		AmillMortarSimpleBP_C_ExecuteUbergraph_millMortarSimpleBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AmillMortarSimpleBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AmillMortarSimpleBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass millMortarSimpleBP.millMortarSimpleBP_C");
		return ptr;
	}

}


