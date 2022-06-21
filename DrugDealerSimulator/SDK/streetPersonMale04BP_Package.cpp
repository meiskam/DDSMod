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
	 * 		Name   -> PredefindFunction AstreetPersonMale04BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AstreetPersonMale04BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass streetPersonMale04BP.streetPersonMale04BP_C");
		return ptr;
	}

}


