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
	 * 		Name   -> Function phoneMessagePersonWidget.phoneMessagePersonWidget_C.setupMe
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PersonName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               hasNew                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            messageCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        lastMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UphoneMessagePersonWidget_C::setupMe(const class FText& PersonName, bool hasNew, int32_t messageCount, const class FText& lastMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function phoneMessagePersonWidget.phoneMessagePersonWidget_C.setupMe");
		
		UphoneMessagePersonWidget_C_setupMe_Params params {};
		params.PersonName = PersonName;
		params.hasNew = hasNew;
		params.messageCount = messageCount;
		params.lastMessage = lastMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UphoneMessagePersonWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UphoneMessagePersonWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass phoneMessagePersonWidget.phoneMessagePersonWidget_C");
		return ptr;
	}

}


