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
	 * 		Name   -> Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPigeon_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		UPigeon_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.AnimNotify_IdleEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPigeon_AnimBlueprint_C::AnimNotify_IdleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.AnimNotify_IdleEnd");
		
		UPigeon_AnimBlueprint_C_AnimNotify_IdleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.ExecuteUbergraph_Pigeon_AnimBlueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPigeon_AnimBlueprint_C::ExecuteUbergraph_Pigeon_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.ExecuteUbergraph_Pigeon_AnimBlueprint");
		
		UPigeon_AnimBlueprint_C_ExecuteUbergraph_Pigeon_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPigeon_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPigeon_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C");
		return ptr;
	}

}


