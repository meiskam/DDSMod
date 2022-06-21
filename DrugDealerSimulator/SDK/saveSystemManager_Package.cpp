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
	 * 		Name   -> Function saveSystemManager.saveSystemManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsaveSystemManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveSystemManager.saveSystemManager_C.UserConstructionScript");
		
		AsaveSystemManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveSystemManager.saveSystemManager_C.SaveGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsaveSystemManager_C::SaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveSystemManager.saveSystemManager_C.SaveGame");
		
		AsaveSystemManager_C_SaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function saveSystemManager.saveSystemManager_C.ExecuteUbergraph_saveSystemManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsaveSystemManager_C::ExecuteUbergraph_saveSystemManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function saveSystemManager.saveSystemManager_C.ExecuteUbergraph_saveSystemManager");
		
		AsaveSystemManager_C_ExecuteUbergraph_saveSystemManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsaveSystemManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsaveSystemManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass saveSystemManager.saveSystemManager_C");
		return ptr;
	}

}


