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
	 * 		Name   -> Function shopPharmacy.shopPharmacy_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AshopPharmacy_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopPharmacy.shopPharmacy_C.UserConstructionScript");
		
		AshopPharmacy_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopPharmacy.shopPharmacy_C.scriptResupplyEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AshopPharmacy_C::scriptResupplyEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopPharmacy.shopPharmacy_C.scriptResupplyEvent");
		
		AshopPharmacy_C_scriptResupplyEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopPharmacy.shopPharmacy_C.ExecuteUbergraph_shopPharmacy
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AshopPharmacy_C::ExecuteUbergraph_shopPharmacy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopPharmacy.shopPharmacy_C.ExecuteUbergraph_shopPharmacy");
		
		AshopPharmacy_C_ExecuteUbergraph_shopPharmacy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AshopPharmacy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AshopPharmacy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass shopPharmacy.shopPharmacy_C");
		return ptr;
	}

}


