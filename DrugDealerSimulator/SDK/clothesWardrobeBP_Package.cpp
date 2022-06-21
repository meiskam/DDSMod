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
	 * 		Name   -> Function clothesWardrobeBP.clothesWardrobeBP_C.endCopAlert
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AclothesWardrobeBP_C::endCopAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.endCopAlert");
		
		AclothesWardrobeBP_C_endCopAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clothesWardrobeBP.clothesWardrobeBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AclothesWardrobeBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.UserConstructionScript");
		
		AclothesWardrobeBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clothesWardrobeBP.clothesWardrobeBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AclothesWardrobeBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.ReceiveBeginPlay");
		
		AclothesWardrobeBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clothesWardrobeBP.clothesWardrobeBP_C.ChangeClothes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AclothesWardrobeBP_C::ChangeClothes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.ChangeClothes");
		
		AclothesWardrobeBP_C_ChangeClothes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clothesWardrobeBP.clothesWardrobeBP_C.unlockChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AclothesWardrobeBP_C::unlockChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.unlockChange");
		
		AclothesWardrobeBP_C_unlockChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clothesWardrobeBP.clothesWardrobeBP_C.ExecuteUbergraph_clothesWardrobeBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AclothesWardrobeBP_C::ExecuteUbergraph_clothesWardrobeBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clothesWardrobeBP.clothesWardrobeBP_C.ExecuteUbergraph_clothesWardrobeBP");
		
		AclothesWardrobeBP_C_ExecuteUbergraph_clothesWardrobeBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AclothesWardrobeBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AclothesWardrobeBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass clothesWardrobeBP.clothesWardrobeBP_C");
		return ptr;
	}

}


