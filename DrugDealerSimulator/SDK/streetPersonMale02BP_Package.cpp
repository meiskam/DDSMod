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
	 * 		Name   -> PredefindFunction AstreetPersonMale02BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AstreetPersonMale02BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass streetPersonMale02BP.streetPersonMale02BP_C");
		return ptr;
	}

}


