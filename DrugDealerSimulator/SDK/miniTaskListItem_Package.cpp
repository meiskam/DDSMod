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
	 * 		Name   -> Function miniTaskListItem.miniTaskListItem_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TaskName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               TaskDone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TaskID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               taskFailed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               taskSpecial                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               taskAwaitingDelivery                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UminiTaskListItem_C::Setup(const class FText& TaskName, bool TaskDone, int32_t TaskID, bool taskFailed, bool taskSpecial, bool taskAwaitingDelivery)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function miniTaskListItem.miniTaskListItem_C.Setup");
		
		UminiTaskListItem_C_Setup_Params params {};
		params.TaskName = TaskName;
		params.TaskDone = TaskDone;
		params.TaskID = TaskID;
		params.taskFailed = taskFailed;
		params.taskSpecial = taskSpecial;
		params.taskAwaitingDelivery = taskAwaitingDelivery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function miniTaskListItem.miniTaskListItem_C.ExecuteUbergraph_miniTaskListItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UminiTaskListItem_C::ExecuteUbergraph_miniTaskListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function miniTaskListItem.miniTaskListItem_C.ExecuteUbergraph_miniTaskListItem");
		
		UminiTaskListItem_C_ExecuteUbergraph_miniTaskListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UminiTaskListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UminiTaskListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass miniTaskListItem.miniTaskListItem_C");
		return ptr;
	}

}


