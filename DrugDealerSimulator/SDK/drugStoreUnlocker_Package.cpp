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
	 * 		Name   -> Function drugStoreUnlocker.drugStoreUnlocker_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdrugStoreUnlocker_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugStoreUnlocker.drugStoreUnlocker_C.UserConstructionScript");
		
		AdrugStoreUnlocker_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugStoreUnlocker.drugStoreUnlocker_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdrugStoreUnlocker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugStoreUnlocker.drugStoreUnlocker_C.ReceiveBeginPlay");
		
		AdrugStoreUnlocker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugStoreUnlocker.drugStoreUnlocker_C.UnlockStore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugStoreUnlocker_C::UnlockStore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugStoreUnlocker.drugStoreUnlocker_C.UnlockStore");
		
		AdrugStoreUnlocker_C_UnlockStore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugStoreUnlocker.drugStoreUnlocker_C.checkUnlock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdrugStoreUnlocker_C::checkUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugStoreUnlocker.drugStoreUnlocker_C.checkUnlock");
		
		AdrugStoreUnlocker_C_checkUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function drugStoreUnlocker.drugStoreUnlocker_C.ExecuteUbergraph_drugStoreUnlocker
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdrugStoreUnlocker_C::ExecuteUbergraph_drugStoreUnlocker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function drugStoreUnlocker.drugStoreUnlocker_C.ExecuteUbergraph_drugStoreUnlocker");
		
		AdrugStoreUnlocker_C_ExecuteUbergraph_drugStoreUnlocker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdrugStoreUnlocker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdrugStoreUnlocker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass drugStoreUnlocker.drugStoreUnlocker_C");
		return ptr;
	}

}


