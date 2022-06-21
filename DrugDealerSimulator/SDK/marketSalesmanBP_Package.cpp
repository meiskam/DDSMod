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
	 * 		Name   -> Function marketSalesmanBP.marketSalesmanBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AmarketSalesmanBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function marketSalesmanBP.marketSalesmanBP_C.UserConstructionScript");
		
		AmarketSalesmanBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function marketSalesmanBP.marketSalesmanBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AmarketSalesmanBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function marketSalesmanBP.marketSalesmanBP_C.ReceiveBeginPlay");
		
		AmarketSalesmanBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function marketSalesmanBP.marketSalesmanBP_C.checkShop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AmarketSalesmanBP_C::checkShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function marketSalesmanBP.marketSalesmanBP_C.checkShop");
		
		AmarketSalesmanBP_C_checkShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function marketSalesmanBP.marketSalesmanBP_C.ExecuteUbergraph_marketSalesmanBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AmarketSalesmanBP_C::ExecuteUbergraph_marketSalesmanBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function marketSalesmanBP.marketSalesmanBP_C.ExecuteUbergraph_marketSalesmanBP");
		
		AmarketSalesmanBP_C_ExecuteUbergraph_marketSalesmanBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AmarketSalesmanBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AmarketSalesmanBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass marketSalesmanBP.marketSalesmanBP_C");
		return ptr;
	}

}


