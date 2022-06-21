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
	 * 		Name   -> Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CharacterBaseWithHealth_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.UserConstructionScript");
		
		ABP_CharacterBaseWithHealth_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.Damage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterBaseWithHealth_C::Damage(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.Damage");
		
		ABP_CharacterBaseWithHealth_C_Damage_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_CharacterBaseWithHealth_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.ReceiveBeginPlay");
		
		ABP_CharacterBaseWithHealth_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.ExecuteUbergraph_BP_CharacterBaseWithHealth
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterBaseWithHealth_C::ExecuteUbergraph_BP_CharacterBaseWithHealth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C.ExecuteUbergraph_BP_CharacterBaseWithHealth");
		
		ABP_CharacterBaseWithHealth_C_ExecuteUbergraph_BP_CharacterBaseWithHealth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_CharacterBaseWithHealth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CharacterBaseWithHealth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C");
		return ptr;
	}

}


