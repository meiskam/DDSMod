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
	 * 		Name   -> Function FactoryGateDoor.FactoryGateDoor_C.HasPlayerKeys
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasKeys                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFactoryGateDoor_C::HasPlayerKeys(class AplayerCharacterBP_C* Player, bool* HasKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.HasPlayerKeys");
		
		AFactoryGateDoor_C_HasPlayerKeys_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasKeys != nullptr)
			*HasKeys = params.HasKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function FactoryGateDoor.FactoryGateDoor_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFactoryGateDoor_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.UserConstructionScript");
		
		AFactoryGateDoor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function FactoryGateDoor.FactoryGateDoor_C.InteractionActivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFactoryGateDoor_C::InteractionActivate(class AplayerCharacterBP_C* PlayerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.InteractionActivate");
		
		AFactoryGateDoor_C_InteractionActivate_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function FactoryGateDoor.FactoryGateDoor_C.Reopen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFactoryGateDoor_C::Reopen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.Reopen");
		
		AFactoryGateDoor_C_Reopen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function FactoryGateDoor.FactoryGateDoor_C.ExecuteUbergraph_FactoryGateDoor
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFactoryGateDoor_C::ExecuteUbergraph_FactoryGateDoor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactoryGateDoor.FactoryGateDoor_C.ExecuteUbergraph_FactoryGateDoor");
		
		AFactoryGateDoor_C_ExecuteUbergraph_FactoryGateDoor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AFactoryGateDoor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFactoryGateDoor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FactoryGateDoor.FactoryGateDoor_C");
		return ptr;
	}

}


