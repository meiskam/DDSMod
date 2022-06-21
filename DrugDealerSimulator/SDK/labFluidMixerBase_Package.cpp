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
	 * 		Name   -> Function labFluidMixerBase.labFluidMixerBase_C.setEndMixForm
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EdrugForm                                          EndForm                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Humidity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlabFluidMixerBase_C::setEndMixForm(EdrugForm* EndForm, float* Humidity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.setEndMixForm");
		
		AlabFluidMixerBase_C_setEndMixForm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EndForm != nullptr)
			*EndForm = params.EndForm;
		if (Humidity != nullptr)
			*Humidity = params.Humidity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labFluidMixerBase.labFluidMixerBase_C.checkMixContents
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LiquidFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AlabFluidMixerBase_C::checkMixContents(bool* LiquidFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.checkMixContents");
		
		AlabFluidMixerBase_C_checkMixContents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiquidFound != nullptr)
			*LiquidFound = params.LiquidFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labFluidMixerBase.labFluidMixerBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlabFluidMixerBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.UserConstructionScript");
		
		AlabFluidMixerBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labFluidMixerBase.labFluidMixerBase_C.addSubstance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlabFluidMixerBase_C::addSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.addSubstance");
		
		AlabFluidMixerBase_C_addSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labFluidMixerBase.labFluidMixerBase_C.applyMix
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AlabFluidMixerBase_C::applyMix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.applyMix");
		
		AlabFluidMixerBase_C_applyMix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labFluidMixerBase.labFluidMixerBase_C.workFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlabFluidMixerBase_C::workFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.workFinished");
		
		AlabFluidMixerBase_C_workFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labFluidMixerBase.labFluidMixerBase_C.tryAddSubstance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AlabFluidMixerBase_C::tryAddSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.tryAddSubstance");
		
		AlabFluidMixerBase_C_tryAddSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function labFluidMixerBase.labFluidMixerBase_C.ExecuteUbergraph_labFluidMixerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AlabFluidMixerBase_C::ExecuteUbergraph_labFluidMixerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function labFluidMixerBase.labFluidMixerBase_C.ExecuteUbergraph_labFluidMixerBase");
		
		AlabFluidMixerBase_C_ExecuteUbergraph_labFluidMixerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AlabFluidMixerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AlabFluidMixerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass labFluidMixerBase.labFluidMixerBase_C");
		return ptr;
	}

}


