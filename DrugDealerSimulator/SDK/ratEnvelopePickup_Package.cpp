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
	 * 		Name   -> PredefindFunction AratEnvelopePickup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AratEnvelopePickup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ratEnvelopePickup.ratEnvelopePickup_C");
		return ptr;
	}

}


