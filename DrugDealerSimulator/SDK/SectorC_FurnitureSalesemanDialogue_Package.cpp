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
	 * 		Name   -> PredefindFunction ASectorC_FurnitureSalesemanDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASectorC_FurnitureSalesemanDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SectorC_FurnitureSalesemanDialogue.SectorC_FurnitureSalesemanDialogue_C");
		return ptr;
	}

}


