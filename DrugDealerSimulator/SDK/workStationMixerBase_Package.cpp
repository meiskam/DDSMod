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
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.ExpandMixerRama
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::ExpandMixerRama()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.ExpandMixerRama");
		
		AworkStationMixerBase_C_ExpandMixerRama_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.calcByStrengthening
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              differenceMultiplier                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strengthening                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworkStationMixerBase_C::calcByStrengthening(float Value, float differenceMultiplier, float Strengthening, float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.calcByStrengthening");
		
		AworkStationMixerBase_C_calcByStrengthening_Params params {};
		params.Value = Value;
		params.differenceMultiplier = differenceMultiplier;
		params.Strengthening = Strengthening;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.calcPrecision
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              paramIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              paramOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworkStationMixerBase_C::calcPrecision(float paramIn, float* paramOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.calcPrecision");
		
		AworkStationMixerBase_C_calcPrecision_Params params {};
		params.paramIn = paramIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (paramOut != nullptr)
			*paramOut = params.paramOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.processMix
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FdrugData                                   mixProduct                                                 (Parm, OutParm, HasGetValueTypeHash)
	 * 		float                                              mixProductAmount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMixProportionsStruct                       OutMixProportions                                          (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AworkStationMixerBase_C::processMix(struct FdrugData* mixProduct, float* mixProductAmount, struct FMixProportionsStruct* OutMixProportions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.processMix");
		
		AworkStationMixerBase_C_processMix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (mixProduct != nullptr)
			*mixProduct = params.mixProduct;
		if (mixProductAmount != nullptr)
			*mixProductAmount = params.mixProductAmount;
		if (OutMixProportions != nullptr)
			*OutMixProportions = params.OutMixProportions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.showAddPopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AinteractiveBaseObject_C*                    substanceRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworkStationMixerBase_C::showAddPopup(class AinteractiveBaseObject_C* substanceRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.showAddPopup");
		
		AworkStationMixerBase_C_showAddPopup_Params params {};
		params.substanceRef = substanceRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.UserConstructionScript");
		
		AworkStationMixerBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.applyMix
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::applyMix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.applyMix");
		
		AworkStationMixerBase_C_applyMix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.workFinished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::workFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.workFinished");
		
		AworkStationMixerBase_C_workFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.addSubstance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::addSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.addSubstance");
		
		AworkStationMixerBase_C_addSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.displayMixDetails
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::displayMixDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.displayMixDetails");
		
		AworkStationMixerBase_C_displayMixDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.ReceiveBeginPlay");
		
		AworkStationMixerBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.displayApllyMix
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::displayApllyMix()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.displayApllyMix");
		
		AworkStationMixerBase_C_displayApllyMix_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.tryAddSubstance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::tryAddSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.tryAddSubstance");
		
		AworkStationMixerBase_C_tryAddSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.SubclassRamaLoad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworkStationMixerBase_C::SubclassRamaLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.SubclassRamaLoad");
		
		AworkStationMixerBase_C_SubclassRamaLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function workStationMixerBase.workStationMixerBase_C.ExecuteUbergraph_workStationMixerBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworkStationMixerBase_C::ExecuteUbergraph_workStationMixerBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function workStationMixerBase.workStationMixerBase_C.ExecuteUbergraph_workStationMixerBase");
		
		AworkStationMixerBase_C_ExecuteUbergraph_workStationMixerBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AworkStationMixerBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AworkStationMixerBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass workStationMixerBase.workStationMixerBase_C");
		return ptr;
	}

}


