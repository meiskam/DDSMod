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
	 * 		Name   -> Function ballenaCigarBP.ballenaCigarBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AballenaCigarBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaCigarBP.ballenaCigarBP_C.UserConstructionScript");
		
		AballenaCigarBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ballenaCigarBP.ballenaCigarBP_C.slowlyKillMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AballenaCigarBP_C::slowlyKillMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaCigarBP.ballenaCigarBP_C.slowlyKillMe");
		
		AballenaCigarBP_C_slowlyKillMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ballenaCigarBP.ballenaCigarBP_C.ExecuteUbergraph_ballenaCigarBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AballenaCigarBP_C::ExecuteUbergraph_ballenaCigarBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ballenaCigarBP.ballenaCigarBP_C.ExecuteUbergraph_ballenaCigarBP");
		
		AballenaCigarBP_C_ExecuteUbergraph_ballenaCigarBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AballenaCigarBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AballenaCigarBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ballenaCigarBP.ballenaCigarBP_C");
		return ptr;
	}

}


