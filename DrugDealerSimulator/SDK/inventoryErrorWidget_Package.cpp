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
	 * 		Name   -> Function inventoryErrorWidget.inventoryErrorWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UinventoryErrorWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryErrorWidget.inventoryErrorWidget_C.Construct");
		
		UinventoryErrorWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryErrorWidget.inventoryErrorWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ErrorText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UinventoryErrorWidget_C::Setup(const class FText& ErrorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryErrorWidget.inventoryErrorWidget_C.Setup");
		
		UinventoryErrorWidget_C_Setup_Params params {};
		params.ErrorText = ErrorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryErrorWidget.inventoryErrorWidget_C.ExecuteUbergraph_inventoryErrorWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryErrorWidget_C::ExecuteUbergraph_inventoryErrorWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryErrorWidget.inventoryErrorWidget_C.ExecuteUbergraph_inventoryErrorWidget");
		
		UinventoryErrorWidget_C_ExecuteUbergraph_inventoryErrorWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UinventoryErrorWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UinventoryErrorWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass inventoryErrorWidget.inventoryErrorWidget_C");
		return ptr;
	}

}


