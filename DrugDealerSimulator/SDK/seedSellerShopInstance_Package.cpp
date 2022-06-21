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
	 * 		Name   -> Function seedSellerShopInstance.seedSellerShopInstance_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AseedSellerShopInstance_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function seedSellerShopInstance.seedSellerShopInstance_C.UserConstructionScript");
		
		AseedSellerShopInstance_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function seedSellerShopInstance.seedSellerShopInstance_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AseedSellerShopInstance_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function seedSellerShopInstance.seedSellerShopInstance_C.ReceiveBeginPlay");
		
		AseedSellerShopInstance_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function seedSellerShopInstance.seedSellerShopInstance_C.ShopOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AseedSellerShopInstance_C::ShopOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function seedSellerShopInstance.seedSellerShopInstance_C.ShopOpen");
		
		AseedSellerShopInstance_C_ShopOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function seedSellerShopInstance.seedSellerShopInstance_C.ExecuteUbergraph_seedSellerShopInstance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AseedSellerShopInstance_C::ExecuteUbergraph_seedSellerShopInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function seedSellerShopInstance.seedSellerShopInstance_C.ExecuteUbergraph_seedSellerShopInstance");
		
		AseedSellerShopInstance_C_ExecuteUbergraph_seedSellerShopInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AseedSellerShopInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AseedSellerShopInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass seedSellerShopInstance.seedSellerShopInstance_C");
		return ptr;
	}

}


