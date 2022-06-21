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
	 * 		Name   -> Function CursedSpotFixer.CursedSpotFixer_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACursedSpotFixer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursedSpotFixer.CursedSpotFixer_C.UserConstructionScript");
		
		ACursedSpotFixer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CursedSpotFixer.CursedSpotFixer_C.FixCursedSpot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACursedSpotFixer_C::FixCursedSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursedSpotFixer.CursedSpotFixer_C.FixCursedSpot");
		
		ACursedSpotFixer_C_FixCursedSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CursedSpotFixer.CursedSpotFixer_C.ExecuteUbergraph_CursedSpotFixer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACursedSpotFixer_C::ExecuteUbergraph_CursedSpotFixer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CursedSpotFixer.CursedSpotFixer_C.ExecuteUbergraph_CursedSpotFixer");
		
		ACursedSpotFixer_C_ExecuteUbergraph_CursedSpotFixer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ACursedSpotFixer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACursedSpotFixer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CursedSpotFixer.CursedSpotFixer_C");
		return ptr;
	}

}


