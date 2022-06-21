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
	 * 		Name   -> Function asianStreetThug02.asianStreetThug02_C.reconstructMoneyCaseRef
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AasianStreetThug02_C::reconstructMoneyCaseRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function asianStreetThug02.asianStreetThug02_C.reconstructMoneyCaseRef");
		
		AasianStreetThug02_C_reconstructMoneyCaseRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function asianStreetThug02.asianStreetThug02_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AasianStreetThug02_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function asianStreetThug02.asianStreetThug02_C.UserConstructionScript");
		
		AasianStreetThug02_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function asianStreetThug02.asianStreetThug02_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AasianStreetThug02_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function asianStreetThug02.asianStreetThug02_C.ReceiveBeginPlay");
		
		AasianStreetThug02_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function asianStreetThug02.asianStreetThug02_C.tryGoingHome
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AasianStreetThug02_C::tryGoingHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function asianStreetThug02.asianStreetThug02_C.tryGoingHome");
		
		AasianStreetThug02_C_tryGoingHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function asianStreetThug02.asianStreetThug02_C.ExecuteUbergraph_asianStreetThug02
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AasianStreetThug02_C::ExecuteUbergraph_asianStreetThug02(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function asianStreetThug02.asianStreetThug02_C.ExecuteUbergraph_asianStreetThug02");
		
		AasianStreetThug02_C_ExecuteUbergraph_asianStreetThug02_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AasianStreetThug02_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AasianStreetThug02_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass asianStreetThug02.asianStreetThug02_C");
		return ptr;
	}

}


