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
	 * 		Name   -> PredefindFunction Astream_oldMarket_furnitureStore_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Astream_oldMarket_furnitureStore_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass stream_oldMarket_furnitureStore.stream_oldMarket_furnitureStore_C");
		return ptr;
	}

}


