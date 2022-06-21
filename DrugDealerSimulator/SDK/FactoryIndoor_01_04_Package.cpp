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
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function FactoryIndoor_01_04.FactoryIndoor_01_04_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFactoryIndoor_01_04_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactoryIndoor_01_04.FactoryIndoor_01_04_C.UserConstructionScript");
		
		AFactoryIndoor_01_04_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AFactoryIndoor_01_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFactoryIndoor_01_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FactoryIndoor_01_04.FactoryIndoor_01_04_C");
		return ptr;
	}

}


