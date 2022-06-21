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
	 * 		Name   -> PredefindFunction UfallDmgCamShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UfallDmgCamShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass fallDmgCamShake.fallDmgCamShake_C");
		return ptr;
	}

}


