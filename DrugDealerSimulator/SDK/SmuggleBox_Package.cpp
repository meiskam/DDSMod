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
	 * 		Name   -> Function SmuggleBox.SmuggleBox_C.CanAccessContainer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanAccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        DeclineReason                                              (Parm, OutParm)
	 */
	void ASmuggleBox_C::CanAccessContainer(bool* CanAccess, class FText* DeclineReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.CanAccessContainer");
		
		ASmuggleBox_C_CanAccessContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAccess != nullptr)
			*CanAccess = params.CanAccess;
		if (DeclineReason != nullptr)
			*DeclineReason = params.DeclineReason;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SmuggleBox.SmuggleBox_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASmuggleBox_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.UserConstructionScript");
		
		ASmuggleBox_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SmuggleBox.SmuggleBox_C.SmuggleContents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASmuggleBox_C::SmuggleContents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.SmuggleContents");
		
		ASmuggleBox_C_SmuggleContents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SmuggleBox.SmuggleBox_C.openEventScript
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASmuggleBox_C::openEventScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.openEventScript");
		
		ASmuggleBox_C_openEventScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SmuggleBox.SmuggleBox_C.closeEventScript
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASmuggleBox_C::closeEventScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.closeEventScript");
		
		ASmuggleBox_C_closeEventScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SmuggleBox.SmuggleBox_C.RamaLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASmuggleBox_C::RamaLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.RamaLoaded");
		
		ASmuggleBox_C_RamaLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function SmuggleBox.SmuggleBox_C.ExecuteUbergraph_SmuggleBox
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASmuggleBox_C::ExecuteUbergraph_SmuggleBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmuggleBox.SmuggleBox_C.ExecuteUbergraph_SmuggleBox");
		
		ASmuggleBox_C_ExecuteUbergraph_SmuggleBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASmuggleBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASmuggleBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SmuggleBox.SmuggleBox_C");
		return ptr;
	}

}


