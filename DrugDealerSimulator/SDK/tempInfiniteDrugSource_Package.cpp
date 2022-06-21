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
	 * 		Name   -> Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.getPackageIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Quan                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EdrugForm                                          Form                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  IconOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtempInfiniteDrugSource_C::getPackageIcon(int32_t Quan, EdrugForm Form, class UTexture2D** IconOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.getPackageIcon");
		
		AtempInfiniteDrugSource_C_getPackageIcon_Params params {};
		params.Quan = Quan;
		params.Form = Form;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconOut != nullptr)
			*IconOut = params.IconOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AtempInfiniteDrugSource_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.UserConstructionScript");
		
		AtempInfiniteDrugSource_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AtempInfiniteDrugSource_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ReceiveBeginPlay");
		
		AtempInfiniteDrugSource_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.resupplySource
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AtempInfiniteDrugSource_C::resupplySource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.resupplySource");
		
		AtempInfiniteDrugSource_C_resupplySource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ExecuteUbergraph_tempInfiniteDrugSource
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AtempInfiniteDrugSource_C::ExecuteUbergraph_tempInfiniteDrugSource(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ExecuteUbergraph_tempInfiniteDrugSource");
		
		AtempInfiniteDrugSource_C_ExecuteUbergraph_tempInfiniteDrugSource_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AtempInfiniteDrugSource_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AtempInfiniteDrugSource_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass tempInfiniteDrugSource.tempInfiniteDrugSource_C");
		return ptr;
	}

}


