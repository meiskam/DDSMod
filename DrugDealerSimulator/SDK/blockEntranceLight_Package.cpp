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
	 * 		Name   -> Function blockEntranceLight.blockEntranceLight_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AblockEntranceLight_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.UserConstructionScript");
		
		AblockEntranceLight_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function blockEntranceLight.blockEntranceLight_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AblockEntranceLight_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.ReceiveBeginPlay");
		
		AblockEntranceLight_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function blockEntranceLight.blockEntranceLight_C.turnLightOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AblockEntranceLight_C::turnLightOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.turnLightOn");
		
		AblockEntranceLight_C_turnLightOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function blockEntranceLight.blockEntranceLight_C.turnLightOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AblockEntranceLight_C::turnLightOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.turnLightOff");
		
		AblockEntranceLight_C_turnLightOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function blockEntranceLight.blockEntranceLight_C.ToggleShadows
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               on                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AblockEntranceLight_C::ToggleShadows(bool on)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.ToggleShadows");
		
		AblockEntranceLight_C_ToggleShadows_Params params {};
		params.on = on;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function blockEntranceLight.blockEntranceLight_C.ExecuteUbergraph_blockEntranceLight
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AblockEntranceLight_C::ExecuteUbergraph_blockEntranceLight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function blockEntranceLight.blockEntranceLight_C.ExecuteUbergraph_blockEntranceLight");
		
		AblockEntranceLight_C_ExecuteUbergraph_blockEntranceLight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AblockEntranceLight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AblockEntranceLight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass blockEntranceLight.blockEntranceLight_C");
		return ptr;
	}

}


