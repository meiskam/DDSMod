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
	 * 		Name   -> PredefindFunction AweedStrain_BongBreaker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AweedStrain_BongBreaker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass weedStrain_BongBreaker.weedStrain_BongBreaker_C");
		return ptr;
	}

}


