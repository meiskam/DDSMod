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
	 * 		Name   -> Function sprayActionWidget.sprayActionWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        AreaNam                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UsprayActionWidget_C::Setup(const class FText& AreaNam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayActionWidget.sprayActionWidget_C.Setup");
		
		UsprayActionWidget_C_Setup_Params params {};
		params.AreaNam = AreaNam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function sprayActionWidget.sprayActionWidget_C.ExecuteUbergraph_sprayActionWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UsprayActionWidget_C::ExecuteUbergraph_sprayActionWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function sprayActionWidget.sprayActionWidget_C.ExecuteUbergraph_sprayActionWidget");
		
		UsprayActionWidget_C_ExecuteUbergraph_sprayActionWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UsprayActionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UsprayActionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass sprayActionWidget.sprayActionWidget_C");
		return ptr;
	}

}


