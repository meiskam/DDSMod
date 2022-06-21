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
	 * 		Name   -> Function ambientSoundsControler.ambientSoundsControler_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AambientSoundsControler_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ambientSoundsControler.ambientSoundsControler_C.UserConstructionScript");
		
		AambientSoundsControler_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ambientSoundsControler.ambientSoundsControler_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AambientSoundsControler_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ambientSoundsControler.ambientSoundsControler_C.ReceiveBeginPlay");
		
		AambientSoundsControler_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ambientSoundsControler.ambientSoundsControler_C.updateSounds
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AambientSoundsControler_C::updateSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ambientSoundsControler.ambientSoundsControler_C.updateSounds");
		
		AambientSoundsControler_C_updateSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function ambientSoundsControler.ambientSoundsControler_C.ExecuteUbergraph_ambientSoundsControler
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AambientSoundsControler_C::ExecuteUbergraph_ambientSoundsControler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ambientSoundsControler.ambientSoundsControler_C.ExecuteUbergraph_ambientSoundsControler");
		
		AambientSoundsControler_C_ExecuteUbergraph_ambientSoundsControler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AambientSoundsControler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AambientSoundsControler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ambientSoundsControler.ambientSoundsControler_C");
		return ptr;
	}

}


