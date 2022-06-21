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
	 * 		Name   -> Function newTaskWidget.newTaskWidget_C.getStatusNam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EtaskStatuses                                      Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        StatusNam                                                  (Parm, OutParm)
	 */
	void UnewTaskWidget_C::getStatusNam(EtaskStatuses Status, class FText* StatusNam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newTaskWidget.newTaskWidget_C.getStatusNam");
		
		UnewTaskWidget_C_getStatusNam_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StatusNam != nullptr)
			*StatusNam = params.StatusNam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function newTaskWidget.newTaskWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UnewTaskWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newTaskWidget.newTaskWidget_C.Construct");
		
		UnewTaskWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function newTaskWidget.newTaskWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        heading                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EtaskStatuses                                      TaskStatus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UnewTaskWidget_C::Setup(const class FText& heading, const class FText& Desc, EtaskStatuses TaskStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newTaskWidget.newTaskWidget_C.Setup");
		
		UnewTaskWidget_C_Setup_Params params {};
		params.heading = heading;
		params.Desc = Desc;
		params.TaskStatus = TaskStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function newTaskWidget.newTaskWidget_C.ExecuteUbergraph_newTaskWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UnewTaskWidget_C::ExecuteUbergraph_newTaskWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function newTaskWidget.newTaskWidget_C.ExecuteUbergraph_newTaskWidget");
		
		UnewTaskWidget_C_ExecuteUbergraph_newTaskWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UnewTaskWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UnewTaskWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass newTaskWidget.newTaskWidget_C");
		return ptr;
	}

}


