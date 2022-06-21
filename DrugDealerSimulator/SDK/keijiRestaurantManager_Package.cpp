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
	 * 		Name   -> Function keijiRestaurantManager.keijiRestaurantManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AkeijiRestaurantManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiRestaurantManager.keijiRestaurantManager_C.UserConstructionScript");
		
		AkeijiRestaurantManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function keijiRestaurantManager.keijiRestaurantManager_C.openRestaurant
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AkeijiRestaurantManager_C::openRestaurant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiRestaurantManager.keijiRestaurantManager_C.openRestaurant");
		
		AkeijiRestaurantManager_C_openRestaurant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function keijiRestaurantManager.keijiRestaurantManager_C.lockRestaurant
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AkeijiRestaurantManager_C::lockRestaurant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiRestaurantManager.keijiRestaurantManager_C.lockRestaurant");
		
		AkeijiRestaurantManager_C_lockRestaurant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function keijiRestaurantManager.keijiRestaurantManager_C.ExecuteUbergraph_keijiRestaurantManager
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AkeijiRestaurantManager_C::ExecuteUbergraph_keijiRestaurantManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function keijiRestaurantManager.keijiRestaurantManager_C.ExecuteUbergraph_keijiRestaurantManager");
		
		AkeijiRestaurantManager_C_ExecuteUbergraph_keijiRestaurantManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AkeijiRestaurantManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AkeijiRestaurantManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass keijiRestaurantManager.keijiRestaurantManager_C");
		return ptr;
	}

}


