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
	 * 		Name   -> Function phoneCallWidget.phoneCallWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        CallerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            callerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               callDeclined                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      CallTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UphoneCallWidget_C::Setup(const class FText& CallerName, int32_t callerID, bool callDeclined, const class FString& CallTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function phoneCallWidget.phoneCallWidget_C.Setup");
		
		UphoneCallWidget_C_Setup_Params params {};
		params.CallerName = CallerName;
		params.callerID = callerID;
		params.callDeclined = callDeclined;
		params.CallTime = CallTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function phoneCallWidget.phoneCallWidget_C.ExecuteUbergraph_phoneCallWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UphoneCallWidget_C::ExecuteUbergraph_phoneCallWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function phoneCallWidget.phoneCallWidget_C.ExecuteUbergraph_phoneCallWidget");
		
		UphoneCallWidget_C_ExecuteUbergraph_phoneCallWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UphoneCallWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UphoneCallWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass phoneCallWidget.phoneCallWidget_C");
		return ptr;
	}

}


