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
	 * 		Name   -> Function FrontWidgetInterface.FrontWidgetInterface_C.CloseFrontWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanClose                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFrontWidgetInterface_C::CloseFrontWidget(bool* CanClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontWidgetInterface.FrontWidgetInterface_C.CloseFrontWidget");
		
		UFrontWidgetInterface_C_CloseFrontWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanClose != nullptr)
			*CanClose = params.CanClose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFrontWidgetInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrontWidgetInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontWidgetInterface.FrontWidgetInterface_C");
		return ptr;
	}

}


