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
	 * 		Name   -> Function PM_PredictPlayerEscapePath.PM_PredictPlayerEscapePath_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPM_PredictPlayerEscapePath_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PredictPlayerEscapePath.PM_PredictPlayerEscapePath_C.ReceiveExecute");
		
		UPM_PredictPlayerEscapePath_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_PredictPlayerEscapePath.PM_PredictPlayerEscapePath_C.ExecuteUbergraph_PM_PredictPlayerEscapePath
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPM_PredictPlayerEscapePath_C::ExecuteUbergraph_PM_PredictPlayerEscapePath(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_PredictPlayerEscapePath.PM_PredictPlayerEscapePath_C.ExecuteUbergraph_PM_PredictPlayerEscapePath");
		
		UPM_PredictPlayerEscapePath_C_ExecuteUbergraph_PM_PredictPlayerEscapePath_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPM_PredictPlayerEscapePath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPM_PredictPlayerEscapePath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PM_PredictPlayerEscapePath.PM_PredictPlayerEscapePath_C");
		return ptr;
	}

}


