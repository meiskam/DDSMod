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
	 * 		Name   -> Function contactsManager.contactsManager_C.fixGerardMeeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AcontactsManager_C::fixGerardMeeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.fixGerardMeeting");
		
		AcontactsManager_C_fixGerardMeeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function contactsManager.contactsManager_C.checkHiringStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AcontactsManager_C::checkHiringStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.checkHiringStatus");
		
		AcontactsManager_C_checkHiringStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function contactsManager.contactsManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AcontactsManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.UserConstructionScript");
		
		AcontactsManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function contactsManager.contactsManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AcontactsManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.ReceiveBeginPlay");
		
		AcontactsManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function contactsManager.contactsManager_C.generateWeedGuy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcontactsManager_C::generateWeedGuy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.generateWeedGuy");
		
		AcontactsManager_C_generateWeedGuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function contactsManager.contactsManager_C.generatePsychedelicGuy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AcontactsManager_C::generatePsychedelicGuy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.generatePsychedelicGuy");
		
		AcontactsManager_C_generatePsychedelicGuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function contactsManager.contactsManager_C.ExecuteUbergraph_contactsManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AcontactsManager_C::ExecuteUbergraph_contactsManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.ExecuteUbergraph_contactsManager");
		
		AcontactsManager_C_ExecuteUbergraph_contactsManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AcontactsManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AcontactsManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass contactsManager.contactsManager_C");
		return ptr;
	}

}


