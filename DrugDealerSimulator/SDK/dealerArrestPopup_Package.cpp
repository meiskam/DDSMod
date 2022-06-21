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
	 * 		Name   -> Function dealerArrestPopup.dealerArrestPopup_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UdealerArrestPopup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerArrestPopup.dealerArrestPopup_C.Construct");
		
		UdealerArrestPopup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerArrestPopup.dealerArrestPopup_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ClientName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Released                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UdealerArrestPopup_C::Setup(const class FText& ClientName, bool Released)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerArrestPopup.dealerArrestPopup_C.Setup");
		
		UdealerArrestPopup_C_Setup_Params params {};
		params.ClientName = ClientName;
		params.Released = Released;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerArrestPopup.dealerArrestPopup_C.killMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UdealerArrestPopup_C::killMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerArrestPopup.dealerArrestPopup_C.killMe");
		
		UdealerArrestPopup_C_killMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dealerArrestPopup.dealerArrestPopup_C.ExecuteUbergraph_dealerArrestPopup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdealerArrestPopup_C::ExecuteUbergraph_dealerArrestPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dealerArrestPopup.dealerArrestPopup_C.ExecuteUbergraph_dealerArrestPopup");
		
		UdealerArrestPopup_C_ExecuteUbergraph_dealerArrestPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UdealerArrestPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UdealerArrestPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass dealerArrestPopup.dealerArrestPopup_C");
		return ptr;
	}

}


