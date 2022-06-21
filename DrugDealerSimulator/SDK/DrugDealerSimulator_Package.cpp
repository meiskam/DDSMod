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
	 * 		RVA    -> 0x004984B0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.MergeTakenEffects
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UAbsorbedSubstance*                          otherObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curConcentration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              substanceTolerance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::MergeTakenEffects(class UAbsorbedSubstance* otherObject, float curConcentration, float substanceTolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergeTakenEffects");
		
		UAbsorbedSubstance_MergeTakenEffects_Params params {};
		params.otherObject = otherObject;
		params.curConcentration = curConcentration;
		params.substanceTolerance = substanceTolerance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497E90
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.MergeSpiritImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Spirit*                                  Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::MergeSpiritImpact(class UEB_Spirit* Source, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergeSpiritImpact");
		
		UAbsorbedSubstance_MergeSpiritImpact_Params params {};
		params.Source = Source;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497E90
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.MergePhysicalImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Physical*                                Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::MergePhysicalImpact(class UEB_Physical* Source, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergePhysicalImpact");
		
		UAbsorbedSubstance_MergePhysicalImpact_Params params {};
		params.Source = Source;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497E90
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.MergePerceptionImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Perception*                              Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::MergePerceptionImpact(class UEB_Perception* Source, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergePerceptionImpact");
		
		UAbsorbedSubstance_MergePerceptionImpact_Params params {};
		params.Source = Source;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497E90
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.MergeHealthImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BodyHealth*                              Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::MergeHealthImpact(class UEB_BodyHealth* Source, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergeHealthImpact");
		
		UAbsorbedSubstance_MergeHealthImpact_Params params {};
		params.Source = Source;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497E90
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.MergeBrainFuncsImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BrainFunctions*                          Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::MergeBrainFuncsImpact(class UEB_BrainFunctions* Source, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.MergeBrainFuncsImpact");
		
		UAbsorbedSubstance_MergeBrainFuncsImpact_Params params {};
		params.Source = Source;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497D70
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.InitFactorHandler
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbsorbedSubstance::InitFactorHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.InitFactorHandler");
		
		UAbsorbedSubstance_InitFactorHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497C80
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.GetQualityFactor
	 * 		Flags  -> (Final, Native, Public)
	 */
	float UAbsorbedSubstance::GetQualityFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetQualityFactor");
		
		UAbsorbedSubstance_GetQualityFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497B60
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.GetPurityFactor
	 * 		Flags  -> (Final, Native, Public)
	 */
	float UAbsorbedSubstance::GetPurityFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetPurityFactor");
		
		UAbsorbedSubstance_GetPurityFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497B00
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.GetFirstPowerMomentTime
	 * 		Flags  -> (Final, Native, Public)
	 */
	float UAbsorbedSubstance::GetFirstPowerMomentTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetFirstPowerMomentTime");
		
		UAbsorbedSubstance_GetFirstPowerMomentTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004979E0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.GetExcretedAmount
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAbsorbedSubstance::GetExcretedAmount(float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetExcretedAmount");
		
		UAbsorbedSubstance_GetExcretedAmount_Params params {};
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497950
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.GetDecompositedAmunt
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAbsorbedSubstance::GetDecompositedAmunt(float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetDecompositedAmunt");
		
		UAbsorbedSubstance_GetDecompositedAmunt_Params params {};
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004976D0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.GetCurrentConcentration
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAbsorbedSubstance::GetCurrentConcentration(float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetCurrentConcentration");
		
		UAbsorbedSubstance_GetCurrentConcentration_Params params {};
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004975B0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.GetAbsorbedAmunt
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAbsorbedSubstance::GetAbsorbedAmunt(float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.GetAbsorbedAmunt");
		
		UAbsorbedSubstance_GetAbsorbedAmunt_Params params {};
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004974B0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.DeepCopySpirit
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Spirit*                                  Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::DeepCopySpirit(class UEB_Spirit* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopySpirit");
		
		UAbsorbedSubstance_DeepCopySpirit_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004973B0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPhysical
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Physical*                                Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::DeepCopyPhysical(class UEB_Physical* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPhysical");
		
		UAbsorbedSubstance_DeepCopyPhysical_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004972B0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPerception
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Perception*                              Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::DeepCopyPerception(class UEB_Perception* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPerception");
		
		UAbsorbedSubstance_DeepCopyPerception_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004971B0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyHealth
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BodyHealth*                              Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::DeepCopyHealth(class UEB_BodyHealth* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyHealth");
		
		UAbsorbedSubstance_DeepCopyHealth_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004970B0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBrainFuncs
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BrainFunctions*                          Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::DeepCopyBrainFuncs(class UEB_BrainFunctions* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBrainFuncs");
		
		UAbsorbedSubstance_DeepCopyBrainFuncs_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496FB0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBaseF
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BaseFactors*                             Source                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::DeepCopyBaseF(class UEB_BaseFactors* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBaseF");
		
		UAbsorbedSubstance_DeepCopyBaseF_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496E10
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstance.CalcInjection
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AHumanoidActor*                              injectedObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstance::CalcInjection(class AHumanoidActor* injectedObject, float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstance.CalcInjection");
		
		UAbsorbedSubstance_CalcInjection_Params params {};
		params.injectedObject = injectedObject;
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAbsorbedSubstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbsorbedSubstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AbsorbedSubstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004989E0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.SubstanceHaveExcreted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAbsorbedSubstanceComp::SubstanceHaveExcreted(float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.SubstanceHaveExcreted");
		
		UAbsorbedSubstanceComp_SubstanceHaveExcreted_Params params {};
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004988F0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.StoreSelfData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<float>                                      targetArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::StoreSelfData(TArray<float>* targetArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.StoreSelfData");
		
		UAbsorbedSubstanceComp_StoreSelfData_Params params {};
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetArray != nullptr)
			*targetArray = params.targetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00498720
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.RestoreFromData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		TArray<float>                                      sourceArray                                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::RestoreFromData(TArray<float> sourceArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.RestoreFromData");
		
		UAbsorbedSubstanceComp_RestoreFromData_Params params {};
		params.sourceArray = sourceArray;
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004985B0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeTakenEffects
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UAbsorbedSubstanceComp*                      otherObject                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASubstancesAndEffects*                       handler                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curConcentration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              substanceTolerance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::MergeTakenEffects(class UAbsorbedSubstanceComp* otherObject, class ASubstancesAndEffects* handler, float curConcentration, float substanceTolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeTakenEffects");
		
		UAbsorbedSubstanceComp_MergeTakenEffects_Params params {};
		params.otherObject = otherObject;
		params.handler = handler;
		params.curConcentration = curConcentration;
		params.substanceTolerance = substanceTolerance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004983A0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeSpiritImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Spirit*                                  Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASubstancesAndEffects*                       handler                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::MergeSpiritImpact(class UEB_Spirit* Source, class ASubstancesAndEffects* handler, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeSpiritImpact");
		
		UAbsorbedSubstanceComp_MergeSpiritImpact_Params params {};
		params.Source = Source;
		params.handler = handler;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00498290
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePhysicalImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Physical*                                Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASubstancesAndEffects*                       handler                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::MergePhysicalImpact(class UEB_Physical* Source, class ASubstancesAndEffects* handler, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePhysicalImpact");
		
		UAbsorbedSubstanceComp_MergePhysicalImpact_Params params {};
		params.Source = Source;
		params.handler = handler;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00498180
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePerceptionImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Perception*                              Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASubstancesAndEffects*                       handler                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::MergePerceptionImpact(class UEB_Perception* Source, class ASubstancesAndEffects* handler, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePerceptionImpact");
		
		UAbsorbedSubstanceComp_MergePerceptionImpact_Params params {};
		params.Source = Source;
		params.handler = handler;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00498070
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeHealthImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BodyHealth*                              Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASubstancesAndEffects*                       handler                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::MergeHealthImpact(class UEB_BodyHealth* Source, class ASubstancesAndEffects* handler, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeHealthImpact");
		
		UAbsorbedSubstanceComp_MergeHealthImpact_Params params {};
		params.Source = Source;
		params.handler = handler;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497F60
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeBrainFuncsImpact
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BrainFunctions*                          Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASubstancesAndEffects*                       handler                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::MergeBrainFuncsImpact(class UEB_BrainFunctions* Source, class ASubstancesAndEffects* handler, float takeFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeBrainFuncsImpact");
		
		UAbsorbedSubstanceComp_MergeBrainFuncsImpact_Params params {};
		params.Source = Source;
		params.handler = handler;
		params.takeFactor = takeFactor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497D90
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.InitFactorHandler
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UAbsorbedSubstanceComp::InitFactorHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.InitFactorHandler");
		
		UAbsorbedSubstanceComp_InitFactorHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497CB0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.GetQualityFactor
	 * 		Flags  -> (Final, Native, Public)
	 */
	float UAbsorbedSubstanceComp::GetQualityFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetQualityFactor");
		
		UAbsorbedSubstanceComp_GetQualityFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497B90
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.GetPurityFactor
	 * 		Flags  -> (Final, Native, Public)
	 */
	float UAbsorbedSubstanceComp::GetPurityFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetPurityFactor");
		
		UAbsorbedSubstanceComp_GetPurityFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497B00
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.GetFirstPowerMomentTime
	 * 		Flags  -> (Final, Native, Public)
	 */
	float UAbsorbedSubstanceComp::GetFirstPowerMomentTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetFirstPowerMomentTime");
		
		UAbsorbedSubstanceComp_GetFirstPowerMomentTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497A70
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.GetExcretedAmount
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAbsorbedSubstanceComp::GetExcretedAmount(float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetExcretedAmount");
		
		UAbsorbedSubstanceComp_GetExcretedAmount_Params params {};
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004978C0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.GetDecompositedAmount
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAbsorbedSubstanceComp::GetDecompositedAmount(float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetDecompositedAmount");
		
		UAbsorbedSubstanceComp_GetDecompositedAmount_Params params {};
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497760
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.GetCurrentConcentration
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAbsorbedSubstanceComp::GetCurrentConcentration(float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetCurrentConcentration");
		
		UAbsorbedSubstanceComp_GetCurrentConcentration_Params params {};
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497640
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.GetAbsorbedAmunt
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAbsorbedSubstanceComp::GetAbsorbedAmunt(float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.GetAbsorbedAmunt");
		
		UAbsorbedSubstanceComp_GetAbsorbedAmunt_Params params {};
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497530
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopySpirit
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Spirit*                                  Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::DeepCopySpirit(class UEB_Spirit* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopySpirit");
		
		UAbsorbedSubstanceComp_DeepCopySpirit_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497430
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPhysical
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Physical*                                Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::DeepCopyPhysical(class UEB_Physical* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPhysical");
		
		UAbsorbedSubstanceComp_DeepCopyPhysical_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497330
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPerception
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_Perception*                              Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::DeepCopyPerception(class UEB_Perception* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPerception");
		
		UAbsorbedSubstanceComp_DeepCopyPerception_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497230
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyHealth
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BodyHealth*                              Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::DeepCopyHealth(class UEB_BodyHealth* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyHealth");
		
		UAbsorbedSubstanceComp_DeepCopyHealth_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497130
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBrainFuncs
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BrainFunctions*                          Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::DeepCopyBrainFuncs(class UEB_BrainFunctions* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBrainFuncs");
		
		UAbsorbedSubstanceComp_DeepCopyBrainFuncs_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497030
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBaseF
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UEB_BaseFactors*                             Source                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::DeepCopyBaseF(class UEB_BaseFactors* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBaseF");
		
		UAbsorbedSubstanceComp_DeepCopyBaseF_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496EE0
	 * 		Name   -> Function DrugDealerSimulator.AbsorbedSubstanceComp.CalcInjection
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class AHumanoidActor*                              injectedObject                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAbsorbedSubstanceComp::CalcInjection(class AHumanoidActor* injectedObject, float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AbsorbedSubstanceComp.CalcInjection");
		
		UAbsorbedSubstanceComp_CalcInjection_Params params {};
		params.injectedObject = injectedObject;
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAbsorbedSubstanceComp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbsorbedSubstanceComp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AbsorbedSubstanceComp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAbsorbedSubstancesComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbsorbedSubstancesComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AbsorbedSubstancesComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AActionableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActionableActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.ActionableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497CE0
	 * 		Name   -> Function DrugDealerSimulator.ActiveSubstance.GetQualityFactorIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              inputQuality                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AActiveSubstance::GetQualityFactorIn(float inputQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ActiveSubstance.GetQualityFactorIn");
		
		AActiveSubstance_GetQualityFactorIn_Params params {};
		params.inputQuality = inputQuality;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497C50
	 * 		Name   -> Function DrugDealerSimulator.ActiveSubstance.GetQualityFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AActiveSubstance::GetQualityFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ActiveSubstance.GetQualityFactor");
		
		AActiveSubstance_GetQualityFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497BC0
	 * 		Name   -> Function DrugDealerSimulator.ActiveSubstance.GetPurityFactorIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              inputPurity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AActiveSubstance::GetPurityFactorIn(float inputPurity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ActiveSubstance.GetPurityFactorIn");
		
		AActiveSubstance_GetPurityFactorIn_Params params {};
		params.inputPurity = inputPurity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497B30
	 * 		Name   -> Function DrugDealerSimulator.ActiveSubstance.GetPurityFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AActiveSubstance::GetPurityFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ActiveSubstance.GetPurityFactor");
		
		AActiveSubstance_GetPurityFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AActiveSubstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AActiveSubstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.ActiveSubstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00498840
	 * 		Name   -> Function DrugDealerSimulator.AddictionComp.StoreSaveData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<float>                                      targetArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAddictionComp::StoreSaveData(TArray<float>* targetArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.StoreSaveData");
		
		UAddictionComp_StoreSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetArray != nullptr)
			*targetArray = params.targetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00498700
	 * 		Name   -> Function DrugDealerSimulator.AddictionComp.ResetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAddictionComp::ResetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.ResetData");
		
		UAddictionComp_ResetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497DB0
	 * 		Name   -> Function DrugDealerSimulator.AddictionComp.LoadSaveData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		TArray<float>                                      sourceArray                                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAddictionComp::LoadSaveData(TArray<float> sourceArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.LoadSaveData");
		
		UAddictionComp_LoadSaveData_Params params {};
		params.sourceArray = sourceArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004977F0
	 * 		Name   -> Function DrugDealerSimulator.AddictionComp.GetDataLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              checkTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAddictionComp::GetDataLevel(int32_t substanceIndex, float checkTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.GetDataLevel");
		
		UAddictionComp_GetDataLevel_Params params {};
		params.substanceIndex = substanceIndex;
		params.checkTime = checkTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00496C80
	 * 		Name   -> Function DrugDealerSimulator.AddictionComp.AddData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            newSubstanceIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              calcPower                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recoveryTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              recoveryOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAddictionComp::AddData(int32_t newSubstanceIndex, float takeTime, float calcPower, float recoveryTime, float recoveryOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AddictionComp.AddData");
		
		UAddictionComp_AddData_Params params {};
		params.newSubstanceIndex = newSubstanceIndex;
		params.takeTime = takeTime;
		params.calcPower = calcPower;
		params.recoveryTime = recoveryTime;
		params.recoveryOffset = recoveryOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAddictionComp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddictionComp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AddictionComp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAirComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAirComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AirComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAirProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAirProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AirProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_Alkaloid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_Alkaloid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Alkaloid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_Amfetamina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_Amfetamina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Amfetamina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_Diamorfina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_Diamorfina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Diamorfina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_Ergolina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_Ergolina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Ergolina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_MDMA.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_MDMA::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_MDMA");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_Metaamfetamina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_Metaamfetamina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Metaamfetamina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_Piperydyna.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_Piperydyna::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Piperydyna");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_Psylocybina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_Psylocybina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Psylocybina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_THC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_THC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_THC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_THCSativa.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_THCSativa::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_THCSativa");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAS_Tryptamina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAS_Tryptamina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AS_Tryptamina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00497B00
	 * 		Name   -> Function DrugDealerSimulator.AstralProfile.powerOnSurface
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AAstralProfile::powerOnSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AstralProfile.powerOnSurface");
		
		AAstralProfile_powerOnSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00498A70
	 * 		Name   -> Function DrugDealerSimulator.AstralProfile.heatPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AAstralProfile::heatPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AstralProfile.heatPower");
		
		AAstralProfile_heatPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAstralProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAstralProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.AstralProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BFD0
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.UserSawUpgrades
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ABU_ManagerActor::UserSawUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.UserSawUpgrades");
		
		ABU_ManagerActor_UserSawUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BE20
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.UpgradeBought
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UpgradeLineName                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABU_ManagerActor::UpgradeBought(int32_t NewLevel, const class FString& UpgradeLineName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.UpgradeBought");
		
		ABU_ManagerActor_UpgradeBought_Params params {};
		params.NewLevel = NewLevel;
		params.UpgradeLineName = UpgradeLineName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B700
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.RefreshBuildingObjects
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ABU_ManagerActor::RefreshBuildingObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.RefreshBuildingObjects");
		
		ABU_ManagerActor_RefreshBuildingObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B640
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.PrepareDataForUse
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ABU_ManagerActor::PrepareDataForUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.PrepareDataForUse");
		
		ABU_ManagerActor_PrepareDataForUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B470
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.LogUnseenDetails
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FBU_UnseenDetailsSets                       LogUnseenDetails                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ABU_ManagerActor::LogUnseenDetails(struct FBU_UnseenDetailsSets* LogUnseenDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.LogUnseenDetails");
		
		ABU_ManagerActor_LogUnseenDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LogUnseenDetails != nullptr)
			*LogUnseenDetails = params.LogUnseenDetails;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B330
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.LogUnseenData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FBU_UnseenUL                                LogUnseenUL                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	void ABU_ManagerActor::LogUnseenData(const struct FBU_UnseenUL& LogUnseenUL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.LogUnseenData");
		
		ABU_ManagerActor_LogUnseenData_Params params {};
		params.LogUnseenUL = LogUnseenUL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B310
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.LogMeOut
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	void ABU_ManagerActor::LogMeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.LogMeOut");
		
		ABU_ManagerActor_LogMeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049AF00
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.GetUnseenData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FBU_UnseenUL>                        OutUnseenData                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t ABU_ManagerActor::GetUnseenData(TArray<struct FBU_UnseenUL>* OutUnseenData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.GetUnseenData");
		
		ABU_ManagerActor_GetUnseenData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUnseenData != nullptr)
			*OutUnseenData = params.OutUnseenData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049AD20
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.GetMainLineUpgradeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ABU_ManagerActor::GetMainLineUpgradeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.GetMainLineUpgradeLevel");
		
		ABU_ManagerActor_GetMainLineUpgradeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ABE0
	 * 		Name   -> Function DrugDealerSimulator.BU_ManagerActor.GetAllUpgradeLines
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class ABU_UpgradeLineActor*>                OutReferenceList                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ABU_ManagerActor::GetAllUpgradeLines(TArray<class ABU_UpgradeLineActor*>* OutReferenceList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_ManagerActor.GetAllUpgradeLines");
		
		ABU_ManagerActor_GetAllUpgradeLines_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutReferenceList != nullptr)
			*OutReferenceList = params.OutReferenceList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABU_ManagerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABU_ManagerActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.BU_ManagerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049AD50
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeDetails.GetMaxUpgradeLevel
	 * 		Flags  -> (Final, Native, Public)
	 */
	int32_t ABU_UpgradeDetails::GetMaxUpgradeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeDetails.GetMaxUpgradeLevel");
		
		ABU_UpgradeDetails_GetMaxUpgradeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABU_UpgradeDetails.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABU_UpgradeDetails::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.BU_UpgradeDetails");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BF40
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.UpgradeToLevel
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            NewLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ABU_UpgradeLineActor::UpgradeToLevel(int32_t NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.UpgradeToLevel");
		
		ABU_UpgradeLineActor_UpgradeToLevel_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B740
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetailsAfterLoad
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ABU_UpgradeLineActor::RefreshDetailsAfterLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetailsAfterLoad");
		
		ABU_UpgradeLineActor_RefreshDetailsAfterLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B720
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetails
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ABU_UpgradeLineActor::RefreshDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetails");
		
		ABU_UpgradeLineActor_RefreshDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B660
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.ProcessForLevel
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            procLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABU_UpgradeLineActor::ProcessForLevel(int32_t procLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.ProcessForLevel");
		
		ABU_UpgradeLineActor_ProcessForLevel_Params params {};
		params.procLevel = procLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B550
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradePrice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ABU_UpgradeLineActor::NextUpgradePrice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradePrice");
		
		ABU_UpgradeLineActor_NextUpgradePrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B520
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradeLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ABU_UpgradeLineActor::NextUpgradeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradeLevel");
		
		ABU_UpgradeLineActor_NextUpgradeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B2B0
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailableForUpgrade
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ABU_UpgradeLineActor::IsAvailableForUpgrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailableForUpgrade");
		
		ABU_UpgradeLineActor_IsAvailableForUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B280
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ABU_UpgradeLineActor::IsAvailable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailable");
		
		ABU_UpgradeLineActor_IsAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B230
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.HasAllUpgrades
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ABU_UpgradeLineActor::HasAllUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.HasAllUpgrades");
		
		ABU_UpgradeLineActor_HasAllUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B010
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.GetUpgradeCost
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            procLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ABU_UpgradeLineActor::GetUpgradeCost(int32_t procLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.GetUpgradeCost");
		
		ABU_UpgradeLineActor_GetUpgradeCost_Params params {};
		params.procLevel = procLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049AD80
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.GetMaxUpgradeLevel
	 * 		Flags  -> (Final, Native, Public)
	 */
	int32_t ABU_UpgradeLineActor::GetMaxUpgradeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.GetMaxUpgradeLevel");
		
		ABU_UpgradeLineActor_GetMaxUpgradeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049AC90
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.GetLevelPrice
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            procLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ABU_UpgradeLineActor::GetLevelPrice(int32_t procLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.GetLevelPrice");
		
		ABU_UpgradeLineActor_GetLevelPrice_Params params {};
		params.procLevel = procLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049AAA0
	 * 		Name   -> Function DrugDealerSimulator.BU_UpgradeLineActor.AdaptMaxLevel
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ABU_UpgradeLineActor::AdaptMaxLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.BU_UpgradeLineActor.AdaptMaxLevel");
		
		ABU_UpgradeLineActor_AdaptMaxLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABU_UpgradeLineActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABU_UpgradeLineActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.BU_UpgradeLineActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049C120
	 * 		Name   -> Function DrugDealerSimulator.CepSaveTester.noticeAction
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ACepSaveTester::noticeAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepSaveTester.noticeAction");
		
		ACepSaveTester_noticeAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049C0B0
	 * 		Name   -> Function DrugDealerSimulator.CepSaveTester.getCount
	 * 		Flags  -> (Final, Native, Public)
	 */
	int32_t ACepSaveTester::getCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepSaveTester.getCount");
		
		ACepSaveTester_getCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ACepSaveTester.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACepSaveTester::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.CepSaveTester");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049C080
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherComponent.YearPassed
	 * 		Flags  -> (Final, Native, Protected)
	 */
	float UCepWeatherComponent::YearPassed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.YearPassed");
		
		UCepWeatherComponent_YearPassed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049C020
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherComponent.YearDay
	 * 		Flags  -> (Final, Native, Public)
	 */
	int32_t UCepWeatherComponent::YearDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.YearDay");
		
		UCepWeatherComponent_YearDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BBB0
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherComponent.SetupRain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            datNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              rainLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              rainDensity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCepWeatherComponent::SetupRain(int32_t datNum, float rainLength, float rainDensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.SetupRain");
		
		UCepWeatherComponent_SetupRain_Params params {};
		params.datNum = datNum;
		params.rainLength = rainLength;
		params.rainDensity = rainDensity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B880
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherComponent.SaveDataSnapshot
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCepWeatherComponent::SaveDataSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.SaveDataSnapshot");
		
		UCepWeatherComponent_SaveDataSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B6E0
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherComponent.RecoverDataSnapshot
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCepWeatherComponent::RecoverDataSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.RecoverDataSnapshot");
		
		UCepWeatherComponent_RecoverDataSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B580
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherComponent.NextYearDay
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            curDay                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Op                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCepWeatherComponent::NextYearDay(int32_t curDay, int32_t Op)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.NextYearDay");
		
		UCepWeatherComponent_NextYearDay_Params params {};
		params.curDay = curDay;
		params.Op = Op;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049C100
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherComponent.Init
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCepWeatherComponent::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.Init");
		
		UCepWeatherComponent_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCepWeatherComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCepWeatherComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.CepWeatherComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049C050
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherProfile.YearPassed
	 * 		Flags  -> (Final, Native, Protected)
	 */
	float ACepWeatherProfile::YearPassed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherProfile.YearPassed");
		
		ACepWeatherProfile_YearPassed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BFF0
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherProfile.YearDay
	 * 		Flags  -> (Final, Native, Public)
	 */
	int32_t ACepWeatherProfile::YearDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherProfile.YearDay");
		
		ACepWeatherProfile_YearDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049C0E0
	 * 		Name   -> Function DrugDealerSimulator.CepWeatherProfile.Init
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ACepWeatherProfile::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherProfile.Init");
		
		ACepWeatherProfile_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ACepWeatherProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACepWeatherProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.CepWeatherProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BCB0
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.StartCommitSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              newStartVal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDayConditionsLogger_UE::StartCommitSession(float newStartVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.StartCommitSession");
		
		UDayConditionsLogger_UE_StartCommitSession_Params params {};
		params.newStartVal = newStartVal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BAE0
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDayConditionsLogger_UE::SetValueByIndex(int32_t Index, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByIndex");
		
		UDayConditionsLogger_UE_SetValueByIndex_Params params {};
		params.Index = Index;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B950
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByHour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              setHour                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDayConditionsLogger_UE::SetValueByHour(float setHour, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByHour");
		
		UDayConditionsLogger_UE_SetValueByHour_Params params {};
		params.setHour = setHour;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B8A0
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.SeekIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              seekHour                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDayConditionsLogger_UE::SeekIndex(float seekHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.SeekIndex");
		
		UDayConditionsLogger_UE_SeekIndex_Params params {};
		params.seekHour = seekHour;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B2E0
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.IsInCommitMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UDayConditionsLogger_UE::IsInCommitMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.IsInCommitMode");
		
		UDayConditionsLogger_UE_IsInCommitMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B200
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.GetValuesLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UDayConditionsLogger_UE::GetValuesLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetValuesLength");
		
		UDayConditionsLogger_UE_GetValuesLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B170
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SeekIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDayConditionsLogger_UE::GetValueByIndex(int32_t SeekIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByIndex");
		
		UDayConditionsLogger_UE_GetValueByIndex_Params params {};
		params.SeekIndex = SeekIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B0A0
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByHour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              seekHour                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               extrapolateValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDayConditionsLogger_UE::GetValueByHour(float seekHour, bool extrapolateValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByHour");
		
		UDayConditionsLogger_UE_GetValueByHour_Params params {};
		params.seekHour = seekHour;
		params.extrapolateValue = extrapolateValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049AE70
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.GetSum
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            maxIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UDayConditionsLogger_UE::GetSum(int32_t maxIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetSum");
		
		UDayConditionsLogger_UE_GetSum_Params params {};
		params.maxIndex = maxIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ADB0
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.GetNextIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            curIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Op                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UDayConditionsLogger_UE::GetNextIndex(int32_t curIndex, int32_t Op)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetNextIndex");
		
		UDayConditionsLogger_UE_GetNextIndex_Params params {};
		params.curIndex = curIndex;
		params.Op = Op;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049AAE0
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.EndCommitSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              newEndVal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               followToEnd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDayConditionsLogger_UE::EndCommitSession(float newEndVal, bool followToEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.EndCommitSession");
		
		UDayConditionsLogger_UE_EndCommitSession_Params params {};
		params.newEndVal = newEndVal;
		params.followToEnd = followToEnd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049AAC0
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLogger_UE.ClassInit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDayConditionsLogger_UE::ClassInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.ClassInit");
		
		UDayConditionsLogger_UE_ClassInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDayConditionsLogger_UE.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDayConditionsLogger_UE::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.DayConditionsLogger_UE");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BA10
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLoggerComponent.SetValueByIndex
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDayConditionsLoggerComponent::SetValueByIndex(int32_t Index, float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLoggerComponent.SetValueByIndex");
		
		UDayConditionsLoggerComponent_SetValueByIndex_Params params {};
		params.Index = Index;
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B260
	 * 		Name   -> Function DrugDealerSimulator.DayConditionsLoggerComponent.Init
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UDayConditionsLoggerComponent::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLoggerComponent.Init");
		
		UDayConditionsLoggerComponent_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDayConditionsLoggerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDayConditionsLoggerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.DayConditionsLoggerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDrugsEffectsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrugsEffectsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.DrugsEffectsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BD30
	 * 		Name   -> Function DrugDealerSimulator.EB_BaseFactors.StoreSelfData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<float>                                      targetArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_BaseFactors::StoreSelfData(TArray<float>* targetArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BaseFactors.StoreSelfData");
		
		UEB_BaseFactors_StoreSelfData_Params params {};
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetArray != nullptr)
			*targetArray = params.targetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B930
	 * 		Name   -> Function DrugDealerSimulator.EB_BaseFactors.SetClassBasics
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEB_BaseFactors::SetClassBasics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BaseFactors.SetClassBasics");
		
		UEB_BaseFactors_SetClassBasics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B760
	 * 		Name   -> Function DrugDealerSimulator.EB_BaseFactors.RestoreFromData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		TArray<float>                                      sourceArray                                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_BaseFactors::RestoreFromData(TArray<float> sourceArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BaseFactors.RestoreFromData");
		
		UEB_BaseFactors_RestoreFromData_Params params {};
		params.sourceArray = sourceArray;
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ABB0
	 * 		Name   -> Function DrugDealerSimulator.EB_BaseFactors.GetAddictivnessFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UEB_BaseFactors::GetAddictivnessFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BaseFactors.GetAddictivnessFactor");
		
		UEB_BaseFactors_GetAddictivnessFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEB_BaseFactors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEB_BaseFactors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.EB_BaseFactors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FEE0
	 * 		Name   -> Function DrugDealerSimulator.EB_BodyHealth.StoreSelfData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<float>                                      targetArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_BodyHealth::StoreSelfData(TArray<float>* targetArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.StoreSelfData");
		
		UEB_BodyHealth_StoreSelfData_Params params {};
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetArray != nullptr)
			*targetArray = params.targetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FCD0
	 * 		Name   -> Function DrugDealerSimulator.EB_BodyHealth.SetClassBasics
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEB_BodyHealth::SetClassBasics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.SetClassBasics");
		
		UEB_BodyHealth_SetClassBasics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F640
	 * 		Name   -> Function DrugDealerSimulator.EB_BodyHealth.RestoreFromData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		TArray<float>                                      sourceArray                                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_BodyHealth::RestoreFromData(TArray<float> sourceArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.RestoreFromData");
		
		UEB_BodyHealth_RestoreFromData_Params params {};
		params.sourceArray = sourceArray;
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EE50
	 * 		Name   -> Function DrugDealerSimulator.EB_BodyHealth.InitAsValuesStorage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_BodyHealth::InitAsValuesStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.InitAsValuesStorage");
		
		UEB_BodyHealth_InitAsValuesStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ECB0
	 * 		Name   -> Function DrugDealerSimulator.EB_BodyHealth.InitAsMinClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_BodyHealth::InitAsMinClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.InitAsMinClamp");
		
		UEB_BodyHealth_InitAsMinClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ED50
	 * 		Name   -> Function DrugDealerSimulator.EB_BodyHealth.InitAsMaxClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_BodyHealth::InitAsMaxClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.InitAsMaxClamp");
		
		UEB_BodyHealth_InitAsMaxClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ECB0
	 * 		Name   -> Function DrugDealerSimulator.EB_BodyHealth.InitAsFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_BodyHealth::InitAsFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BodyHealth.InitAsFactor");
		
		UEB_BodyHealth_InitAsFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEB_BodyHealth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEB_BodyHealth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.EB_BodyHealth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FFD0
	 * 		Name   -> Function DrugDealerSimulator.EB_BrainFunctions.StoreSelfData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<float>                                      targetArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_BrainFunctions::StoreSelfData(TArray<float>* targetArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.StoreSelfData");
		
		UEB_BrainFunctions_StoreSelfData_Params params {};
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetArray != nullptr)
			*targetArray = params.targetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FCF0
	 * 		Name   -> Function DrugDealerSimulator.EB_BrainFunctions.SetClassBasics
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEB_BrainFunctions::SetClassBasics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.SetClassBasics");
		
		UEB_BrainFunctions_SetClassBasics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F760
	 * 		Name   -> Function DrugDealerSimulator.EB_BrainFunctions.RestoreFromData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		TArray<float>                                      sourceArray                                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_BrainFunctions::RestoreFromData(TArray<float> sourceArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.RestoreFromData");
		
		UEB_BrainFunctions_RestoreFromData_Params params {};
		params.sourceArray = sourceArray;
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ED70
	 * 		Name   -> Function DrugDealerSimulator.EB_BrainFunctions.InitAsValuesStorage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_BrainFunctions::InitAsValuesStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.InitAsValuesStorage");
		
		UEB_BrainFunctions_InitAsValuesStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EDF0
	 * 		Name   -> Function DrugDealerSimulator.EB_BrainFunctions.InitAsMinClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_BrainFunctions::InitAsMinClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.InitAsMinClamp");
		
		UEB_BrainFunctions_InitAsMinClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ED70
	 * 		Name   -> Function DrugDealerSimulator.EB_BrainFunctions.InitAsMaxClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_BrainFunctions::InitAsMaxClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.InitAsMaxClamp");
		
		UEB_BrainFunctions_InitAsMaxClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ECD0
	 * 		Name   -> Function DrugDealerSimulator.EB_BrainFunctions.InitAsFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_BrainFunctions::InitAsFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_BrainFunctions.InitAsFactor");
		
		UEB_BrainFunctions_InitAsFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEB_BrainFunctions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEB_BrainFunctions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.EB_BrainFunctions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A00C0
	 * 		Name   -> Function DrugDealerSimulator.EB_Perception.StoreSelfData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<float>                                      targetArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_Perception::StoreSelfData(TArray<float>* targetArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.StoreSelfData");
		
		UEB_Perception_StoreSelfData_Params params {};
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetArray != nullptr)
			*targetArray = params.targetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FD10
	 * 		Name   -> Function DrugDealerSimulator.EB_Perception.SetClassBasics
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEB_Perception::SetClassBasics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.SetClassBasics");
		
		UEB_Perception_SetClassBasics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F880
	 * 		Name   -> Function DrugDealerSimulator.EB_Perception.RestoreFromData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		TArray<float>                                      sourceArray                                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_Perception::RestoreFromData(TArray<float> sourceArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.RestoreFromData");
		
		UEB_Perception_RestoreFromData_Params params {};
		params.sourceArray = sourceArray;
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ECF0
	 * 		Name   -> Function DrugDealerSimulator.EB_Perception.InitAsValuesStorage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Perception::InitAsValuesStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.InitAsValuesStorage");
		
		UEB_Perception_InitAsValuesStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EE10
	 * 		Name   -> Function DrugDealerSimulator.EB_Perception.InitAsMinClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Perception::InitAsMinClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.InitAsMinClamp");
		
		UEB_Perception_InitAsMinClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ED90
	 * 		Name   -> Function DrugDealerSimulator.EB_Perception.InitAsMaxClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Perception::InitAsMaxClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.InitAsMaxClamp");
		
		UEB_Perception_InitAsMaxClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ECF0
	 * 		Name   -> Function DrugDealerSimulator.EB_Perception.InitAsFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Perception::InitAsFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Perception.InitAsFactor");
		
		UEB_Perception_InitAsFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEB_Perception.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEB_Perception::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.EB_Perception");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A01B0
	 * 		Name   -> Function DrugDealerSimulator.EB_Physical.StoreSelfData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<float>                                      targetArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_Physical::StoreSelfData(TArray<float>* targetArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.StoreSelfData");
		
		UEB_Physical_StoreSelfData_Params params {};
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetArray != nullptr)
			*targetArray = params.targetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FD30
	 * 		Name   -> Function DrugDealerSimulator.EB_Physical.SetClassBasics
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEB_Physical::SetClassBasics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.SetClassBasics");
		
		UEB_Physical_SetClassBasics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F9A0
	 * 		Name   -> Function DrugDealerSimulator.EB_Physical.RestoreFromData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		TArray<float>                                      sourceArray                                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_Physical::RestoreFromData(TArray<float> sourceArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.RestoreFromData");
		
		UEB_Physical_RestoreFromData_Params params {};
		params.sourceArray = sourceArray;
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ED10
	 * 		Name   -> Function DrugDealerSimulator.EB_Physical.InitAsValuesStorage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Physical::InitAsValuesStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.InitAsValuesStorage");
		
		UEB_Physical_InitAsValuesStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EE30
	 * 		Name   -> Function DrugDealerSimulator.EB_Physical.InitAsMinClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Physical::InitAsMinClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.InitAsMinClamp");
		
		UEB_Physical_InitAsMinClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EDB0
	 * 		Name   -> Function DrugDealerSimulator.EB_Physical.InitAsMaxClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Physical::InitAsMaxClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.InitAsMaxClamp");
		
		UEB_Physical_InitAsMaxClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ED10
	 * 		Name   -> Function DrugDealerSimulator.EB_Physical.InitAsFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Physical::InitAsFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Physical.InitAsFactor");
		
		UEB_Physical_InitAsFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEB_Physical.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEB_Physical::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.EB_Physical");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A02A0
	 * 		Name   -> Function DrugDealerSimulator.EB_Spirit.StoreSelfData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, Const)
	 * Parameters:
	 * 		TArray<float>                                      targetArray                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_Spirit::StoreSelfData(TArray<float>* targetArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.StoreSelfData");
		
		UEB_Spirit_StoreSelfData_Params params {};
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetArray != nullptr)
			*targetArray = params.targetArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FD50
	 * 		Name   -> Function DrugDealerSimulator.EB_Spirit.SetClassBasics
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UEB_Spirit::SetClassBasics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.SetClassBasics");
		
		UEB_Spirit_SetClassBasics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FAC0
	 * 		Name   -> Function DrugDealerSimulator.EB_Spirit.RestoreFromData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		TArray<float>                                      sourceArray                                                (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            baseOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEB_Spirit::RestoreFromData(TArray<float> sourceArray, int32_t baseOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.RestoreFromData");
		
		UEB_Spirit_RestoreFromData_Params params {};
		params.sourceArray = sourceArray;
		params.baseOffset = baseOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EE70
	 * 		Name   -> Function DrugDealerSimulator.EB_Spirit.InitAsValuesStorage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Spirit::InitAsValuesStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.InitAsValuesStorage");
		
		UEB_Spirit_InitAsValuesStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ED30
	 * 		Name   -> Function DrugDealerSimulator.EB_Spirit.InitAsMinClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Spirit::InitAsMinClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.InitAsMinClamp");
		
		UEB_Spirit_InitAsMinClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EDD0
	 * 		Name   -> Function DrugDealerSimulator.EB_Spirit.InitAsMaxClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Spirit::InitAsMaxClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.InitAsMaxClamp");
		
		UEB_Spirit_InitAsMaxClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049ED30
	 * 		Name   -> Function DrugDealerSimulator.EB_Spirit.InitAsFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UEB_Spirit::InitAsFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.EB_Spirit.InitAsFactor");
		
		UEB_Spirit_InitAsFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEB_Spirit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEB_Spirit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.EB_Spirit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AHealthTestActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHealthTestActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.HealthTestActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FD70
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.SetTestInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            newInt                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHumanoidActor::SetTestInt(int32_t newInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.SetTestInt");
		
		AHumanoidActor_SetTestInt_Params params {};
		params.newInt = newInt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FBE0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.SaveDataSnapshot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AHumanoidActor::SaveDataSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.SaveDataSnapshot");
		
		AHumanoidActor_SaveDataSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F620
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.RestoreDataSnapshot
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AHumanoidActor::RestoreDataSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.RestoreDataSnapshot");
		
		AHumanoidActor_RestoreDataSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F1C0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.NoticeDrugTook
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActiveSubstance*                            valuesProvider                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takenMass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHumanoidActor::NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.NoticeDrugTook");
		
		AHumanoidActor_NoticeDrugTook_Params params {};
		params.substanceActor = substanceActor;
		params.valuesProvider = valuesProvider;
		params.takenMass = takenMass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F040
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.IsSubstanceEffective
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHumanoidActor::IsSubstanceEffective(int32_t substanceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.IsSubstanceEffective");
		
		AHumanoidActor_IsSubstanceEffective_Params params {};
		params.substanceIndex = substanceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EF70
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.IsSubstanceBeingAbsorbed
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              checkDayTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AHumanoidActor::IsSubstanceBeingAbsorbed(int32_t substanceIndex, float checkDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.IsSubstanceBeingAbsorbed");
		
		AHumanoidActor_IsSubstanceBeingAbsorbed_Params params {};
		params.substanceIndex = substanceIndex;
		params.checkDayTime = checkDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E9A0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.GetToleranceDataLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curDayTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AHumanoidActor::GetToleranceDataLevel(int32_t substanceIndex, float curDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetToleranceDataLevel");
		
		AHumanoidActor_GetToleranceDataLevel_Params params {};
		params.substanceIndex = substanceIndex;
		params.curDayTime = curDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E8A0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.GetToleranceDataInFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curDayTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AHumanoidActor::GetToleranceDataInFactor(int32_t substanceIndex, float InValue, float curDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetToleranceDataInFactor");
		
		AHumanoidActor_GetToleranceDataInFactor_Params params {};
		params.substanceIndex = substanceIndex;
		params.InValue = InValue;
		params.curDayTime = curDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E7D0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.GetToleranceDataFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curDayTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AHumanoidActor::GetToleranceDataFactor(int32_t substanceIndex, float curDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetToleranceDataFactor");
		
		AHumanoidActor_GetToleranceDataFactor_Params params {};
		params.substanceIndex = substanceIndex;
		params.curDayTime = curDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049C0B0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.GetTestInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AHumanoidActor::GetTestInt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetTestInt");
		
		AHumanoidActor_GetTestInt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E5E0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.GetCurrentConcentration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AHumanoidActor::GetCurrentConcentration(int32_t substanceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetCurrentConcentration");
		
		AHumanoidActor_GetCurrentConcentration_Params params {};
		params.substanceIndex = substanceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E370
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.GetAddictionDataLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curDayTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AHumanoidActor::GetAddictionDataLevel(int32_t substanceIndex, float curDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetAddictionDataLevel");
		
		AHumanoidActor_GetAddictionDataLevel_Params params {};
		params.substanceIndex = substanceIndex;
		params.curDayTime = curDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E270
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.GetAddictionDataInFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curDayTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AHumanoidActor::GetAddictionDataInFactor(int32_t substanceIndex, float InValue, float curDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetAddictionDataInFactor");
		
		AHumanoidActor_GetAddictionDataInFactor_Params params {};
		params.substanceIndex = substanceIndex;
		params.InValue = InValue;
		params.curDayTime = curDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E1A0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.GetAddictionDataFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curDayTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AHumanoidActor::GetAddictionDataFactor(int32_t substanceIndex, float curDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.GetAddictionDataFactor");
		
		AHumanoidActor_GetAddictionDataFactor_Params params {};
		params.substanceIndex = substanceIndex;
		params.curDayTime = curDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E020
	 * 		Name   -> Function DrugDealerSimulator.HumanoidActor.ApplySubstance
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              currentValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curConcentration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHumanoidActor::ApplySubstance(float* currentValue, float Tolerance, float curConcentration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidActor.ApplySubstance");
		
		AHumanoidActor_ApplySubstance_Params params {};
		params.Tolerance = Tolerance;
		params.curConcentration = curConcentration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currentValue != nullptr)
			*currentValue = params.currentValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AHumanoidActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHumanoidActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.HumanoidActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FDF0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidComponent.SetToleranceLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHumanoidComponent::SetToleranceLevel(class AActiveSubstance* substanceActor, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.SetToleranceLevel");
		
		UHumanoidComponent_SetToleranceLevel_Params params {};
		params.substanceActor = substanceActor;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FC00
	 * 		Name   -> Function DrugDealerSimulator.HumanoidComponent.SetAddictionLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHumanoidComponent::SetAddictionLevel(class AActiveSubstance* substanceActor, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.SetAddictionLevel");
		
		UHumanoidComponent_SetAddictionLevel_Params params {};
		params.substanceActor = substanceActor;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F2D0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidComponent.NoticeDrugTook
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActiveSubstance*                            valuesProvider                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takenMass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHumanoidComponent::NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.NoticeDrugTook");
		
		UHumanoidComponent_NoticeDrugTook_Params params {};
		params.substanceActor = substanceActor;
		params.valuesProvider = valuesProvider;
		params.takenMass = takenMass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EBE0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidComponent.GetToleranceLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHumanoidComponent::GetToleranceLevel(class AActiveSubstance* substanceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetToleranceLevel");
		
		UHumanoidComponent_GetToleranceLevel_Params params {};
		params.substanceActor = substanceActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EB10
	 * 		Name   -> Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactorIn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHumanoidComponent::GetToleranceFactorIn(class AActiveSubstance* substanceActor, float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactorIn");
		
		UHumanoidComponent_GetToleranceFactorIn_Params params {};
		params.substanceActor = substanceActor;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EA70
	 * 		Name   -> Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHumanoidComponent::GetToleranceFactor(class AActiveSubstance* substanceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactor");
		
		UHumanoidComponent_GetToleranceFactor_Params params {};
		params.substanceActor = substanceActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E4E0
	 * 		Name   -> Function DrugDealerSimulator.HumanoidComponent.GetAddictionLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHumanoidComponent::GetAddictionLevel(class AActiveSubstance* substanceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetAddictionLevel");
		
		UHumanoidComponent_GetAddictionLevel_Params params {};
		params.substanceActor = substanceActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E440
	 * 		Name   -> Function DrugDealerSimulator.HumanoidComponent.GetAddictionFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHumanoidComponent::GetAddictionFactor(class AActiveSubstance* substanceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.GetAddictionFactor");
		
		UHumanoidComponent_GetAddictionFactor_Params params {};
		params.substanceActor = substanceActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E020
	 * 		Name   -> Function DrugDealerSimulator.HumanoidComponent.ApplySubstance
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              currentValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              curConcentration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHumanoidComponent::ApplySubstance(float* currentValue, float Tolerance, float curConcentration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.HumanoidComponent.ApplySubstance");
		
		UHumanoidComponent_ApplySubstance_Params params {};
		params.Tolerance = Tolerance;
		params.curConcentration = curConcentration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currentValue != nullptr)
			*currentValue = params.currentValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHumanoidComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHumanoidComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.HumanoidComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A03B0
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.UnlockedDone
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ALockpickPuzzle::UnlockedDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.UnlockedDone");
		
		ALockpickPuzzle_UnlockedDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049FEC0
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.StartTakingDamage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ALockpickPuzzle::StartTakingDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.StartTakingDamage");
		
		ALockpickPuzzle_StartTakingDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F590
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.ResetPuzzle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               ResetUnlockPosition                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALockpickPuzzle::ResetPuzzle(bool ResetUnlockPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.ResetPuzzle");
		
		ALockpickPuzzle_ResetPuzzle_Params params {};
		params.ResetUnlockPosition = ResetUnlockPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F450
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.PushMouseInput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALockpickPuzzle::PushMouseInput(float X, float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.PushMouseInput");
		
		ALockpickPuzzle_PushMouseInput_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F0D0
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.IsUnlocked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ALockpickPuzzle::IsUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.IsUnlocked");
		
		ALockpickPuzzle_IsUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EF40
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.IsScrewDriverInUnlockZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ALockpickPuzzle::IsScrewDriverInUnlockZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.IsScrewDriverInUnlockZone");
		
		ALockpickPuzzle_IsScrewDriverInUnlockZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EEE0
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.IsBobbyPinInUnlockZone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ALockpickPuzzle::IsBobbyPinInUnlockZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.IsBobbyPinInUnlockZone");
		
		ALockpickPuzzle_IsBobbyPinInUnlockZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EC80
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.HasBoobyPinBroke
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ALockpickPuzzle::HasBoobyPinBroke()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.HasBoobyPinBroke");
		
		ALockpickPuzzle_HasBoobyPinBroke_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E770
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.GetScrewDriverAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ALockpickPuzzle::GetScrewDriverAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetScrewDriverAngle");
		
		ALockpickPuzzle_GetScrewDriverAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E6A0
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.GetDifficultyMeta
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            optNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ALockpickPuzzle::GetDifficultyMeta(int32_t optNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetDifficultyMeta");
		
		ALockpickPuzzle_GetDifficultyMeta_Params params {};
		params.optNum = optNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E670
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.GetCurrentResistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ALockpickPuzzle::GetCurrentResistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetCurrentResistance");
		
		ALockpickPuzzle_GetCurrentResistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E5B0
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinHealth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ALockpickPuzzle::GetBobbyPinHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinHealth");
		
		ALockpickPuzzle_GetBobbyPinHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E580
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ALockpickPuzzle::GetBobbyPinAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinAngle");
		
		ALockpickPuzzle_GetBobbyPinAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E180
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.EndTakingDamage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ALockpickPuzzle::EndTakingDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.EndTakingDamage");
		
		ALockpickPuzzle_EndTakingDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E130
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.BrokenEvent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void ALockpickPuzzle::BrokenEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.BrokenEvent");
		
		ALockpickPuzzle_BrokenEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E000
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.ActionButtonReleased
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALockpickPuzzle::ActionButtonReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.ActionButtonReleased");
		
		ALockpickPuzzle_ActionButtonReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049DFE0
	 * 		Name   -> Function DrugDealerSimulator.LockpickPuzzle.ActionButtonPressed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ALockpickPuzzle::ActionButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.ActionButtonPressed");
		
		ALockpickPuzzle_ActionButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALockpickPuzzle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALockpickPuzzle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.LockpickPuzzle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A0420
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.WTACStoreInSaveSpace
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UNextSingleton::WTACStoreInSaveSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.WTACStoreInSaveSpace");
		
		UNextSingleton_WTACStoreInSaveSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A0400
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.WTACRecover
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UNextSingleton::WTACRecover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.WTACRecover");
		
		UNextSingleton_WTACRecover_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A03D0
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.ValidateWorld
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UNextSingleton::ValidateWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ValidateWorld");
		
		UNextSingleton_ValidateWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A0390
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.TestCallFunction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UNextSingleton::TestCallFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.TestCallFunction");
		
		UNextSingleton_TestCallFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F570
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.ResearchWorld
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UNextSingleton::ResearchWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ResearchWorld");
		
		UNextSingleton_ResearchWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F510
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.ReInitWTAC
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UNextSingleton::ReInitWTAC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ReInitWTAC");
		
		UNextSingleton_ReInitWTAC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F550
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.ReassignWorld
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UNextSingleton::ReassignWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ReassignWorld");
		
		UNextSingleton_ReassignWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F530
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.ReasearchForStaticMeshes
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UNextSingleton::ReasearchForStaticMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ReasearchForStaticMeshes");
		
		UNextSingleton_ReasearchForStaticMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F430
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.PrepareInstancesForSaveEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UNextSingleton::PrepareInstancesForSaveEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.PrepareInstancesForSaveEvent");
		
		UNextSingleton_PrepareInstancesForSaveEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F400
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.OptSystemOperational
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UNextSingleton::OptSystemOperational()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.OptSystemOperational");
		
		UNextSingleton_OptSystemOperational_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F190
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.NPCSystemOperational
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UNextSingleton::NPCSystemOperational()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.NPCSystemOperational");
		
		UNextSingleton_NPCSystemOperational_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F3E0
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.NoticeLoadRequest
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UNextSingleton::NoticeLoadRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.NoticeLoadRequest");
		
		UNextSingleton_NoticeLoadRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049F100
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.LoadDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               retryLoad                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNextSingleton::LoadDone(bool retryLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.LoadDone");
		
		UNextSingleton_LoadDone_Params params {};
		params.retryLoad = retryLoad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EF10
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.IsGridOperational
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UNextSingleton::IsGridOperational()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.IsGridOperational");
		
		UNextSingleton_IsGridOperational_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EEB0
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.InnerLoadPerformed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UNextSingleton::InnerLoadPerformed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.InnerLoadPerformed");
		
		UNextSingleton_InnerLoadPerformed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049EE90
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.InitSystemsActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UNextSingleton::InitSystemsActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.InitSystemsActors");
		
		UNextSingleton_InitSystemsActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E7A0
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.GetTSManager
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATS_Manager* UNextSingleton::GetTSManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.GetTSManager");
		
		UNextSingleton_GetTSManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E730
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.GetPlayerLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, Const)
	 */
	struct FVector UNextSingleton::GetPlayerLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.GetPlayerLocation");
		
		UNextSingleton_GetPlayerLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E150
	 * 		Name   -> Function DrugDealerSimulator.NextSingleton.CanSaveDependedInstancesInit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UNextSingleton::CanSaveDependedInstancesInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.CanSaveDependedInstancesInit");
		
		UNextSingleton_CanSaveDependedInstancesInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNextSingleton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNextSingleton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.NextSingleton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A31B0
	 * 		Name   -> Function DrugDealerSimulator.NextSingletonLibrary.GetNextSingletonData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UNextSingleton* UNextSingletonLibrary::STATIC_GetNextSingletonData(bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingletonLibrary.GetNextSingletonData");
		
		UNextSingletonLibrary_GetNextSingletonData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNextSingletonLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNextSingletonLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.NextSingletonLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3D40
	 * 		Name   -> Function DrugDealerSimulator.NextSingletonWorldHelper.SetMasterState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               newState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANextSingletonWorldHelper::SetMasterState(bool newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingletonWorldHelper.SetMasterState");
		
		ANextSingletonWorldHelper_SetMasterState_Params params {};
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ANextSingletonWorldHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANextSingletonWorldHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.NextSingletonWorldHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A38D0
	 * 		Name   -> Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMinClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USDB_BodyHealth::InitBucketAsMinClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMinClamp");
		
		USDB_BodyHealth_InitBucketAsMinClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3890
	 * 		Name   -> Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMaxClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USDB_BodyHealth::InitBucketAsMaxClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMaxClamp");
		
		USDB_BodyHealth_InitBucketAsMaxClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3850
	 * 		Name   -> Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsFactors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USDB_BodyHealth::InitBucketAsFactors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsFactors");
		
		USDB_BodyHealth_InitBucketAsFactors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3810
	 * 		Name   -> Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsDataStorage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USDB_BodyHealth::InitBucketAsDataStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsDataStorage");
		
		USDB_BodyHealth_InitBucketAsDataStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USDB_BodyHealth.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDB_BodyHealth::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.SDB_BodyHealth");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A38F0
	 * 		Name   -> Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMinClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USDB_BodyHealthComp::InitBucketAsMinClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMinClamp");
		
		USDB_BodyHealthComp_InitBucketAsMinClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A38B0
	 * 		Name   -> Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMaxClamp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USDB_BodyHealthComp::InitBucketAsMaxClamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMaxClamp");
		
		USDB_BodyHealthComp_InitBucketAsMaxClamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3870
	 * 		Name   -> Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsFactors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USDB_BodyHealthComp::InitBucketAsFactors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsFactors");
		
		USDB_BodyHealthComp_InitBucketAsFactors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3830
	 * 		Name   -> Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsDataStorage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USDB_BodyHealthComp::InitBucketAsDataStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsDataStorage");
		
		USDB_BodyHealthComp_InitBucketAsDataStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USDB_BodyHealthComp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USDB_BodyHealthComp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.SDB_BodyHealthComp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A37B0
	 * 		Name   -> Function DrugDealerSimulator.SeasonAstralComponent.GetSunsetTime
	 * 		Flags  -> (Final, Native, Public)
	 */
	float USeasonAstralComponent::GetSunsetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetSunsetTime");
		
		USeasonAstralComponent_GetSunsetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3750
	 * 		Name   -> Function DrugDealerSimulator.SeasonAstralComponent.GetSunriseTime
	 * 		Flags  -> (Final, Native, Public)
	 */
	float USeasonAstralComponent::GetSunriseTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetSunriseTime");
		
		USeasonAstralComponent_GetSunriseTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3270
	 * 		Name   -> Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitTarget
	 * 		Flags  -> (Final, Native, Public)
	 */
	float USeasonAstralComponent::GetOrbitTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitTarget");
		
		USeasonAstralComponent_GetOrbitTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3240
	 * 		Name   -> Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitDistanceTarget
	 * 		Flags  -> (Final, Native, Public)
	 */
	float USeasonAstralComponent::GetOrbitDistanceTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitDistanceTarget");
		
		USeasonAstralComponent_GetOrbitDistanceTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3180
	 * 		Name   -> Function DrugDealerSimulator.SeasonAstralComponent.GetMaxHeigthTime
	 * 		Flags  -> (Final, Native, Public)
	 */
	float USeasonAstralComponent::GetMaxHeigthTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetMaxHeigthTime");
		
		USeasonAstralComponent_GetMaxHeigthTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3150
	 * 		Name   -> Function DrugDealerSimulator.SeasonAstralComponent.GetHeatPower
	 * 		Flags  -> (Final, Native, Public)
	 */
	float USeasonAstralComponent::GetHeatPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetHeatPower");
		
		USeasonAstralComponent_GetHeatPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USeasonAstralComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USeasonAstralComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.SeasonAstralComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3780
	 * 		Name   -> Function DrugDealerSimulator.SeasonAstralProfile.GetSunsetTime
	 * 		Flags  -> (Final, Native, Public)
	 */
	float ASeasonAstralProfile::GetSunsetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralProfile.GetSunsetTime");
		
		ASeasonAstralProfile_GetSunsetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3720
	 * 		Name   -> Function DrugDealerSimulator.SeasonAstralProfile.GetSunriseTime
	 * 		Flags  -> (Final, Native, Public)
	 */
	float ASeasonAstralProfile::GetSunriseTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralProfile.GetSunriseTime");
		
		ASeasonAstralProfile_GetSunriseTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3120
	 * 		Name   -> Function DrugDealerSimulator.SeasonAstralProfile.GetHeatPower
	 * 		Flags  -> (Final, Native, Public)
	 */
	float ASeasonAstralProfile::GetHeatPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralProfile.GetHeatPower");
		
		ASeasonAstralProfile_GetHeatPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASeasonAstralProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeasonAstralProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.SeasonAstralProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A30F0
	 * 		Name   -> Function DrugDealerSimulator.SeasonProfile.getAirProfile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UAirComponent* ASeasonProfile::getAirProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonProfile.getAirProfile");
		
		ASeasonProfile_getAirProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASeasonProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASeasonProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.SeasonProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4830
	 * 		Name   -> Function DrugDealerSimulator.ShiroActor.retName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString AShiroActor::retName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroActor.retName");
		
		AShiroActor_retName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AShiroActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShiroActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.ShiroActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3FA0
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.WeightedArrayRand
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<float>                                      WeightArr                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UShiroBlueprint::STATIC_WeightedArrayRand(TArray<float> WeightArr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.WeightedArrayRand");
		
		UShiroBlueprint_WeightedArrayRand_Params params {};
		params.WeightArr = WeightArr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4B70
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.testReferences
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              t1                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              t2                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              t3                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              t4                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShiroBlueprint::STATIC_testReferences(float* t1, float* t2, float* t3, float* t4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.testReferences");
		
		UShiroBlueprint_testReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (t1 != nullptr)
			*t1 = params.t1;
		if (t2 != nullptr)
			*t2 = params.t2;
		if (t3 != nullptr)
			*t3 = params.t3;
		if (t4 != nullptr)
			*t4 = params.t4;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3DD0
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.SimpleGrid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              intervalX                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              intervalY                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            columnCount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            objectIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              positionX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              positionY                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShiroBlueprint::STATIC_SimpleGrid(float intervalX, float intervalY, int32_t columnCount, int32_t objectIndex, float* positionX, float* positionY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.SimpleGrid");
		
		UShiroBlueprint_SimpleGrid_Params params {};
		params.intervalX = intervalX;
		params.intervalY = intervalY;
		params.columnCount = columnCount;
		params.objectIndex = objectIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (positionX != nullptr)
			*positionX = params.positionX;
		if (positionY != nullptr)
			*positionY = params.positionY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4A70
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UShiroBlueprint::STATIC_shiroFunc2(int32_t A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2");
		
		UShiroBlueprint_shiroFunc2_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4AF0
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.shiroFunc
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UShiroBlueprint::STATIC_shiroFunc(int32_t A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.shiroFunc");
		
		UShiroBlueprint_shiroFunc_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A37E0
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.GetWTAC
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class AWorldTimeAndConditions* UShiroBlueprint::STATIC_GetWTAC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.GetWTAC");
		
		UShiroBlueprint_GetWTAC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A32D0
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.GetSingleton
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class UNextSingleton* UShiroBlueprint::STATIC_GetSingleton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.GetSingleton");
		
		UShiroBlueprint_GetSingleton_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A32A0
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.GetSAE
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class ASubstancesAndEffects* UShiroBlueprint::STATIC_GetSAE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.GetSAE");
		
		UShiroBlueprint_GetSAE_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A2F00
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.FastProportions
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              minTargetRange                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maxTargetRange                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              workValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               unboundBounds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              minBaseRange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maxBaseRange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UShiroBlueprint::STATIC_FastProportions(float minTargetRange, float maxTargetRange, float workValue, bool unboundBounds, float minBaseRange, float maxBaseRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.FastProportions");
		
		UShiroBlueprint_FastProportions_Params params {};
		params.minTargetRange = minTargetRange;
		params.maxTargetRange = maxTargetRange;
		params.workValue = workValue;
		params.unboundBounds = unboundBounds;
		params.minBaseRange = minBaseRange;
		params.maxBaseRange = maxBaseRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A45E0
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              perc                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UShiroBlueprint::STATIC_extrapolateTest(float Min, float Max, float perc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest");
		
		UShiroBlueprint_extrapolateTest_Params params {};
		params.Min = Min;
		params.Max = Max;
		params.perc = perc;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A2B60
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.CheckPrice
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              drugCurrentPrice                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              drugResonablePrice                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              reputationFactor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AddictedCustomer                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               priceHighOutput                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               priceTooHighOutput                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              baseMaxSellingFactor                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              reputationInfluence                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AddictedInfluence                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShiroBlueprint::STATIC_CheckPrice(float drugCurrentPrice, float drugResonablePrice, float reputationFactor, bool AddictedCustomer, bool* priceHighOutput, bool* priceTooHighOutput, float baseMaxSellingFactor, float reputationInfluence, float AddictedInfluence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.CheckPrice");
		
		UShiroBlueprint_CheckPrice_Params params {};
		params.drugCurrentPrice = drugCurrentPrice;
		params.drugResonablePrice = drugResonablePrice;
		params.reputationFactor = reputationFactor;
		params.AddictedCustomer = AddictedCustomer;
		params.baseMaxSellingFactor = baseMaxSellingFactor;
		params.reputationInfluence = reputationInfluence;
		params.AddictedInfluence = AddictedInfluence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (priceHighOutput != nullptr)
			*priceHighOutput = params.priceHighOutput;
		if (priceTooHighOutput != nullptr)
			*priceTooHighOutput = params.priceTooHighOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A2AA0
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.CanSaveDependedInstancesInit
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UShiroBlueprint::STATIC_CanSaveDependedInstancesInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.CanSaveDependedInstancesInit");
		
		UShiroBlueprint_CanSaveDependedInstancesInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A42E0
	 * 		Name   -> Function DrugDealerSimulator.ShiroBlueprint.calculateSky
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            dayNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            curHour                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            curMinute                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               sunVisible                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              sunHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              sunPlainAngle                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              sunBrightness                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               moonVisible                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              varDump                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShiroBlueprint::STATIC_calculateSky(int32_t dayNum, int32_t curHour, int32_t curMinute, bool* sunVisible, float* sunHeight, float* sunPlainAngle, float* sunBrightness, bool* moonVisible, float* varDump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.calculateSky");
		
		UShiroBlueprint_calculateSky_Params params {};
		params.dayNum = dayNum;
		params.curHour = curHour;
		params.curMinute = curMinute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (sunVisible != nullptr)
			*sunVisible = params.sunVisible;
		if (sunHeight != nullptr)
			*sunHeight = params.sunHeight;
		if (sunPlainAngle != nullptr)
			*sunPlainAngle = params.sunPlainAngle;
		if (sunBrightness != nullptr)
			*sunBrightness = params.sunBrightness;
		if (moonVisible != nullptr)
			*moonVisible = params.moonVisible;
		if (varDump != nullptr)
			*varDump = params.varDump;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UShiroBlueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShiroBlueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.ShiroBlueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3C00
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.ProcessTriggers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            substanceIndexTriggering                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASubstancesAndEffects::ProcessTriggers(int32_t substanceIndexTriggering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.ProcessTriggers");
		
		ASubstancesAndEffects_ProcessTriggers_Params params {};
		params.substanceIndexTriggering = substanceIndexTriggering;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3AF0
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.NoticeDrugTook
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            substanceActor                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActiveSubstance*                            valuesProvider                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              takenMass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASubstancesAndEffects::NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.NoticeDrugTook");
		
		ASubstancesAndEffects_NoticeDrugTook_Params params {};
		params.substanceActor = substanceActor;
		params.valuesProvider = valuesProvider;
		params.takenMass = takenMass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3A60
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.MergeWithWorld
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      W                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASubstancesAndEffects::MergeWithWorld(class UWorld** W)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.MergeWithWorld");
		
		ASubstancesAndEffects_MergeWithWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (W != nullptr)
			*W = params.W;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3910
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.ManageLaunchList
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              currentDayTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASubstancesAndEffects::ManageLaunchList(float currentDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.ManageLaunchList");
		
		ASubstancesAndEffects_ManageLaunchList_Params params {};
		params.currentDayTime = currentDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3610
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceGenericData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            subprop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              retEmpty                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ASubstancesAndEffects::GetSubstanceGenericData(int32_t substanceIndex, int32_t subprop, float retEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceGenericData");
		
		ASubstancesAndEffects_GetSubstanceGenericData_Params params {};
		params.substanceIndex = substanceIndex;
		params.subprop = subprop;
		params.retEmpty = retEmpty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A34D0
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffectsByIndex
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            activeSubIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASubstancesAndEffects::GetSubstanceEffectsByIndex(int32_t activeSubIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffectsByIndex");
		
		ASubstancesAndEffects_GetSubstanceEffectsByIndex_Params params {};
		params.activeSubIndex = activeSubIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3390
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffects
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActiveSubstance*                            activeSub                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASubstancesAndEffects::GetSubstanceEffects(class AActiveSubstance* activeSub)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffects");
		
		ASubstancesAndEffects_GetSubstanceEffects_Params params {};
		params.activeSub = activeSub;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A3300
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActiveSubstance* ASubstancesAndEffects::GetSubstanceByIndex(int32_t substanceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceByIndex");
		
		ASubstancesAndEffects_GetSubstanceByIndex_Params params {};
		params.substanceIndex = substanceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A30F0
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.GetHealthObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHumanoidActor* ASubstancesAndEffects::GetHealthObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.GetHealthObject");
		
		ASubstancesAndEffects_GetHealthObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A2E30
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.DoBasicEffectTick
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class ATriggeredDrugEffect*                        Eff                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASubstancesAndEffects::DoBasicEffectTick(class ATriggeredDrugEffect** Eff, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.DoBasicEffectTick");
		
		ASubstancesAndEffects_DoBasicEffectTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Eff != nullptr)
			*Eff = params.Eff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A2E10
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.ClassInit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASubstancesAndEffects::ClassInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.ClassInit");
		
		ASubstancesAndEffects_ClassInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A2AD0
	 * 		Name   -> Function DrugDealerSimulator.SubstancesAndEffects.CheckForSubstanceEffects
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            substanceIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASubstancesAndEffects::CheckForSubstanceEffects(int32_t substanceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SubstancesAndEffects.CheckForSubstanceEffects");
		
		ASubstancesAndEffects_CheckForSubstanceEffects_Params params {};
		params.substanceIndex = substanceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASubstancesAndEffects.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASubstancesAndEffects::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.SubstancesAndEffects");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA5A0
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.ValidatePTRS
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATriggeredDrugEffect::ValidatePTRS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.ValidatePTRS");
		
		ATriggeredDrugEffect_ValidatePTRS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.StartEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATriggeredDrugEffect::StartEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.StartEffect");
		
		ATriggeredDrugEffect_StartEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9D40
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectInit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATriggeredDrugEffect::PureEffectInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectInit");
		
		ATriggeredDrugEffect_PureEffectInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9D20
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectEnd
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATriggeredDrugEffect::PureEffectEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectEnd");
		
		ATriggeredDrugEffect_PureEffectEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A99B0
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.NoticeEffectEnd
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              currentDayTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATriggeredDrugEffect::NoticeEffectEnd(float currentDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.NoticeEffectEnd");
		
		ATriggeredDrugEffect_NoticeEffectEnd_Params params {};
		params.currentDayTime = currentDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9590
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.InitInnerClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATriggeredDrugEffect::InitInnerClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.InitInnerClass");
		
		ATriggeredDrugEffect_InitInnerClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8AB0
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.GetCurrentDayTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ATriggeredDrugEffect::GetCurrentDayTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.GetCurrentDayTime");
		
		ATriggeredDrugEffect_GetCurrentDayTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.EndEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATriggeredDrugEffect::EndEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.EndEffect");
		
		ATriggeredDrugEffect_EndEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.EffectTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATriggeredDrugEffect::EffectTick(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.EffectTick");
		
		ATriggeredDrugEffect_EffectTick_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A7FC0
	 * 		Name   -> Function DrugDealerSimulator.TriggeredDrugEffect.CheckTrigger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AHumanoidActor*                              checkObject                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              currentDayTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATriggeredDrugEffect::CheckTrigger(class AHumanoidActor* checkObject, float currentDayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TriggeredDrugEffect.CheckTrigger");
		
		ATriggeredDrugEffect_CheckTrigger_Params params {};
		params.checkObject = checkObject;
		params.currentDayTime = currentDayTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATriggeredDrugEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATriggeredDrugEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TriggeredDrugEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_Alkaloid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_Alkaloid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Alkaloid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_Amfetamina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_Amfetamina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Amfetamina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_Diamorfina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_Diamorfina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Diamorfina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_Ergolina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_Ergolina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Ergolina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_MDMA.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_MDMA::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_MDMA");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_Metaamfetamina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_Metaamfetamina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Metaamfetamina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_Piperydyna.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_Piperydyna::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Piperydyna");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_Psylocybina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_Psylocybina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Psylocybina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_THC.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_THC::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_THC");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_THCSativa.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_THCSativa::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_THCSativa");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATDE_Tryptamina.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDE_Tryptamina::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TDE_Tryptamina");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A49B0
	 * 		Name   -> Function DrugDealerSimulator.TimeProfile.setTimeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              propagationTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATimeProfile::setTimeMultiplier(float Val, float propagationTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.setTimeMultiplier");
		
		ATimeProfile_setTimeMultiplier_Params params {};
		params.Val = Val;
		params.propagationTime = propagationTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A48B0
	 * 		Name   -> Function DrugDealerSimulator.TimeProfile.setDayHourMinuteTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            day                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            hour                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            minute                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATimeProfile::setDayHourMinuteTime(int32_t day, int32_t hour, int32_t minute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.setDayHourMinuteTime");
		
		ATimeProfile_setDayHourMinuteTime_Params params {};
		params.day = day;
		params.hour = hour;
		params.minute = minute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A46F0
	 * 		Name   -> Function DrugDealerSimulator.TimeProfile.getIntTimeData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            optNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATimeProfile::getIntTimeData(int32_t optNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.getIntTimeData");
		
		ATimeProfile_getIntTimeData_Params params {};
		params.optNum = optNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A30C0
	 * 		Name   -> Function DrugDealerSimulator.TimeProfile.GetCurrentTimeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ATimeProfile::GetCurrentTimeMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.GetCurrentTimeMultiplier");
		
		ATimeProfile_GetCurrentTimeMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A45B0
	 * 		Name   -> Function DrugDealerSimulator.TimeProfile.dayFloatResult
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float ATimeProfile::dayFloatResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.dayFloatResult");
		
		ATimeProfile_dayFloatResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4100
	 * 		Name   -> Function DrugDealerSimulator.TimeProfile.addSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              addSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATimeProfile::addSeconds(float addSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.addSeconds");
		
		ATimeProfile_addSeconds_Params params {};
		params.addSeconds = addSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4080
	 * 		Name   -> Function DrugDealerSimulator.TimeProfile.addMinutes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            addMinutes                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATimeProfile::addMinutes(int32_t addMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.addMinutes");
		
		ATimeProfile_addMinutes_Params params {};
		params.addMinutes = addMinutes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATimeProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATimeProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TimeProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4800
	 * 		Name   -> Function DrugDealerSimulator.TrainControllerCode.initOnWorld
	 * 		Flags  -> (Final, Native, Private)
	 */
	float ATrainControllerCode::initOnWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.initOnWorld");
		
		ATrainControllerCode_initOnWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4780
	 * 		Name   -> Function DrugDealerSimulator.TrainControllerCode.initInstance
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            followingSegmentsCount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATrainControllerCode::initInstance(int32_t followingSegmentsCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.initInstance");
		
		ATrainControllerCode_initInstance_Params params {};
		params.followingSegmentsCount = followingSegmentsCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A42C0
	 * 		Name   -> Function DrugDealerSimulator.TrainControllerCode.calcTotalWeigthAndPower
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ATrainControllerCode::calcTotalWeigthAndPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcTotalWeigthAndPower");
		
		ATrainControllerCode_calcTotalWeigthAndPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4290
	 * 		Name   -> Function DrugDealerSimulator.TrainControllerCode.calcTotalFrictionForce
	 * 		Flags  -> (Final, Native, Private)
	 */
	float ATrainControllerCode::calcTotalFrictionForce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcTotalFrictionForce");
		
		ATrainControllerCode_calcTotalFrictionForce_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4210
	 * 		Name   -> Function DrugDealerSimulator.TrainControllerCode.calcSingleSegment
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ATrainRealSegment*                           calcSegment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATrainControllerCode::calcSingleSegment(class ATrainRealSegment* calcSegment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcSingleSegment");
		
		ATrainControllerCode_calcSingleSegment_Params params {};
		params.calcSegment = calcSegment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A4180
	 * 		Name   -> Function DrugDealerSimulator.TrainControllerCode.calcSegmentDistanceToLeader
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            SegmentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ATrainControllerCode::calcSegmentDistanceToLeader(int32_t SegmentIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcSegmentDistanceToLeader");
		
		ATrainControllerCode_calcSegmentDistanceToLeader_Params params {};
		params.SegmentIndex = SegmentIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATrainControllerCode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrainControllerCode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TrainControllerCode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATrainRealSegment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrainRealSegment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TrainRealSegment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATrainSegmentCode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrainSegmentCode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TrainSegmentCode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATrainSegmentSubClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrainSegmentSubClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TrainSegmentSubClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA570
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ValidateIndex
	 * 		Flags  -> (Final, Native, Public)
	 */
	bool ATS_Manager::ValidateIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ValidateIndex");
		
		ATS_Manager_ValidateIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA4E0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ValidateActorIndex
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ValidationIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::ValidateActorIndex(int32_t ValidationIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ValidateActorIndex");
		
		ATS_Manager_ValidateActorIndex_Params params {};
		params.ValidationIndex = ValidationIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA450
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.TranslateActorToDataIndex
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            SeekActorIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATS_Manager::TranslateActorToDataIndex(int32_t SeekActorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.TranslateActorToDataIndex");
		
		ATS_Manager_TranslateActorToDataIndex_Params params {};
		params.SeekActorIndex = SeekActorIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA350
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.StartDEARaid
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            EntranceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeepSeek                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::StartDEARaid(int32_t EntranceIndex, int32_t DeepSeek, float CurrentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.StartDEARaid");
		
		ATS_Manager_StartDEARaid_Params params {};
		params.EntranceIndex = EntranceIndex;
		params.DeepSeek = DeepSeek;
		params.CurrentTime = CurrentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA330
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.SpawnEntranceAndRegister
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATS_Manager::SpawnEntranceAndRegister()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.SpawnEntranceAndRegister");
		
		ATS_Manager_SpawnEntranceAndRegister_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA2A0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.SetRaidedState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               newState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::SetRaidedState(bool newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.SetRaidedState");
		
		ATS_Manager_SetRaidedState_Params params {};
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA220
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.SetDebDigFactor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::SetDebDigFactor(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.SetDebDigFactor");
		
		ATS_Manager_SetDebDigFactor_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA1F0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ReserveAndGetNextActorIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ATS_Manager::ReserveAndGetNextActorIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ReserveAndGetNextActorIndex");
		
		ATS_Manager_ReserveAndGetNextActorIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA050
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ReportConnRaidProgress
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::ReportConnRaidProgress(int32_t ConnectionIndex, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ReportConnRaidProgress");
		
		ATS_Manager_ReportConnRaidProgress_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AA120
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ReportConnectionDigProgress
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::ReportConnectionDigProgress(int32_t ConnectionIndex, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ReportConnectionDigProgress");
		
		ATS_Manager_ReportConnectionDigProgress_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9FC0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ReopenEntrance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            EntranceActorIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::ReopenEntrance(int32_t EntranceActorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ReopenEntrance");
		
		ATS_Manager_ReopenEntrance_Params params {};
		params.EntranceActorIndex = EntranceActorIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9F40
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.RemoveConnection
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::RemoveConnection(int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RemoveConnection");
		
		ATS_Manager_RemoveConnection_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9EB0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.RegisterOnLoadTunnel
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class ATS_TunnelEntrence*                          ThisEntrence                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::RegisterOnLoadTunnel(class ATS_TunnelEntrence** ThisEntrence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RegisterOnLoadTunnel");
		
		ATS_Manager_RegisterOnLoadTunnel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ThisEntrence != nullptr)
			*ThisEntrence = params.ThisEntrence;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9E20
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.RegisterNewEntrance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ATS_TunnelEntrence*                          NewBuildedEntrance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::RegisterNewEntrance(class ATS_TunnelEntrence* NewBuildedEntrance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RegisterNewEntrance");
		
		ATS_Manager_RegisterNewEntrance_Params params {};
		params.NewBuildedEntrance = NewBuildedEntrance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B310
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.RecoverData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATS_Manager::RecoverData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RecoverData");
		
		ATS_Manager_RecoverData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9E00
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.RecalcTunnelsRates
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ATS_Manager::RecalcTunnelsRates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RecalcTunnelsRates");
		
		ATS_Manager_RecalcTunnelsRates_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9D80
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.RecalcProgressReportsForConn
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::RecalcProgressReportsForConn(int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RecalcProgressReportsForConn");
		
		ATS_Manager_RecalcProgressReportsForConn_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9D60
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.RecalcProgressReports
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ATS_Manager::RecalcProgressReports()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.RecalcProgressReports");
		
		ATS_Manager_RecalcProgressReports_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9CA0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.PrintUpgDataForConn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConnIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::PrintUpgDataForConn(int32_t ConnIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintUpgDataForConn");
		
		ATS_Manager_PrintUpgDataForConn_Params params {};
		params.ConnIndex = ConnIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B310
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.PrintUpgData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATS_Manager::PrintUpgData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintUpgData");
		
		ATS_Manager_PrintUpgData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9B30
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.PrintRaidMessage
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SubactionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjectA                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ObjectB                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::PrintRaidMessage(int32_t ActionType, int32_t SubactionType, const class FString& ObjectA, const class FString& ObjectB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintRaidMessage");
		
		ATS_Manager_PrintRaidMessage_Params params {};
		params.ActionType = ActionType;
		params.SubactionType = SubactionType;
		params.ObjectA = ObjectA;
		params.ObjectB = ObjectB;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9B10
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.PrintEntData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATS_Manager::PrintEntData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintEntData");
		
		ATS_Manager_PrintEntData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9A70
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.PrintDestinationData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FTS_AvailableDestinations                   InputData                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::PrintDestinationData(const struct FTS_AvailableDestinations& InputData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintDestinationData");
		
		ATS_Manager_PrintDestinationData_Params params {};
		params.InputData = InputData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9A50
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.PrintConnData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATS_Manager::PrintConnData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrintConnData");
		
		ATS_Manager_PrintConnData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9A30
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.PrepareDataForSave
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATS_Manager::PrepareDataForSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.PrepareDataForSave");
		
		ATS_Manager_PrepareDataForSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9820
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.LogRaidAction
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            objA                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            objB                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adtValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::LogRaidAction(float Time, int32_t Type, int32_t objA, int32_t objB, float adtValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.LogRaidAction");
		
		ATS_Manager_LogRaidAction_Params params {};
		params.Time = Time;
		params.Type = Type;
		params.objA = objA;
		params.objB = objB;
		params.adtValue = adtValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9760
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.IsUpgradeVisibleInConn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UpgradeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::IsUpgradeVisibleInConn(int32_t ConnectionIndex, int32_t UpgradeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.IsUpgradeVisibleInConn");
		
		ATS_Manager_IsUpgradeVisibleInConn_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		params.UpgradeIndex = UpgradeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A96A0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.IsUpgradeBoughtInConn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UpgradeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::IsUpgradeBoughtInConn(int32_t ConnectionIndex, int32_t UpgradeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.IsUpgradeBoughtInConn");
		
		ATS_Manager_IsUpgradeBoughtInConn_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		params.UpgradeIndex = UpgradeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A95E0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.IsUpgradeAvailableForConn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UpgradeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::IsUpgradeAvailableForConn(int32_t ConnectionIndex, int32_t UpgradeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.IsUpgradeAvailableForConn");
		
		ATS_Manager_IsUpgradeAvailableForConn_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		params.UpgradeIndex = UpgradeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A95B0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.IsTunnelSystemBeeingRaided
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATS_Manager::IsTunnelSystemBeeingRaided()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.IsTunnelSystemBeeingRaided");
		
		ATS_Manager_IsTunnelSystemBeeingRaided_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9500
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.HasUpgradeByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            checkIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::HasUpgradeByIndex(int32_t checkIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.HasUpgradeByIndex");
		
		ATS_Manager_HasUpgradeByIndex_Params params {};
		params.checkIndex = checkIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9460
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.HasEntrenceRegisteredByActor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATS_TunnelEntrence*                          EntrenceActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::HasEntrenceRegisteredByActor(class ATS_TunnelEntrence** EntrenceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.HasEntrenceRegisteredByActor");
		
		ATS_Manager_HasEntrenceRegisteredByActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntrenceActor != nullptr)
			*EntrenceActor = params.EntrenceActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9370
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.HasEntrenceRegistered
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      SeekName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::HasEntrenceRegistered(const class FString& SeekName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.HasEntrenceRegistered");
		
		ATS_Manager_HasEntrenceRegistered_Params params {};
		params.SeekName = SeekName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9270
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GlobalRaidStart
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            EntranceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            GameDifficulty                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::GlobalRaidStart(int32_t EntranceIndex, int32_t GameDifficulty, float CurrentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GlobalRaidStart");
		
		ATS_Manager_GlobalRaidStart_Params params {};
		params.EntranceIndex = EntranceIndex;
		params.GameDifficulty = GameDifficulty;
		params.CurrentTime = CurrentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A91D0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetUpgradeDataReferenced
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            UpgradeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTS_ConnectionWorkUpgrade ATS_Manager::GetUpgradeDataReferenced(int32_t UpgradeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetUpgradeDataReferenced");
		
		ATS_Manager_GetUpgradeDataReferenced_Params params {};
		params.UpgradeIndex = UpgradeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A9020
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetUpgradeData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            UpgradeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTS_ConnectionWorkUpgrade ATS_Manager::GetUpgradeData(int32_t UpgradeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetUpgradeData");
		
		ATS_Manager_GetUpgradeData_Params params {};
		params.UpgradeIndex = UpgradeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8F90
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetRaidSpeedSeek
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            GameDifficultyLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ATS_Manager::GetRaidSpeedSeek(int32_t GameDifficultyLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetRaidSpeedSeek");
		
		ATS_Manager_GetRaidSpeedSeek_Params params {};
		params.GameDifficultyLevel = GameDifficultyLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8F00
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetRaidDeepSeek
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            GameDifficultyLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATS_Manager::GetRaidDeepSeek(int32_t GameDifficultyLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetRaidDeepSeek");
		
		ATS_Manager_GetRaidDeepSeek_Params params {};
		params.GameDifficultyLevel = GameDifficultyLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8E70
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetNotPayedDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ATS_Manager::GetNotPayedDistance(int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetNotPayedDistance");
		
		ATS_Manager_GetNotPayedDistance_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8D70
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetEntrencesData
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	TMap<class FString, int32_t> ATS_Manager::GetEntrencesData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetEntrencesData");
		
		ATS_Manager_GetEntrencesData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8CD0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndexByActor
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATS_TunnelEntrence*                          EntrenceActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATS_Manager::GetEntrenceInnerIndexByActor(class ATS_TunnelEntrence** EntrenceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndexByActor");
		
		ATS_Manager_GetEntrenceInnerIndexByActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntrenceActor != nullptr)
			*EntrenceActor = params.EntrenceActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8BE0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      SeekName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATS_Manager::GetEntrenceInnerIndex(const class FString& SeekName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndex");
		
		ATS_Manager_GetEntrenceInnerIndex_Params params {};
		params.SeekName = SeekName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8B10
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetEntranceName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            seekEntranceIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ATS_Manager::GetEntranceName(int32_t seekEntranceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetEntranceName");
		
		ATS_Manager_GetEntranceName_Params params {};
		params.seekEntranceIndex = seekEntranceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8AE0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetCurrentGameTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ATS_Manager::GetCurrentGameTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetCurrentGameTime");
		
		ATS_Manager_GetCurrentGameTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A89E0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetConnectionStatesConst
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTS_ConnState ATS_Manager::GetConnectionStatesConst(int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetConnectionStatesConst");
		
		ATS_Manager_GetConnectionStatesConst_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8910
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetConnectionStates
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTS_ConnState ATS_Manager::GetConnectionStates(int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetConnectionStates");
		
		ATS_Manager_GetConnectionStates_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8880
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetConnectionMeterRate
	 * 		Flags  -> (Final, Native, Public, Const)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ATS_Manager::GetConnectionMeterRate(int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetConnectionMeterRate");
		
		ATS_Manager_GetConnectionMeterRate_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8790
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetAvailableTeleportDestinations
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InputEntranceActorIndex                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTS_AvailableDestinations>           OutDestination                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::GetAvailableTeleportDestinations(int32_t InputEntranceActorIndex, TArray<struct FTS_AvailableDestinations>* OutDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetAvailableTeleportDestinations");
		
		ATS_Manager_GetAvailableTeleportDestinations_Params params {};
		params.InputEntranceActorIndex = InputEntranceActorIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDestination != nullptr)
			*OutDestination = params.OutDestination;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A86A0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.GetAvailableDigDestinations
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InputEntranceActorIndex                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTS_AvailableDestinations>           OutDestination                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::GetAvailableDigDestinations(int32_t InputEntranceActorIndex, TArray<struct FTS_AvailableDestinations>* OutDestination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.GetAvailableDigDestinations");
		
		ATS_Manager_GetAvailableDigDestinations_Params params {};
		params.InputEntranceActorIndex = InputEntranceActorIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDestination != nullptr)
			*OutDestination = params.OutDestination;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A85E0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.FindConnectionIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            FirstEntrenceIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SecondEntrenceIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATS_Manager::FindConnectionIndex(int32_t FirstEntrenceIndex, int32_t SecondEntrenceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.FindConnectionIndex");
		
		ATS_Manager_FindConnectionIndex_Params params {};
		params.FirstEntrenceIndex = FirstEntrenceIndex;
		params.SecondEntrenceIndex = SecondEntrenceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A84F0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.DEARaidEnd
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnectionsLost                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EntrancesLost                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArrestedDepositedCount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::DEARaidEnd(int32_t ConnectionsLost, int32_t EntrancesLost, int32_t ArrestedDepositedCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.DEARaidEnd");
		
		ATS_Manager_DEARaidEnd_Params params {};
		params.ConnectionsLost = ConnectionsLost;
		params.EntrancesLost = EntrancesLost;
		params.ArrestedDepositedCount = ArrestedDepositedCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A84D0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.CreateUpgradesIndex
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ATS_Manager::CreateUpgradesIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.CreateUpgradesIndex");
		
		ATS_Manager_CreateUpgradesIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8410
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.CreateNewConnection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            FirstEntrenceIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SecondEntrenceIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATS_Manager::CreateNewConnection(int32_t FirstEntrenceIndex, int32_t SecondEntrenceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.CreateNewConnection");
		
		ATS_Manager_CreateNewConnection_Params params {};
		params.FirstEntrenceIndex = FirstEntrenceIndex;
		params.SecondEntrenceIndex = SecondEntrenceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8380
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ConnectionStartRaidEvent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EntranceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::ConnectionStartRaidEvent(int32_t EntranceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionStartRaidEvent");
		
		ATS_Manager_ConnectionStartRaidEvent_Params params {};
		params.EntranceIndex = EntranceIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A82F0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ConnectionRequiresMoney
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::ConnectionRequiresMoney(int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionRequiresMoney");
		
		ATS_Manager_ConnectionRequiresMoney_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8260
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ConnectionRaidedEvent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::ConnectionRaidedEvent(int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionRaidedEvent");
		
		ATS_Manager_ConnectionRaidedEvent_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8120
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ConnectionRaided
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartRaidTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndRaidTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            parentChain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::ConnectionRaided(int32_t ConnectionIndex, float StartRaidTime, float EndRaidTime, int32_t parentChain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionRaided");
		
		ATS_Manager_ConnectionRaided_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		params.StartRaidTime = StartRaidTime;
		params.EndRaidTime = EndRaidTime;
		params.parentChain = parentChain;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A8090
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.ConnectionDone
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_Manager::ConnectionDone(int32_t ConnectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.ConnectionDone");
		
		ATS_Manager_ConnectionDone_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A7FA0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.CalcNextIndexBasedOnIndex
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ATS_Manager::CalcNextIndexBasedOnIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.CalcNextIndexBasedOnIndex");
		
		ATS_Manager_CalcNextIndexBasedOnIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A7EE0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.BuyUpgradeForConn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UpgradeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATS_Manager::BuyUpgradeForConn(int32_t ConnectionIndex, int32_t UpgradeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.BuyUpgradeForConn");
		
		ATS_Manager_BuyUpgradeForConn_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		params.UpgradeIndex = UpgradeIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A7EC0
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.AfterRaidRelease
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ATS_Manager::AfterRaidRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.AfterRaidRelease");
		
		ATS_Manager_AfterRaidRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A7E20
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.AddNewEntrence
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class ATS_TunnelEntrence*                          EntrenceActor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATS_Manager::AddNewEntrence(class ATS_TunnelEntrence** EntrenceActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.AddNewEntrence");
		
		ATS_Manager_AddNewEntrence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntrenceActor != nullptr)
			*EntrenceActor = params.EntrenceActor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A7D50
	 * 		Name   -> Function DrugDealerSimulator.TS_Manager.AddMoneyToConnection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ConnectionIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              moneyAmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ATS_Manager::AddMoneyToConnection(int32_t ConnectionIndex, float moneyAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_Manager.AddMoneyToConnection");
		
		ATS_Manager_AddMoneyToConnection_Params params {};
		params.ConnectionIndex = ConnectionIndex;
		params.moneyAmount = moneyAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATS_Manager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATS_Manager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TS_Manager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD910
	 * 		Name   -> Function DrugDealerSimulator.TS_TunnelEntrence.SetManagerIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            NewIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATS_TunnelEntrence::SetManagerIndex(int32_t NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.SetManagerIndex");
		
		ATS_TunnelEntrence_SetManagerIndex_Params params {};
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD4D0
	 * 		Name   -> Function DrugDealerSimulator.TS_TunnelEntrence.NeedStartManage
	 * 		Flags  -> (Final, Native, Public, Const)
	 */
	bool ATS_TunnelEntrence::NeedStartManage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.NeedStartManage");
		
		ATS_TunnelEntrence_NeedStartManage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACED0
	 * 		Name   -> Function DrugDealerSimulator.TS_TunnelEntrence.GetDataIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATS_TunnelEntrence::GetDataIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.GetDataIndex");
		
		ATS_TunnelEntrence_GetDataIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC800
	 * 		Name   -> Function DrugDealerSimulator.TS_TunnelEntrence.GetAvailableDestinations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ATS_TunnelEntrence*> ATS_TunnelEntrence::GetAvailableDestinations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.GetAvailableDestinations");
		
		ATS_TunnelEntrence_GetAvailableDestinations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049C0B0
	 * 		Name   -> Function DrugDealerSimulator.TS_TunnelEntrence.GetActorIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATS_TunnelEntrence::GetActorIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TS_TunnelEntrence.GetActorIndex");
		
		ATS_TunnelEntrence_GetActorIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATS_TunnelEntrence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATS_TunnelEntrence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.TS_TunnelEntrence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWeatherHumanFactors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeatherHumanFactors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.WeatherHumanFactors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWeatherHumanSense.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeatherHumanSense::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.WeatherHumanSense");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AE580
	 * 		Name   -> Function DrugDealerSimulator.WeatherProfile.YearPassed
	 * 		Flags  -> (Final, Native, Protected)
	 */
	float AWeatherProfile::YearPassed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WeatherProfile.YearPassed");
		
		AWeatherProfile_YearPassed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049B310
	 * 		Name   -> Function DrugDealerSimulator.WeatherProfile.Init
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWeatherProfile::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WeatherProfile.Init");
		
		AWeatherProfile_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AWeatherProfile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeatherProfile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.WeatherProfile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWorldPhysicsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldPhysicsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.WorldPhysicsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AWorldPhysicsConsts.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWorldPhysicsConsts::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.WorldPhysicsConsts");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A30F0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.TimeProfile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ATimeProfile* AWorldTimeAndConditions::TimeProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.TimeProfile");
		
		AWorldTimeAndConditions_TimeProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AE1D0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.StoreInSaveSpace
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWorldTimeAndConditions::StoreInSaveSpace(int32_t Index, float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.StoreInSaveSpace");
		
		AWorldTimeAndConditions_StoreInSaveSpace_Params params {};
		params.Index = Index;
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AE1B0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.StartRain
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::StartRain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.StartRain");
		
		AWorldTimeAndConditions_StartRain_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AE190
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.StartFog
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::StartFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.StartFog");
		
		AWorldTimeAndConditions_StartFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049E130
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.ShadowsSettingsChanged
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void AWorldTimeAndConditions::ShadowsSettingsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.ShadowsSettingsChanged");
		
		AWorldTimeAndConditions_ShadowsSettingsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AE170
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.SetUltraSkyInit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldTimeAndConditions::SetUltraSkyInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SetUltraSkyInit");
		
		AWorldTimeAndConditions_SetUltraSkyInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AE0B0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.SetTimeMulptiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              newFactor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              propagationTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWorldTimeAndConditions::SetTimeMulptiplier(float newFactor, float propagationTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SetTimeMulptiplier");
		
		AWorldTimeAndConditions_SetTimeMulptiplier_Params params {};
		params.newFactor = newFactor;
		params.propagationTime = propagationTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADFB0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.SetTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            dayValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            hourValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            minuteValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWorldTimeAndConditions::SetTime(int32_t dayValue, int32_t hourValue, int32_t minuteValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SetTime");
		
		AWorldTimeAndConditions_SetTime_Params params {};
		params.dayValue = dayValue;
		params.hourValue = hourValue;
		params.minuteValue = minuteValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD660
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.SaveDataSnapshot
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::SaveDataSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SaveDataSnapshot");
		
		AWorldTimeAndConditions_SaveDataSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD590
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.ReInitLoggers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldTimeAndConditions::ReInitLoggers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.ReInitLoggers");
		
		AWorldTimeAndConditions_ReInitLoggers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD5B0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.RecoverDataSnapshot
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               recoverTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWorldTimeAndConditions::RecoverDataSnapshot(bool recoverTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.RecoverDataSnapshot");
		
		AWorldTimeAndConditions_RecoverDataSnapshot_Params params {};
		params.recoverTime = recoverTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD570
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.PureInit
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::PureInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.PureInit");
		
		AWorldTimeAndConditions_PureInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD550
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.PoliceArrestTimeShift
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldTimeAndConditions::PoliceArrestTimeShift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.PoliceArrestTimeShift");
		
		AWorldTimeAndConditions_PoliceArrestTimeShift_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD530
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.NoticeCalcPhaseDone
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::NoticeCalcPhaseDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.NoticeCalcPhaseDone");
		
		AWorldTimeAndConditions_NoticeCalcPhaseDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD4B0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.MarkNewLoad
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldTimeAndConditions::MarkNewLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.MarkNewLoad");
		
		AWorldTimeAndConditions_MarkNewLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD480
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.IsUltraSkyInited
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AWorldTimeAndConditions::IsUltraSkyInited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.IsUltraSkyInited");
		
		AWorldTimeAndConditions_IsUltraSkyInited_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD450
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.IsCurrentlyRaining
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AWorldTimeAndConditions::IsCurrentlyRaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.IsCurrentlyRaining");
		
		AWorldTimeAndConditions_IsCurrentlyRaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD420
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.IsAfterNoon
	 * 		Flags  -> (Final, Native, Public)
	 */
	bool AWorldTimeAndConditions::IsAfterNoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.IsAfterNoon");
		
		AWorldTimeAndConditions_IsAfterNoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004A03B0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.InWorldInitiated
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void AWorldTimeAndConditions::InWorldInitiated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.InWorldInitiated");
		
		AWorldTimeAndConditions_InWorldInitiated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD400
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.InnerDisableWeatherSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldTimeAndConditions::InnerDisableWeatherSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.InnerDisableWeatherSystem");
		
		AWorldTimeAndConditions_InnerDisableWeatherSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD3E0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldTimeAndConditions::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.Init");
		
		AWorldTimeAndConditions_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD3B0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.HasFog
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AWorldTimeAndConditions::HasFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.HasFog");
		
		AWorldTimeAndConditions_HasFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD320
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPowerAfterBounced
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		float                                              cAngle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AWorldTimeAndConditions::GetSunPowerAfterBounced(float cAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPowerAfterBounced");
		
		AWorldTimeAndConditions_GetSunPowerAfterBounced_Params params {};
		params.cAngle = cAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD2F0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPower
	 * 		Flags  -> (Final, Native, Public)
	 */
	float AWorldTimeAndConditions::GetSunPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPower");
		
		AWorldTimeAndConditions_GetSunPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD290
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetSunLigthPower
	 * 		Flags  -> (Final, Native, Public)
	 */
	float AWorldTimeAndConditions::GetSunLigthPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetSunLigthPower");
		
		AWorldTimeAndConditions_GetSunLigthPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD260
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetRainValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetRainValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetRainValue");
		
		AWorldTimeAndConditions_GetRainValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD1D0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetRainLogger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            dayNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetRainLogger(int32_t dayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetRainLogger");
		
		AWorldTimeAndConditions_GetRainLogger_Params params {};
		params.dayNum = dayNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD1A0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetMoonOrbitProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitProgress");
		
		AWorldTimeAndConditions_GetMoonOrbitProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD170
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetMoonOrbitAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitAngle");
		
		AWorldTimeAndConditions_GetMoonOrbitAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD140
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetInitiationState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool AWorldTimeAndConditions::GetInitiationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetInitiationState");
		
		AWorldTimeAndConditions_GetInitiationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD0B0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetHeatLogger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            dayNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetHeatLogger(int32_t dayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetHeatLogger");
		
		AWorldTimeAndConditions_GetHeatLogger_Params params {};
		params.dayNum = dayNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD020
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetFromSaveSpace
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AWorldTimeAndConditions::GetFromSaveSpace(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetFromSaveSpace");
		
		AWorldTimeAndConditions_GetFromSaveSpace_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACF90
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetFogLogger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            dayNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetFogLogger(int32_t dayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetFogLogger");
		
		AWorldTimeAndConditions_GetFogLogger_Params params {};
		params.dayNum = dayNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACEA0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentTimeForUltraSky
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentTimeForUltraSky()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentTimeForUltraSky");
		
		AWorldTimeAndConditions_GetCurrentTimeForUltraSky_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACE70
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunShadows
	 * 		Flags  -> (Final, Native, Public)
	 */
	bool AWorldTimeAndConditions::GetCurrentSunShadows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunShadows");
		
		AWorldTimeAndConditions_GetCurrentSunShadows_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACE40
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentSunPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunPower");
		
		AWorldTimeAndConditions_GetCurrentSunPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACE10
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunOrbit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentSunOrbit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunOrbit");
		
		AWorldTimeAndConditions_GetCurrentSunOrbit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACDE0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentSunDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunDistance");
		
		AWorldTimeAndConditions_GetCurrentSunDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACDB0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentSunAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunAngle");
		
		AWorldTimeAndConditions_GetCurrentSunAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACD80
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentStarsIntensity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentStarsIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentStarsIntensity");
		
		AWorldTimeAndConditions_GetCurrentStarsIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACCA0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentShadowSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               sunShadows                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               moonShadows                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWorldTimeAndConditions::GetCurrentShadowSettings(bool* sunShadows, bool* moonShadows)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentShadowSettings");
		
		AWorldTimeAndConditions_GetCurrentShadowSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (sunShadows != nullptr)
			*sunShadows = params.sunShadows;
		if (moonShadows != nullptr)
			*moonShadows = params.moonShadows;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACC70
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentNigthBrightness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentNigthBrightness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentNigthBrightness");
		
		AWorldTimeAndConditions_GetCurrentNigthBrightness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACC40
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonShadows
	 * 		Flags  -> (Final, Native, Public)
	 */
	bool AWorldTimeAndConditions::GetCurrentMoonShadows()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonShadows");
		
		AWorldTimeAndConditions_GetCurrentMoonShadows_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACC10
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonPhase
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentMoonPhase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonPhase");
		
		AWorldTimeAndConditions_GetCurrentMoonPhase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACBE0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonBrigthness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentMoonBrigthness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonBrigthness");
		
		AWorldTimeAndConditions_GetCurrentMoonBrigthness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACBB0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t AWorldTimeAndConditions::GetCurrentIntSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntSeconds");
		
		AWorldTimeAndConditions_GetCurrentIntSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACB80
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntMinute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t AWorldTimeAndConditions::GetCurrentIntMinute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntMinute");
		
		AWorldTimeAndConditions_GetCurrentIntMinute_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACB50
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntHour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t AWorldTimeAndConditions::GetCurrentIntHour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntHour");
		
		AWorldTimeAndConditions_GetCurrentIntHour_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACB20
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntDay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t AWorldTimeAndConditions::GetCurrentIntDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntDay");
		
		AWorldTimeAndConditions_GetCurrentIntDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACAF0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFogLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentFogLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFogLevel");
		
		AWorldTimeAndConditions_GetCurrentFogLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACAC0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatMinute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentFloatMinute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatMinute");
		
		AWorldTimeAndConditions_GetCurrentFloatMinute_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACA90
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatHour
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentFloatHour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatHour");
		
		AWorldTimeAndConditions_GetCurrentFloatHour_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACA60
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatDay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentFloatDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatDay");
		
		AWorldTimeAndConditions_GetCurrentFloatDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACA30
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentCloudsSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsSpeed");
		
		AWorldTimeAndConditions_GetCurrentCloudsSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACA00
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentCloudsLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsLevel");
		
		AWorldTimeAndConditions_GetCurrentCloudsLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC9D0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentBrightness
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float AWorldTimeAndConditions::GetCurrentBrightness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentBrightness");
		
		AWorldTimeAndConditions_GetCurrentBrightness_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC940
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCloudLogger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            dayNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetCloudLogger(int32_t dayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCloudLogger");
		
		AWorldTimeAndConditions_GetCloudLogger_Params params {};
		params.dayNum = dayNum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC880
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistFactor
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              baseVal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AWorldTimeAndConditions::GetCalcSunDistFactor(float baseVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistFactor");
		
		AWorldTimeAndConditions_GetCalcSunDistFactor_Params params {};
		params.baseVal = baseVal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC910
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistanceFactor
	 * 		Flags  -> (Final, Native, Public)
	 */
	float AWorldTimeAndConditions::GetCalcSunDistanceFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistanceFactor");
		
		AWorldTimeAndConditions_GetCalcSunDistanceFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AE2A0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.getBasicAirProfile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UAirComponent* AWorldTimeAndConditions::getBasicAirProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.getBasicAirProfile");
		
		AWorldTimeAndConditions_getBasicAirProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC730
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeSunPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            dayNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              hourMark                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AWorldTimeAndConditions::GetAnyTimeSunPower(int32_t dayNum, float hourMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeSunPower");
		
		AWorldTimeAndConditions_GetAnyTimeSunPower_Params params {};
		params.dayNum = dayNum;
		params.hourMark = hourMark;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC660
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsSunFactor
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            dayNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              hourMark                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AWorldTimeAndConditions::GetAnyTimeCloudsSunFactor(int32_t dayNum, float hourMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsSunFactor");
		
		AWorldTimeAndConditions_GetAnyTimeCloudsSunFactor_Params params {};
		params.dayNum = dayNum;
		params.hourMark = hourMark;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC590
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsLevel
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            dayNum                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              hourMark                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float AWorldTimeAndConditions::GetAnyTimeCloudsLevel(int32_t dayNum, float hourMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsLevel");
		
		AWorldTimeAndConditions_GetAnyTimeCloudsLevel_Params params {};
		params.dayNum = dayNum;
		params.hourMark = hourMark;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC570
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.EndRain
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::EndRain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.EndRain");
		
		AWorldTimeAndConditions_EndRain_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC550
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.EndFog
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::EndFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.EndFog");
		
		AWorldTimeAndConditions_EndFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC530
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.EnableWeatherSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AWorldTimeAndConditions::EnableWeatherSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.EnableWeatherSystem");
		
		AWorldTimeAndConditions_EnableWeatherSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC4E0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunRaysAngle
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::CalcSunRaysAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunRaysAngle");
		
		AWorldTimeAndConditions_CalcSunRaysAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC4C0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunPhysics
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::CalcSunPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunPhysics");
		
		AWorldTimeAndConditions_CalcSunPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC4A0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.CalcInteraction
	 * 		Flags  -> (Final, Native, Public)
	 */
	void AWorldTimeAndConditions::CalcInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.CalcInteraction");
		
		AWorldTimeAndConditions_CalcInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC480
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.Calc
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AWorldTimeAndConditions::Calc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.Calc");
		
		AWorldTimeAndConditions_Calc_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC3C0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditions.AddTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              hoursValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              minuteValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWorldTimeAndConditions::AddTime(float hoursValue, float minuteValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.AddTime");
		
		AWorldTimeAndConditions_AddTime_Params params {};
		params.hoursValue = hoursValue;
		params.minuteValue = minuteValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AWorldTimeAndConditions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWorldTimeAndConditions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.WorldTimeAndConditions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AE2D0
	 * 		Name   -> Function DrugDealerSimulator.WorldTimeAndConditionsCurFactors.noticeFactors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              currentRainChance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              sunPower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AWorldTimeAndConditionsCurFactors::noticeFactors(float DeltaTime, float currentRainChance, float sunPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditionsCurFactors.noticeFactors");
		
		AWorldTimeAndConditionsCurFactors_noticeFactors_Params params {};
		params.DeltaTime = DeltaTime;
		params.currentRainChance = currentRainChance;
		params.sunPower = sunPower;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AWorldTimeAndConditionsCurFactors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWorldTimeAndConditionsCurFactors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.WorldTimeAndConditionsCurFactors");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADF20
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetSunVisibility
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               newVisibility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetSunVisibility(bool newVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunVisibility");
		
		UWTACFactorsComponent_SetSunVisibility_Params params {};
		params.newVisibility = newVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADEA0
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetSunRaysAngle
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              newSunRays                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetSunRaysAngle(float newSunRays)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunRaysAngle");
		
		UWTACFactorsComponent_SetSunRaysAngle_Params params {};
		params.newSunRays = newSunRays;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADE20
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetSunPower
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              newPower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetSunPower(float newPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunPower");
		
		UWTACFactorsComponent_SetSunPower_Params params {};
		params.newPower = newPower;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADDA0
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitProgress
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              deg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetSunOrbitProgress(float deg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitProgress");
		
		UWTACFactorsComponent_SetSunOrbitProgress_Params params {};
		params.deg = deg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADD20
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitDistance
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              newDistance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetSunOrbitDistance(float newDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitDistance");
		
		UWTACFactorsComponent_SetSunOrbitDistance_Params params {};
		params.newDistance = newDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADCA0
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitAngle
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              newOrbitAngle                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetSunOrbitAngle(float newOrbitAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitAngle");
		
		UWTACFactorsComponent_SetSunOrbitAngle_Params params {};
		params.newOrbitAngle = newOrbitAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADC20
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetSunLumens
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              newLumensValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetSunLumens(float newLumensValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunLumens");
		
		UWTACFactorsComponent_SetSunLumens_Params params {};
		params.newLumensValue = newLumensValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADBA0
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetStarsIntensity
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetStarsIntensity(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetStarsIntensity");
		
		UWTACFactorsComponent_SetStarsIntensity_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADB20
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetRainValue
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              newRainValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetRainValue(float newRainValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetRainValue");
		
		UWTACFactorsComponent_SetRainValue_Params params {};
		params.newRainValue = newRainValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADA90
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetRainState
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               newState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetRainState(bool newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetRainState");
		
		UWTACFactorsComponent_SetRainState_Params params {};
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ADA10
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetOrbitPhase
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              shPassed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetOrbitPhase(float shPassed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetOrbitPhase");
		
		UWTACFactorsComponent_SetOrbitPhase_Params params {};
		params.shPassed = shPassed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD990
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetMoonOrbit
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              newProgress                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetMoonOrbit(float newProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetMoonOrbit");
		
		UWTACFactorsComponent_SetMoonOrbit_Params params {};
		params.newProgress = newProgress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD880
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetFogState
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		bool                                               newState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetFogState(bool newState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetFogState");
		
		UWTACFactorsComponent_SetFogState_Params params {};
		params.newState = newState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD800
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetFogLevel
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              NewLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetFogLevel(float NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetFogLevel");
		
		UWTACFactorsComponent_SetFogLevel_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0049BA10
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetFactorFloatData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              fVal                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetFactorFloatData(int32_t Index, float fVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetFactorFloatData");
		
		UWTACFactorsComponent_SetFactorFloatData_Params params {};
		params.Index = Index;
		params.fVal = fVal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD780
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetCloudsLevel
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              NewLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetCloudsLevel(float NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetCloudsLevel");
		
		UWTACFactorsComponent_SetCloudsLevel_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD700
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetBrigthnesslevel
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              newBrigthnessLevel                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetBrigthnesslevel(float newBrigthnessLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetBrigthnesslevel");
		
		UWTACFactorsComponent_SetBrigthnesslevel_Params params {};
		params.newBrigthnessLevel = newBrigthnessLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD680
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.SetAtmosphereSunReflections
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              newAtmosphereReflections                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::SetAtmosphereSunReflections(float newAtmosphereReflections)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetAtmosphereSunReflections");
		
		UWTACFactorsComponent_SetAtmosphereSunReflections_Params params {};
		params.newAtmosphereReflections = newAtmosphereReflections;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD640
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.Reinitialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UWTACFactorsComponent::Reinitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.Reinitialize");
		
		UWTACFactorsComponent_Reinitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AE3E0
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.noticeFactors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              currentRainChance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              currentRainDensityTarget                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              currentStormChance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              sunPower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWTACFactorsComponent::noticeFactors(float DeltaTime, float currentRainChance, float currentRainDensityTarget, float currentStormChance, float sunPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.noticeFactors");
		
		UWTACFactorsComponent_noticeFactors_Params params {};
		params.DeltaTime = DeltaTime;
		params.currentRainChance = currentRainChance;
		params.currentRainDensityTarget = currentRainDensityTarget;
		params.currentStormChance = currentStormChance;
		params.sunPower = sunPower;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD500
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.NeedsReinitialization
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UWTACFactorsComponent::NeedsReinitialization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.NeedsReinitialization");
		
		UWTACFactorsComponent_NeedsReinitialization_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AD2C0
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.GetSunOrbitAbsoluteDeg
	 * 		Flags  -> (Final, Native, Public)
	 */
	float UWTACFactorsComponent::GetSunOrbitAbsoluteDeg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.GetSunOrbitAbsoluteDeg");
		
		UWTACFactorsComponent_GetSunOrbitAbsoluteDeg_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004ACF00
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.GetFactorFloatData
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UWTACFactorsComponent::GetFactorFloatData(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.GetFactorFloatData");
		
		UWTACFactorsComponent_GetFactorFloatData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x004AC500
	 * 		Name   -> Function DrugDealerSimulator.WTACFactorsComponent.CanRecover
	 * 		Flags  -> (Final, Native, Public)
	 */
	bool UWTACFactorsComponent::CanRecover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.CanRecover");
		
		UWTACFactorsComponent_CanRecover_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWTACFactorsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWTACFactorsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DrugDealerSimulator.WTACFactorsComponent");
		return ptr;
	}

}


