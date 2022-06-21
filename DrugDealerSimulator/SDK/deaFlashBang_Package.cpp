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
	 * 		Name   -> Function deaFlashBang.deaFlashBang_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdeaFlashBang_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.UserConstructionScript");
		
		AdeaFlashBang_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaFlashBang.deaFlashBang_C.fadeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AdeaFlashBang_C::fadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.fadeOut__FinishedFunc");
		
		AdeaFlashBang_C_fadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaFlashBang.deaFlashBang_C.fadeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AdeaFlashBang_C::fadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.fadeOut__UpdateFunc");
		
		AdeaFlashBang_C_fadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaFlashBang.deaFlashBang_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdeaFlashBang_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.ReceiveBeginPlay");
		
		AdeaFlashBang_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function deaFlashBang.deaFlashBang_C.ExecuteUbergraph_deaFlashBang
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdeaFlashBang_C::ExecuteUbergraph_deaFlashBang(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.ExecuteUbergraph_deaFlashBang");
		
		AdeaFlashBang_C_ExecuteUbergraph_deaFlashBang_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdeaFlashBang_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdeaFlashBang_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass deaFlashBang.deaFlashBang_C");
		return ptr;
	}

}


