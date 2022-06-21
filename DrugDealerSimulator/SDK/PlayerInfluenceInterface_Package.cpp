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
	 * 		Name   -> Function PlayerInfluenceInterface.PlayerInfluenceInterface_C.ShortRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerInfluenceInterface_C::ShortRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInfluenceInterface.PlayerInfluenceInterface_C.ShortRadiusChanged");
		
		UPlayerInfluenceInterface_C_ShortRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PlayerInfluenceInterface.PlayerInfluenceInterface_C.LongRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerInfluenceInterface_C::LongRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerInfluenceInterface.PlayerInfluenceInterface_C.LongRadiusChanged");
		
		UPlayerInfluenceInterface_C_LongRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerInfluenceInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerInfluenceInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerInfluenceInterface.PlayerInfluenceInterface_C");
		return ptr;
	}

}


