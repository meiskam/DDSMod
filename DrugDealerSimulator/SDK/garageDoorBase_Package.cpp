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
	 * 		Name   -> Function garageDoorBase.garageDoorBase_C.getGarageOptions
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                ReturnNames                                                (Parm, OutParm, ZeroConstructor)
	 * 		TArray<class FString>                              Actions                                                    (Parm, OutParm, ZeroConstructor)
	 */
	void AgarageDoorBase_C::getGarageOptions(TArray<class FText>* ReturnNames, TArray<class FString>* Actions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.getGarageOptions");
		
		AgarageDoorBase_C_getGarageOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnNames != nullptr)
			*ReturnNames = params.ReturnNames;
		if (Actions != nullptr)
			*Actions = params.Actions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function garageDoorBase.garageDoorBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AgarageDoorBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.UserConstructionScript");
		
		AgarageDoorBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function garageDoorBase.garageDoorBase_C.openClose__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AgarageDoorBase_C::openClose__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.openClose__FinishedFunc");
		
		AgarageDoorBase_C_openClose__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function garageDoorBase.garageDoorBase_C.openClose__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AgarageDoorBase_C::openClose__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.openClose__UpdateFunc");
		
		AgarageDoorBase_C_openClose__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function garageDoorBase.garageDoorBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AgarageDoorBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.ReceiveBeginPlay");
		
		AgarageDoorBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function garageDoorBase.garageDoorBase_C.toggleGarageDoor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AgarageDoorBase_C::toggleGarageDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.toggleGarageDoor");
		
		AgarageDoorBase_C_toggleGarageDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function garageDoorBase.garageDoorBase_C.executeGarageOption
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      optionString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AgarageDoorBase_C::executeGarageOption(const class FString& optionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.executeGarageOption");
		
		AgarageDoorBase_C_executeGarageOption_Params params {};
		params.optionString = optionString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function garageDoorBase.garageDoorBase_C.ExecuteUbergraph_garageDoorBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AgarageDoorBase_C::ExecuteUbergraph_garageDoorBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.ExecuteUbergraph_garageDoorBase");
		
		AgarageDoorBase_C_ExecuteUbergraph_garageDoorBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AgarageDoorBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AgarageDoorBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass garageDoorBase.garageDoorBase_C");
		return ptr;
	}

}


