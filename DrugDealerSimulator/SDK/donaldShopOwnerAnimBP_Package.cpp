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
	 * 		Name   -> Function donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdonaldShopOwnerAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C.BlueprintUpdateAnimation");
		
		UdonaldShopOwnerAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C.ExecuteUbergraph_donaldShopOwnerAnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UdonaldShopOwnerAnimBP_C::ExecuteUbergraph_donaldShopOwnerAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C.ExecuteUbergraph_donaldShopOwnerAnimBP");
		
		UdonaldShopOwnerAnimBP_C_ExecuteUbergraph_donaldShopOwnerAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UdonaldShopOwnerAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UdonaldShopOwnerAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C");
		return ptr;
	}

}


