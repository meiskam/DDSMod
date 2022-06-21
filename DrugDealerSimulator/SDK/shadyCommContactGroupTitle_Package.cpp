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
	 * 		Name   -> Function shadyCommContactGroupTitle.shadyCommContactGroupTitle_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UshadyCommContactGroupTitle_C::Setup(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommContactGroupTitle.shadyCommContactGroupTitle_C.Setup");
		
		UshadyCommContactGroupTitle_C_Setup_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyCommContactGroupTitle.shadyCommContactGroupTitle_C.ExecuteUbergraph_shadyCommContactGroupTitle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyCommContactGroupTitle_C::ExecuteUbergraph_shadyCommContactGroupTitle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyCommContactGroupTitle.shadyCommContactGroupTitle_C.ExecuteUbergraph_shadyCommContactGroupTitle");
		
		UshadyCommContactGroupTitle_C_ExecuteUbergraph_shadyCommContactGroupTitle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UshadyCommContactGroupTitle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UshadyCommContactGroupTitle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass shadyCommContactGroupTitle.shadyCommContactGroupTitle_C");
		return ptr;
	}

}


