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
	 * 		Name   -> Function PM_GetPointCloseToPlayer.PM_GetPointCloseToPlayer_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPM_GetPointCloseToPlayer_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_GetPointCloseToPlayer.PM_GetPointCloseToPlayer_C.ReceiveExecute");
		
		UPM_GetPointCloseToPlayer_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_GetPointCloseToPlayer.PM_GetPointCloseToPlayer_C.ExecuteUbergraph_PM_GetPointCloseToPlayer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPM_GetPointCloseToPlayer_C::ExecuteUbergraph_PM_GetPointCloseToPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_GetPointCloseToPlayer.PM_GetPointCloseToPlayer_C.ExecuteUbergraph_PM_GetPointCloseToPlayer");
		
		UPM_GetPointCloseToPlayer_C_ExecuteUbergraph_PM_GetPointCloseToPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPM_GetPointCloseToPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPM_GetPointCloseToPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PM_GetPointCloseToPlayer.PM_GetPointCloseToPlayer_C");
		return ptr;
	}

}


