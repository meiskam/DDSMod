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
	 * 		Name   -> Function InteractionInterface.InteractionInterface_C.InteractionActivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInteractionInterface_C::InteractionActivate(class AplayerCharacterBP_C* PlayerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InteractionInterface.InteractionInterface_C.InteractionActivate");
		
		UInteractionInterface_C_InteractionActivate_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractionInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InteractionInterface.InteractionInterface_C");
		return ptr;
	}

}


