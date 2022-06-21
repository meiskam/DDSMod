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
	 * 		Name   -> Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCitizenFemale02_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.BlueprintUpdateAnimation");
		
		UCitizenFemale02_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCitizenFemale02_AnimBP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.BlueprintBeginPlay");
		
		UCitizenFemale02_AnimBP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.ExecuteUbergraph_CitizenFemale02_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCitizenFemale02_AnimBP_C::ExecuteUbergraph_CitizenFemale02_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C.ExecuteUbergraph_CitizenFemale02_AnimBP");
		
		UCitizenFemale02_AnimBP_C_ExecuteUbergraph_CitizenFemale02_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCitizenFemale02_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCitizenFemale02_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C");
		return ptr;
	}

}


