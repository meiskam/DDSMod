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
	 * 		Name   -> Function clientAddictedPopup.clientAddictedPopup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UclientAddictedPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientAddictedPopup.clientAddictedPopup_C.Construct");
		
		UclientAddictedPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clientAddictedPopup.clientAddictedPopup_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ClientName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ClientAddictionDrug                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UclientAddictedPopup_C::Setup(const class FText& ClientName, const class FText& ClientAddictionDrug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientAddictedPopup.clientAddictedPopup_C.Setup");
		
		UclientAddictedPopup_C_Setup_Params params {};
		params.ClientName = ClientName;
		params.ClientAddictionDrug = ClientAddictionDrug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clientAddictedPopup.clientAddictedPopup_C.ExecuteUbergraph_clientAddictedPopup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UclientAddictedPopup_C::ExecuteUbergraph_clientAddictedPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientAddictedPopup.clientAddictedPopup_C.ExecuteUbergraph_clientAddictedPopup");
		
		UclientAddictedPopup_C_ExecuteUbergraph_clientAddictedPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UclientAddictedPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UclientAddictedPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass clientAddictedPopup.clientAddictedPopup_C");
		return ptr;
	}

}


