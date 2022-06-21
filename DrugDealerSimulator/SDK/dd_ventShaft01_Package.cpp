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
	 * 		Name   -> PredefindFunction Add_ventShaft01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Add_ventShaft01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass dd_ventShaft01.dd_ventShaft01_C");
		return ptr;
	}

}


