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
	 * 		Name   -> Function decorativeFurniture.decorativeFurniture_C.respawnFurniture
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AdecorativeFurniture_C::respawnFurniture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.respawnFurniture");
		
		AdecorativeFurniture_C_respawnFurniture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decorativeFurniture.decorativeFurniture_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdecorativeFurniture_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.UserConstructionScript");
		
		AdecorativeFurniture_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decorativeFurniture.decorativeFurniture_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdecorativeFurniture_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.ReceiveBeginPlay");
		
		AdecorativeFurniture_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decorativeFurniture.decorativeFurniture_C.InteractionActivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdecorativeFurniture_C::InteractionActivate(class AplayerCharacterBP_C* PlayerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.InteractionActivate");
		
		AdecorativeFurniture_C_InteractionActivate_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decorativeFurniture.decorativeFurniture_C.InputToggleOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdecorativeFurniture_C::InputToggleOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.InputToggleOn");
		
		AdecorativeFurniture_C_InputToggleOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decorativeFurniture.decorativeFurniture_C.InputToggleOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdecorativeFurniture_C::InputToggleOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.InputToggleOff");
		
		AdecorativeFurniture_C_InputToggleOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function decorativeFurniture.decorativeFurniture_C.ExecuteUbergraph_decorativeFurniture
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdecorativeFurniture_C::ExecuteUbergraph_decorativeFurniture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.ExecuteUbergraph_decorativeFurniture");
		
		AdecorativeFurniture_C_ExecuteUbergraph_decorativeFurniture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdecorativeFurniture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdecorativeFurniture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass decorativeFurniture.decorativeFurniture_C");
		return ptr;
	}

}


