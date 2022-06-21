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
	 * 		Name   -> Function weedMoneyTable.weedMoneyTable_C.depositeSafeMoney
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AweedMoneyTable_C::depositeSafeMoney(int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.depositeSafeMoney");
		
		AweedMoneyTable_C_depositeSafeMoney_Params params {};
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedMoneyTable.weedMoneyTable_C.parseInventory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FinventoryItemStruct>                backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<int32_t>                                    backpackQuan                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FinventoryItemStruct>                Pockets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<int32_t>                                    pocketQuan                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            quantityFound                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AweedMoneyTable_C::parseInventory(TArray<struct FinventoryItemStruct>* backpack, TArray<int32_t>* backpackQuan, TArray<struct FinventoryItemStruct>* Pockets, TArray<int32_t>* pocketQuan, int32_t* quantityFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.parseInventory");
		
		AweedMoneyTable_C_parseInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (backpack != nullptr)
			*backpack = params.backpack;
		if (backpackQuan != nullptr)
			*backpackQuan = params.backpackQuan;
		if (Pockets != nullptr)
			*Pockets = params.Pockets;
		if (pocketQuan != nullptr)
			*pocketQuan = params.pocketQuan;
		if (quantityFound != nullptr)
			*quantityFound = params.quantityFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedMoneyTable.weedMoneyTable_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AweedMoneyTable_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.UserConstructionScript");
		
		AweedMoneyTable_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedMoneyTable.weedMoneyTable_C.tableActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AweedMoneyTable_C::tableActivated(class AplayerCharacterBP_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.tableActivated");
		
		AweedMoneyTable_C_tableActivated_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function weedMoneyTable.weedMoneyTable_C.ExecuteUbergraph_weedMoneyTable
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AweedMoneyTable_C::ExecuteUbergraph_weedMoneyTable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function weedMoneyTable.weedMoneyTable_C.ExecuteUbergraph_weedMoneyTable");
		
		AweedMoneyTable_C_ExecuteUbergraph_weedMoneyTable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AweedMoneyTable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AweedMoneyTable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass weedMoneyTable.weedMoneyTable_C");
		return ptr;
	}

}


