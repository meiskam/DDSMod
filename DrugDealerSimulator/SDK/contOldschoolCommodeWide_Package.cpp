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
	 * 		Name   -> PredefindFunction AcontOldschoolCommodeWide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AcontOldschoolCommodeWide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass contOldschoolCommodeWide.contOldschoolCommodeWide_C");
		return ptr;
	}

}


