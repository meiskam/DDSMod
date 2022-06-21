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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AbackpackRepr_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AbackpackRepr_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass backpackRepr_Small.backpackRepr_Small_C");
		return ptr;
	}

}


