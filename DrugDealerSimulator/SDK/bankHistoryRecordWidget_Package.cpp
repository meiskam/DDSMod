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
	 * 		Name   -> Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UbankHistoryRecordWidget_C::Setup(const class FText& Source, const class FText& Title, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.Setup");
		
		UbankHistoryRecordWidget_C_Setup_Params params {};
		params.Source = Source;
		params.Title = Title;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.ExecuteUbergraph_bankHistoryRecordWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UbankHistoryRecordWidget_C::ExecuteUbergraph_bankHistoryRecordWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.ExecuteUbergraph_bankHistoryRecordWidget");
		
		UbankHistoryRecordWidget_C_ExecuteUbergraph_bankHistoryRecordWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UbankHistoryRecordWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UbankHistoryRecordWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass bankHistoryRecordWidget.bankHistoryRecordWidget_C");
		return ptr;
	}

}


