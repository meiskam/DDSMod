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
	 * 		Name   -> Function qaHashKey.qaHashKey_C.asd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UqaHashKey_C::asd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function qaHashKey.qaHashKey_C.asd");
		
		UqaHashKey_C_asd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function qaHashKey.qaHashKey_C.ExecuteUbergraph_qaHashKey
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UqaHashKey_C::ExecuteUbergraph_qaHashKey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function qaHashKey.qaHashKey_C.ExecuteUbergraph_qaHashKey");
		
		UqaHashKey_C_ExecuteUbergraph_qaHashKey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UqaHashKey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UqaHashKey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass qaHashKey.qaHashKey_C");
		return ptr;
	}

}


