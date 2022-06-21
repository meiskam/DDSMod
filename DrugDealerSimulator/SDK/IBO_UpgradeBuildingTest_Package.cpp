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
	 * 		Name   -> Function IBO_UpgradeBuildingTest.IBO_UpgradeBuildingTest_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIBO_UpgradeBuildingTest_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBO_UpgradeBuildingTest.IBO_UpgradeBuildingTest_C.UserConstructionScript");
		
		AIBO_UpgradeBuildingTest_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AIBO_UpgradeBuildingTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIBO_UpgradeBuildingTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IBO_UpgradeBuildingTest.IBO_UpgradeBuildingTest_C");
		return ptr;
	}

}


