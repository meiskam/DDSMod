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
	 * 		Name   -> Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPM_Ser_ShoutChasePhrase_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ReceiveTick");
		
		UPM_Ser_ShoutChasePhrase_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ExecuteUbergraph_PM_Ser_ShoutChasePhrase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPM_Ser_ShoutChasePhrase_C::ExecuteUbergraph_PM_Ser_ShoutChasePhrase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ExecuteUbergraph_PM_Ser_ShoutChasePhrase");
		
		UPM_Ser_ShoutChasePhrase_C_ExecuteUbergraph_PM_Ser_ShoutChasePhrase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPM_Ser_ShoutChasePhrase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPM_Ser_ShoutChasePhrase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C");
		return ptr;
	}

}


