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
	 * 		Name   -> PredefindFunction Aws_shelfModernSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Aws_shelfModernSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ws_shelfModernSmall.ws_shelfModernSmall_C");
		return ptr;
	}

}


