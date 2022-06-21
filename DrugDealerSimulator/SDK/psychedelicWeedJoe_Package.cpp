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
	 * 		Name   -> Function psychedelicWeedJoe.psychedelicWeedJoe_C.getReturnLine
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FinventoryItemStruct>                Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<struct FMixProportionsStruct>               ItemMixes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<int32_t>                                    Quantities                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<int32_t>                                    Amounts                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               Trade_canceled                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FdialogueData                               ReturnData                                                 (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    ReturnIndexes                                              (Parm, OutParm, ZeroConstructor)
	 */
	void ApsychedelicWeedJoe_C::getReturnLine(TArray<struct FinventoryItemStruct>* Items, TArray<struct FMixProportionsStruct>* ItemMixes, TArray<int32_t>* Quantities, TArray<int32_t>* Amounts, bool Trade_canceled, struct FdialogueData* ReturnData, TArray<int32_t>* ReturnIndexes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.getReturnLine");
		
		ApsychedelicWeedJoe_C_getReturnLine_Params params {};
		params.Trade_canceled = Trade_canceled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		if (ItemMixes != nullptr)
			*ItemMixes = params.ItemMixes;
		if (Quantities != nullptr)
			*Quantities = params.Quantities;
		if (Amounts != nullptr)
			*Amounts = params.Amounts;
		if (ReturnData != nullptr)
			*ReturnData = params.ReturnData;
		if (ReturnIndexes != nullptr)
			*ReturnIndexes = params.ReturnIndexes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicWeedJoe.psychedelicWeedJoe_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicWeedJoe_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.UserConstructionScript");
		
		ApsychedelicWeedJoe_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicWeedJoe.psychedelicWeedJoe_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ApsychedelicWeedJoe_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.ReceiveBeginPlay");
		
		ApsychedelicWeedJoe_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicWeedJoe.psychedelicWeedJoe_C.retryInitiate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ApsychedelicWeedJoe_C::retryInitiate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.retryInitiate");
		
		ApsychedelicWeedJoe_C_retryInitiate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function psychedelicWeedJoe.psychedelicWeedJoe_C.ExecuteUbergraph_psychedelicWeedJoe
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ApsychedelicWeedJoe_C::ExecuteUbergraph_psychedelicWeedJoe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function psychedelicWeedJoe.psychedelicWeedJoe_C.ExecuteUbergraph_psychedelicWeedJoe");
		
		ApsychedelicWeedJoe_C_ExecuteUbergraph_psychedelicWeedJoe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ApsychedelicWeedJoe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ApsychedelicWeedJoe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicWeedJoe.psychedelicWeedJoe_C");
		return ptr;
	}

}


