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
	 * 		Name   -> Function lsdEffectSmallTree.lsdEffectSmallTree_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlsdEffectSmallTree_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.UserConstructionScript");
		
		AlsdEffectSmallTree_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lsdEffectSmallTree.lsdEffectSmallTree_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlsdEffectSmallTree_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.ReceiveTick");
		
		AlsdEffectSmallTree_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lsdEffectSmallTree.lsdEffectSmallTree_C.beginEffectWork
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlsdEffectSmallTree_C::beginEffectWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.beginEffectWork");
		
		AlsdEffectSmallTree_C_beginEffectWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lsdEffectSmallTree.lsdEffectSmallTree_C.endEffectWork
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlsdEffectSmallTree_C::endEffectWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.endEffectWork");
		
		AlsdEffectSmallTree_C_endEffectWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lsdEffectSmallTree.lsdEffectSmallTree_C.randomScale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlsdEffectSmallTree_C::randomScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.randomScale");
		
		AlsdEffectSmallTree_C_randomScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function lsdEffectSmallTree.lsdEffectSmallTree_C.ExecuteUbergraph_lsdEffectSmallTree
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlsdEffectSmallTree_C::ExecuteUbergraph_lsdEffectSmallTree(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function lsdEffectSmallTree.lsdEffectSmallTree_C.ExecuteUbergraph_lsdEffectSmallTree");
		
		AlsdEffectSmallTree_C_ExecuteUbergraph_lsdEffectSmallTree_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AlsdEffectSmallTree_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AlsdEffectSmallTree_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass lsdEffectSmallTree.lsdEffectSmallTree_C");
		return ptr;
	}

}


