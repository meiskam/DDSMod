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
	 * 		Name   -> Function clientODPopup.clientODPopup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UclientODPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientODPopup.clientODPopup_C.Construct");
		
		UclientODPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clientODPopup.clientODPopup_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ClientName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ClientOverdoseDrug                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UclientODPopup_C::Setup(const class FText& ClientName, const class FText& ClientOverdoseDrug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientODPopup.clientODPopup_C.Setup");
		
		UclientODPopup_C_Setup_Params params {};
		params.ClientName = ClientName;
		params.ClientOverdoseDrug = ClientOverdoseDrug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clientODPopup.clientODPopup_C.killMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UclientODPopup_C::killMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientODPopup.clientODPopup_C.killMe");
		
		UclientODPopup_C_killMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function clientODPopup.clientODPopup_C.ExecuteUbergraph_clientODPopup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UclientODPopup_C::ExecuteUbergraph_clientODPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function clientODPopup.clientODPopup_C.ExecuteUbergraph_clientODPopup");
		
		UclientODPopup_C_ExecuteUbergraph_clientODPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UclientODPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UclientODPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass clientODPopup.clientODPopup_C");
		return ptr;
	}

}


