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
	 * 		Name   -> Function smugglerShopSectorC.smugglerShopSectorC_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsmugglerShopSectorC_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smugglerShopSectorC.smugglerShopSectorC_C.UserConstructionScript");
		
		AsmugglerShopSectorC_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smugglerShopSectorC.smugglerShopSectorC_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AsmugglerShopSectorC_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smugglerShopSectorC.smugglerShopSectorC_C.ReceiveBeginPlay");
		
		AsmugglerShopSectorC_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function smugglerShopSectorC.smugglerShopSectorC_C.ExecuteUbergraph_smugglerShopSectorC
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsmugglerShopSectorC_C::ExecuteUbergraph_smugglerShopSectorC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function smugglerShopSectorC.smugglerShopSectorC_C.ExecuteUbergraph_smugglerShopSectorC");
		
		AsmugglerShopSectorC_C_ExecuteUbergraph_smugglerShopSectorC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsmugglerShopSectorC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsmugglerShopSectorC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass smugglerShopSectorC.smugglerShopSectorC_C");
		return ptr;
	}

}


