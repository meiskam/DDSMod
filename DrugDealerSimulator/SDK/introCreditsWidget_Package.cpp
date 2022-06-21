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
	 * 		Name   -> Function introCreditsWidget.introCreditsWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UintroCreditsWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function introCreditsWidget.introCreditsWidget_C.Construct");
		
		UintroCreditsWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function introCreditsWidget.introCreditsWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Person                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Company                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UintroCreditsWidget_C::Setup(const class FText& Title, const class FText& Person, const class FText& Company)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function introCreditsWidget.introCreditsWidget_C.Setup");
		
		UintroCreditsWidget_C_Setup_Params params {};
		params.Title = Title;
		params.Person = Person;
		params.Company = Company;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function introCreditsWidget.introCreditsWidget_C.ExecuteUbergraph_introCreditsWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UintroCreditsWidget_C::ExecuteUbergraph_introCreditsWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function introCreditsWidget.introCreditsWidget_C.ExecuteUbergraph_introCreditsWidget");
		
		UintroCreditsWidget_C_ExecuteUbergraph_introCreditsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UintroCreditsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UintroCreditsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass introCreditsWidget.introCreditsWidget_C");
		return ptr;
	}

}


