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
	 * 		Name   -> PredefindFunction AstreetPersonFemale11BP1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AstreetPersonFemale11BP1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass streetPersonFemale11BP1.streetPersonFemale11BP1_C");
		return ptr;
	}

}


