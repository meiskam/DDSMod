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
	 * 		Name   -> Function InteractiveTrashBin.InteractiveTrashBin_C.PurgeTrashBin
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AInteractiveTrashBin_C::PurgeTrashBin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.PurgeTrashBin");
		
		AInteractiveTrashBin_C_PurgeTrashBin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InteractiveTrashBin.InteractiveTrashBin_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInteractiveTrashBin_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.UserConstructionScript");
		
		AInteractiveTrashBin_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InteractiveTrashBin.InteractiveTrashBin_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AInteractiveTrashBin_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.ReceiveBeginPlay");
		
		AInteractiveTrashBin_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InteractiveTrashBin.InteractiveTrashBin_C.RamaLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInteractiveTrashBin_C::RamaLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.RamaLoaded");
		
		AInteractiveTrashBin_C_RamaLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InteractiveTrashBin.InteractiveTrashBin_C.BinPurge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TotalPurge                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInteractiveTrashBin_C::BinPurge(bool TotalPurge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.BinPurge");
		
		AInteractiveTrashBin_C_BinPurge_Params params {};
		params.TotalPurge = TotalPurge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InteractiveTrashBin.InteractiveTrashBin_C.RetryPurge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInteractiveTrashBin_C::RetryPurge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.RetryPurge");
		
		AInteractiveTrashBin_C_RetryPurge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function InteractiveTrashBin.InteractiveTrashBin_C.ExecuteUbergraph_InteractiveTrashBin
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AInteractiveTrashBin_C::ExecuteUbergraph_InteractiveTrashBin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractiveTrashBin.InteractiveTrashBin_C.ExecuteUbergraph_InteractiveTrashBin");
		
		AInteractiveTrashBin_C_ExecuteUbergraph_InteractiveTrashBin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AInteractiveTrashBin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInteractiveTrashBin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InteractiveTrashBin.InteractiveTrashBin_C");
		return ptr;
	}

}


