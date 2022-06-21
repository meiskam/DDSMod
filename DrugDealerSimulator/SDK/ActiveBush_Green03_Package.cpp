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
	 * 		Name   -> PredefindFunction AActiveBush_Green03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActiveBush_Green03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActiveBush_Green03.ActiveBush_Green03_C");
		return ptr;
	}

}


