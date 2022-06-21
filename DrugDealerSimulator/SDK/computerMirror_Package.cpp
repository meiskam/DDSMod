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
	 * 		Name   -> Function computerMirror.computerMirror_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AcomputerMirror_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.UserConstructionScript");
		
		AcomputerMirror_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function computerMirror.computerMirror_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AcomputerMirror_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.ReceiveBeginPlay");
		
		AcomputerMirror_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function computerMirror.computerMirror_C.openComputer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcomputerMirror_C::openComputer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.openComputer");
		
		AcomputerMirror_C_openComputer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function computerMirror.computerMirror_C.retryRef
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcomputerMirror_C::retryRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.retryRef");
		
		AcomputerMirror_C_retryRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function computerMirror.computerMirror_C.storeMeBack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcomputerMirror_C::storeMeBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.storeMeBack");
		
		AcomputerMirror_C_storeMeBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function computerMirror.computerMirror_C.ExecuteUbergraph_computerMirror
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AcomputerMirror_C::ExecuteUbergraph_computerMirror(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.ExecuteUbergraph_computerMirror");
		
		AcomputerMirror_C_ExecuteUbergraph_computerMirror_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AcomputerMirror_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AcomputerMirror_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass computerMirror.computerMirror_C");
		return ptr;
	}

}


