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
	 * 		Name   -> Function eddieFirstDialAnimBP.eddieFirstDialAnimBP_C.AnimNotify_pullOutPhone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UeddieFirstDialAnimBP_C::AnimNotify_pullOutPhone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialAnimBP.eddieFirstDialAnimBP_C.AnimNotify_pullOutPhone");
		
		UeddieFirstDialAnimBP_C_AnimNotify_pullOutPhone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialAnimBP.eddieFirstDialAnimBP_C.ExecuteUbergraph_eddieFirstDialAnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UeddieFirstDialAnimBP_C::ExecuteUbergraph_eddieFirstDialAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialAnimBP.eddieFirstDialAnimBP_C.ExecuteUbergraph_eddieFirstDialAnimBP");
		
		UeddieFirstDialAnimBP_C_ExecuteUbergraph_eddieFirstDialAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UeddieFirstDialAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UeddieFirstDialAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass eddieFirstDialAnimBP.eddieFirstDialAnimBP_C");
		return ptr;
	}

}


