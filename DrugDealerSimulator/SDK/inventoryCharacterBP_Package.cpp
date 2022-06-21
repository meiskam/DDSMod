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
	 * 		Name   -> Function inventoryCharacterBP.inventoryCharacterBP_C.UpdateBackpack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        BackpackID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AinventoryCharacterBP_C::UpdateBackpack(const class FName& BackpackID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.UpdateBackpack");
		
		AinventoryCharacterBP_C_UpdateBackpack_Params params {};
		params.BackpackID = BackpackID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryCharacterBP.inventoryCharacterBP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AinventoryCharacterBP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.UserConstructionScript");
		
		AinventoryCharacterBP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryCharacterBP.inventoryCharacterBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AinventoryCharacterBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.ReceiveBeginPlay");
		
		AinventoryCharacterBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryCharacterBP.inventoryCharacterBP_C.testTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AinventoryCharacterBP_C::testTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.testTime");
		
		AinventoryCharacterBP_C_testTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryCharacterBP.inventoryCharacterBP_C.toggleCharacterEnabled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AinventoryCharacterBP_C::toggleCharacterEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.toggleCharacterEnabled");
		
		AinventoryCharacterBP_C_toggleCharacterEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryCharacterBP.inventoryCharacterBP_C.ExecuteUbergraph_inventoryCharacterBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AinventoryCharacterBP_C::ExecuteUbergraph_inventoryCharacterBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryCharacterBP.inventoryCharacterBP_C.ExecuteUbergraph_inventoryCharacterBP");
		
		AinventoryCharacterBP_C_ExecuteUbergraph_inventoryCharacterBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AinventoryCharacterBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AinventoryCharacterBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass inventoryCharacterBP.inventoryCharacterBP_C");
		return ptr;
	}

}


