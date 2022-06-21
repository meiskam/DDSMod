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
	 * 		Name   -> PredefindFunction UAudioCurveSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCurveSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class FacialAnimation.AudioCurveSourceComponent");
		return ptr;
	}

}


