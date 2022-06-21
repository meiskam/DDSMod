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
	 * 		Name   -> Function keijiTerritoryLook.keijiTerritoryLook_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AkeijiTerritoryLook_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiTerritoryLook.keijiTerritoryLook_C.UserConstructionScript");
		
		AkeijiTerritoryLook_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function keijiTerritoryLook.keijiTerritoryLook_C.playerLookedAt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AkeijiTerritoryLook_C::playerLookedAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiTerritoryLook.keijiTerritoryLook_C.playerLookedAt");
		
		AkeijiTerritoryLook_C_playerLookedAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function keijiTerritoryLook.keijiTerritoryLook_C.ExecuteUbergraph_keijiTerritoryLook
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AkeijiTerritoryLook_C::ExecuteUbergraph_keijiTerritoryLook(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiTerritoryLook.keijiTerritoryLook_C.ExecuteUbergraph_keijiTerritoryLook");
		
		AkeijiTerritoryLook_C_ExecuteUbergraph_keijiTerritoryLook_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AkeijiTerritoryLook_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AkeijiTerritoryLook_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass keijiTerritoryLook.keijiTerritoryLook_C");
		return ptr;
	}

}


