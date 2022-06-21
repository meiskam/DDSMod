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
	 * 		Name   -> Function phoneNoteWidget.phoneNoteWidget_C.Setup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Sent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UphoneNoteWidget_C::Setup(const class FText& Message, bool Sent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function phoneNoteWidget.phoneNoteWidget_C.Setup");
		
		UphoneNoteWidget_C_Setup_Params params {};
		params.Message = Message;
		params.Sent = Sent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UphoneNoteWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UphoneNoteWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass phoneNoteWidget.phoneNoteWidget_C");
		return ptr;
	}

}


