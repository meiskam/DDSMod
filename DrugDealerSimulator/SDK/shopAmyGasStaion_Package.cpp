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
	 * 		Name   -> Function shopAmyGasStaion.shopAmyGasStaion_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AshopAmyGasStaion_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopAmyGasStaion.shopAmyGasStaion_C.UserConstructionScript");
		
		AshopAmyGasStaion_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopAmyGasStaion.shopAmyGasStaion_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AshopAmyGasStaion_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopAmyGasStaion.shopAmyGasStaion_C.ReceiveBeginPlay");
		
		AshopAmyGasStaion_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopAmyGasStaion.shopAmyGasStaion_C.scriptResupplyEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AshopAmyGasStaion_C::scriptResupplyEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopAmyGasStaion.shopAmyGasStaion_C.scriptResupplyEvent");
		
		AshopAmyGasStaion_C_scriptResupplyEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shopAmyGasStaion.shopAmyGasStaion_C.ExecuteUbergraph_shopAmyGasStaion
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AshopAmyGasStaion_C::ExecuteUbergraph_shopAmyGasStaion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shopAmyGasStaion.shopAmyGasStaion_C.ExecuteUbergraph_shopAmyGasStaion");
		
		AshopAmyGasStaion_C_ExecuteUbergraph_shopAmyGasStaion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AshopAmyGasStaion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AshopAmyGasStaion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass shopAmyGasStaion.shopAmyGasStaion_C");
		return ptr;
	}

}


