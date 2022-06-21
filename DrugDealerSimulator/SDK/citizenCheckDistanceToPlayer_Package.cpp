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
	 * 		Name   -> Function citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UcitizenCheckDistanceToPlayer_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C.ReceiveTick");
		
		UcitizenCheckDistanceToPlayer_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C.ExecuteUbergraph_citizenCheckDistanceToPlayer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UcitizenCheckDistanceToPlayer_C::ExecuteUbergraph_citizenCheckDistanceToPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C.ExecuteUbergraph_citizenCheckDistanceToPlayer");
		
		UcitizenCheckDistanceToPlayer_C_ExecuteUbergraph_citizenCheckDistanceToPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UcitizenCheckDistanceToPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UcitizenCheckDistanceToPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C");
		return ptr;
	}

}


