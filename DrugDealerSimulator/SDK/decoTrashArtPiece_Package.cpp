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
	 * 		Name   -> PredefindFunction AdecoTrashArtPiece_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdecoTrashArtPiece_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass decoTrashArtPiece.decoTrashArtPiece_C");
		return ptr;
	}

}


