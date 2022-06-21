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
	 * 		Name   -> Function millCoffeeElectric.millCoffeeElectric_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmillCoffeeElectric_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function millCoffeeElectric.millCoffeeElectric_C.UserConstructionScript");
		
		AmillCoffeeElectric_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function millCoffeeElectric.millCoffeeElectric_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AmillCoffeeElectric_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function millCoffeeElectric.millCoffeeElectric_C.ReceiveBeginPlay");
		
		AmillCoffeeElectric_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function millCoffeeElectric.millCoffeeElectric_C.quantityChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmillCoffeeElectric_C::quantityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function millCoffeeElectric.millCoffeeElectric_C.quantityChanged");
		
		AmillCoffeeElectric_C_quantityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function millCoffeeElectric.millCoffeeElectric_C.ExecuteUbergraph_millCoffeeElectric
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmillCoffeeElectric_C::ExecuteUbergraph_millCoffeeElectric(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function millCoffeeElectric.millCoffeeElectric_C.ExecuteUbergraph_millCoffeeElectric");
		
		AmillCoffeeElectric_C_ExecuteUbergraph_millCoffeeElectric_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AmillCoffeeElectric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AmillCoffeeElectric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass millCoffeeElectric.millCoffeeElectric_C");
		return ptr;
	}

}


