#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.MergeTakenEffects
	 */
	struct UAbsorbedSubstance_MergeTakenEffects_Params
	{
	public:
		class UAbsorbedSubstance*                                  otherObject;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curConcentration;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      substanceTolerance;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.MergeSpiritImpact
	 */
	struct UAbsorbedSubstance_MergeSpiritImpact_Params
	{
	public:
		class UEB_Spirit*                                          Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.MergePhysicalImpact
	 */
	struct UAbsorbedSubstance_MergePhysicalImpact_Params
	{
	public:
		class UEB_Physical*                                        Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.MergePerceptionImpact
	 */
	struct UAbsorbedSubstance_MergePerceptionImpact_Params
	{
	public:
		class UEB_Perception*                                      Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.MergeHealthImpact
	 */
	struct UAbsorbedSubstance_MergeHealthImpact_Params
	{
	public:
		class UEB_BodyHealth*                                      Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.MergeBrainFuncsImpact
	 */
	struct UAbsorbedSubstance_MergeBrainFuncsImpact_Params
	{
	public:
		class UEB_BrainFunctions*                                  Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.InitFactorHandler
	 */
	struct UAbsorbedSubstance_InitFactorHandler_Params
	{	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.GetQualityFactor
	 */
	struct UAbsorbedSubstance_GetQualityFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.GetPurityFactor
	 */
	struct UAbsorbedSubstance_GetPurityFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.GetFirstPowerMomentTime
	 */
	struct UAbsorbedSubstance_GetFirstPowerMomentTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.GetExcretedAmount
	 */
	struct UAbsorbedSubstance_GetExcretedAmount_Params
	{
	public:
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.GetDecompositedAmunt
	 */
	struct UAbsorbedSubstance_GetDecompositedAmunt_Params
	{
	public:
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.GetCurrentConcentration
	 */
	struct UAbsorbedSubstance_GetCurrentConcentration_Params
	{
	public:
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.GetAbsorbedAmunt
	 */
	struct UAbsorbedSubstance_GetAbsorbedAmunt_Params
	{
	public:
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.DeepCopySpirit
	 */
	struct UAbsorbedSubstance_DeepCopySpirit_Params
	{
	public:
		class UEB_Spirit*                                          Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPhysical
	 */
	struct UAbsorbedSubstance_DeepCopyPhysical_Params
	{
	public:
		class UEB_Physical*                                        Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyPerception
	 */
	struct UAbsorbedSubstance_DeepCopyPerception_Params
	{
	public:
		class UEB_Perception*                                      Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyHealth
	 */
	struct UAbsorbedSubstance_DeepCopyHealth_Params
	{
	public:
		class UEB_BodyHealth*                                      Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBrainFuncs
	 */
	struct UAbsorbedSubstance_DeepCopyBrainFuncs_Params
	{
	public:
		class UEB_BrainFunctions*                                  Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.DeepCopyBaseF
	 */
	struct UAbsorbedSubstance_DeepCopyBaseF_Params
	{
	public:
		class UEB_BaseFactors*                                     Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstance.CalcInjection
	 */
	struct UAbsorbedSubstance_CalcInjection_Params
	{
	public:
		class AHumanoidActor*                                      injectedObject;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.SubstanceHaveExcreted
	 */
	struct UAbsorbedSubstanceComp_SubstanceHaveExcreted_Params
	{
	public:
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.StoreSelfData
	 */
	struct UAbsorbedSubstanceComp_StoreSelfData_Params
	{
	public:
		TArray<float>                                              targetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.RestoreFromData
	 */
	struct UAbsorbedSubstanceComp_RestoreFromData_Params
	{
	public:
		TArray<float>                                              sourceArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeTakenEffects
	 */
	struct UAbsorbedSubstanceComp_MergeTakenEffects_Params
	{
	public:
		class UAbsorbedSubstanceComp*                              otherObject;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASubstancesAndEffects*                               handler;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curConcentration;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      substanceTolerance;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeSpiritImpact
	 */
	struct UAbsorbedSubstanceComp_MergeSpiritImpact_Params
	{
	public:
		class UEB_Spirit*                                          Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASubstancesAndEffects*                               handler;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePhysicalImpact
	 */
	struct UAbsorbedSubstanceComp_MergePhysicalImpact_Params
	{
	public:
		class UEB_Physical*                                        Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASubstancesAndEffects*                               handler;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.MergePerceptionImpact
	 */
	struct UAbsorbedSubstanceComp_MergePerceptionImpact_Params
	{
	public:
		class UEB_Perception*                                      Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASubstancesAndEffects*                               handler;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeHealthImpact
	 */
	struct UAbsorbedSubstanceComp_MergeHealthImpact_Params
	{
	public:
		class UEB_BodyHealth*                                      Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASubstancesAndEffects*                               handler;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.MergeBrainFuncsImpact
	 */
	struct UAbsorbedSubstanceComp_MergeBrainFuncsImpact_Params
	{
	public:
		class UEB_BrainFunctions*                                  Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASubstancesAndEffects*                               handler;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeFactor;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.InitFactorHandler
	 */
	struct UAbsorbedSubstanceComp_InitFactorHandler_Params
	{	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.GetQualityFactor
	 */
	struct UAbsorbedSubstanceComp_GetQualityFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.GetPurityFactor
	 */
	struct UAbsorbedSubstanceComp_GetPurityFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.GetFirstPowerMomentTime
	 */
	struct UAbsorbedSubstanceComp_GetFirstPowerMomentTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.GetExcretedAmount
	 */
	struct UAbsorbedSubstanceComp_GetExcretedAmount_Params
	{
	public:
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.GetDecompositedAmount
	 */
	struct UAbsorbedSubstanceComp_GetDecompositedAmount_Params
	{
	public:
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.GetCurrentConcentration
	 */
	struct UAbsorbedSubstanceComp_GetCurrentConcentration_Params
	{
	public:
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.GetAbsorbedAmunt
	 */
	struct UAbsorbedSubstanceComp_GetAbsorbedAmunt_Params
	{
	public:
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopySpirit
	 */
	struct UAbsorbedSubstanceComp_DeepCopySpirit_Params
	{
	public:
		class UEB_Spirit*                                          Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPhysical
	 */
	struct UAbsorbedSubstanceComp_DeepCopyPhysical_Params
	{
	public:
		class UEB_Physical*                                        Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyPerception
	 */
	struct UAbsorbedSubstanceComp_DeepCopyPerception_Params
	{
	public:
		class UEB_Perception*                                      Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyHealth
	 */
	struct UAbsorbedSubstanceComp_DeepCopyHealth_Params
	{
	public:
		class UEB_BodyHealth*                                      Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBrainFuncs
	 */
	struct UAbsorbedSubstanceComp_DeepCopyBrainFuncs_Params
	{
	public:
		class UEB_BrainFunctions*                                  Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.DeepCopyBaseF
	 */
	struct UAbsorbedSubstanceComp_DeepCopyBaseF_Params
	{
	public:
		class UEB_BaseFactors*                                     Source;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AbsorbedSubstanceComp.CalcInjection
	 */
	struct UAbsorbedSubstanceComp_CalcInjection_Params
	{
	public:
		class AHumanoidActor*                                      injectedObject;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ActiveSubstance.GetQualityFactorIn
	 */
	struct AActiveSubstance_GetQualityFactorIn_Params
	{
	public:
		float                                                      inputQuality;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ActiveSubstance.GetQualityFactor
	 */
	struct AActiveSubstance_GetQualityFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ActiveSubstance.GetPurityFactorIn
	 */
	struct AActiveSubstance_GetPurityFactorIn_Params
	{
	public:
		float                                                      inputPurity;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ActiveSubstance.GetPurityFactor
	 */
	struct AActiveSubstance_GetPurityFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AddictionComp.StoreSaveData
	 */
	struct UAddictionComp_StoreSaveData_Params
	{
	public:
		TArray<float>                                              targetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AddictionComp.ResetData
	 */
	struct UAddictionComp_ResetData_Params
	{	};

	/**
	 * Function DrugDealerSimulator.AddictionComp.LoadSaveData
	 */
	struct UAddictionComp_LoadSaveData_Params
	{
	public:
		TArray<float>                                              sourceArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AddictionComp.GetDataLevel
	 */
	struct UAddictionComp_GetDataLevel_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      checkTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AddictionComp.AddData
	 */
	struct UAddictionComp_AddData_Params
	{
	public:
		int32_t                                                    newSubstanceIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takeTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      calcPower;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recoveryTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      recoveryOffset;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AstralProfile.powerOnSurface
	 */
	struct AAstralProfile_powerOnSurface_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.AstralProfile.heatPower
	 */
	struct AAstralProfile_heatPower_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.UserSawUpgrades
	 */
	struct ABU_ManagerActor_UserSawUpgrades_Params
	{	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.UpgradeBought
	 */
	struct ABU_ManagerActor_UpgradeBought_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UpgradeLineName;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.RefreshBuildingObjects
	 */
	struct ABU_ManagerActor_RefreshBuildingObjects_Params
	{	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.PrepareDataForUse
	 */
	struct ABU_ManagerActor_PrepareDataForUse_Params
	{	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.LogUnseenDetails
	 */
	struct ABU_ManagerActor_LogUnseenDetails_Params
	{
	public:
		struct FBU_UnseenDetailsSets                               LogUnseenDetails;                                        // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.LogUnseenData
	 */
	struct ABU_ManagerActor_LogUnseenData_Params
	{
	public:
		struct FBU_UnseenUL                                        LogUnseenUL;                                             // 0x0000(0x0020)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.LogMeOut
	 */
	struct ABU_ManagerActor_LogMeOut_Params
	{	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.GetUnseenData
	 */
	struct ABU_ManagerActor_GetUnseenData_Params
	{
	public:
		TArray<struct FBU_UnseenUL>                                OutUnseenData;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.GetMainLineUpgradeLevel
	 */
	struct ABU_ManagerActor_GetMainLineUpgradeLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_ManagerActor.GetAllUpgradeLines
	 */
	struct ABU_ManagerActor_GetAllUpgradeLines_Params
	{
	public:
		TArray<class ABU_UpgradeLineActor*>                        OutReferenceList;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeDetails.GetMaxUpgradeLevel
	 */
	struct ABU_UpgradeDetails_GetMaxUpgradeLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.UpgradeToLevel
	 */
	struct ABU_UpgradeLineActor_UpgradeToLevel_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetailsAfterLoad
	 */
	struct ABU_UpgradeLineActor_RefreshDetailsAfterLoad_Params
	{	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.RefreshDetails
	 */
	struct ABU_UpgradeLineActor_RefreshDetails_Params
	{	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.ProcessForLevel
	 */
	struct ABU_UpgradeLineActor_ProcessForLevel_Params
	{
	public:
		int32_t                                                    procLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradePrice
	 */
	struct ABU_UpgradeLineActor_NextUpgradePrice_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.NextUpgradeLevel
	 */
	struct ABU_UpgradeLineActor_NextUpgradeLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailableForUpgrade
	 */
	struct ABU_UpgradeLineActor_IsAvailableForUpgrade_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.IsAvailable
	 */
	struct ABU_UpgradeLineActor_IsAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.HasAllUpgrades
	 */
	struct ABU_UpgradeLineActor_HasAllUpgrades_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.GetUpgradeCost
	 */
	struct ABU_UpgradeLineActor_GetUpgradeCost_Params
	{
	public:
		int32_t                                                    procLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.GetMaxUpgradeLevel
	 */
	struct ABU_UpgradeLineActor_GetMaxUpgradeLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.GetLevelPrice
	 */
	struct ABU_UpgradeLineActor_GetLevelPrice_Params
	{
	public:
		int32_t                                                    procLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.BU_UpgradeLineActor.AdaptMaxLevel
	 */
	struct ABU_UpgradeLineActor_AdaptMaxLevel_Params
	{	};

	/**
	 * Function DrugDealerSimulator.CepSaveTester.noticeAction
	 */
	struct ACepSaveTester_noticeAction_Params
	{	};

	/**
	 * Function DrugDealerSimulator.CepSaveTester.getCount
	 */
	struct ACepSaveTester_getCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.CepWeatherComponent.YearPassed
	 */
	struct UCepWeatherComponent_YearPassed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.CepWeatherComponent.YearDay
	 */
	struct UCepWeatherComponent_YearDay_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.CepWeatherComponent.SetupRain
	 */
	struct UCepWeatherComponent_SetupRain_Params
	{
	public:
		int32_t                                                    datNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      rainLength;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      rainDensity;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.CepWeatherComponent.SaveDataSnapshot
	 */
	struct UCepWeatherComponent_SaveDataSnapshot_Params
	{	};

	/**
	 * Function DrugDealerSimulator.CepWeatherComponent.RecoverDataSnapshot
	 */
	struct UCepWeatherComponent_RecoverDataSnapshot_Params
	{	};

	/**
	 * Function DrugDealerSimulator.CepWeatherComponent.NextYearDay
	 */
	struct UCepWeatherComponent_NextYearDay_Params
	{
	public:
		int32_t                                                    curDay;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Op;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.CepWeatherComponent.Init
	 */
	struct UCepWeatherComponent_Init_Params
	{	};

	/**
	 * Function DrugDealerSimulator.CepWeatherProfile.YearPassed
	 */
	struct ACepWeatherProfile_YearPassed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.CepWeatherProfile.YearDay
	 */
	struct ACepWeatherProfile_YearDay_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.CepWeatherProfile.Init
	 */
	struct ACepWeatherProfile_Init_Params
	{	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.StartCommitSession
	 */
	struct UDayConditionsLogger_UE_StartCommitSession_Params
	{
	public:
		float                                                      newStartVal;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByIndex
	 */
	struct UDayConditionsLogger_UE_SetValueByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByHour
	 */
	struct UDayConditionsLogger_UE_SetValueByHour_Params
	{
	public:
		float                                                      setHour;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.SeekIndex
	 */
	struct UDayConditionsLogger_UE_SeekIndex_Params
	{
	public:
		float                                                      seekHour;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.IsInCommitMode
	 */
	struct UDayConditionsLogger_UE_IsInCommitMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.GetValuesLength
	 */
	struct UDayConditionsLogger_UE_GetValuesLength_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByIndex
	 */
	struct UDayConditionsLogger_UE_GetValueByIndex_Params
	{
	public:
		int32_t                                                    SeekIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByHour
	 */
	struct UDayConditionsLogger_UE_GetValueByHour_Params
	{
	public:
		float                                                      seekHour;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       extrapolateValue;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.GetSum
	 */
	struct UDayConditionsLogger_UE_GetSum_Params
	{
	public:
		int32_t                                                    maxIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.GetNextIndex
	 */
	struct UDayConditionsLogger_UE_GetNextIndex_Params
	{
	public:
		int32_t                                                    curIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Op;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.EndCommitSession
	 */
	struct UDayConditionsLogger_UE_EndCommitSession_Params
	{
	public:
		float                                                      newEndVal;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       followToEnd;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLogger_UE.ClassInit
	 */
	struct UDayConditionsLogger_UE_ClassInit_Params
	{	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLoggerComponent.SetValueByIndex
	 */
	struct UDayConditionsLoggerComponent_SetValueByIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.DayConditionsLoggerComponent.Init
	 */
	struct UDayConditionsLoggerComponent_Init_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BaseFactors.StoreSelfData
	 */
	struct UEB_BaseFactors_StoreSelfData_Params
	{
	public:
		TArray<float>                                              targetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_BaseFactors.SetClassBasics
	 */
	struct UEB_BaseFactors_SetClassBasics_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BaseFactors.RestoreFromData
	 */
	struct UEB_BaseFactors_RestoreFromData_Params
	{
	public:
		TArray<float>                                              sourceArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_BaseFactors.GetAddictivnessFactor
	 */
	struct UEB_BaseFactors_GetAddictivnessFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_BodyHealth.StoreSelfData
	 */
	struct UEB_BodyHealth_StoreSelfData_Params
	{
	public:
		TArray<float>                                              targetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_BodyHealth.SetClassBasics
	 */
	struct UEB_BodyHealth_SetClassBasics_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BodyHealth.RestoreFromData
	 */
	struct UEB_BodyHealth_RestoreFromData_Params
	{
	public:
		TArray<float>                                              sourceArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_BodyHealth.InitAsValuesStorage
	 */
	struct UEB_BodyHealth_InitAsValuesStorage_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BodyHealth.InitAsMinClamp
	 */
	struct UEB_BodyHealth_InitAsMinClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BodyHealth.InitAsMaxClamp
	 */
	struct UEB_BodyHealth_InitAsMaxClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BodyHealth.InitAsFactor
	 */
	struct UEB_BodyHealth_InitAsFactor_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BrainFunctions.StoreSelfData
	 */
	struct UEB_BrainFunctions_StoreSelfData_Params
	{
	public:
		TArray<float>                                              targetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_BrainFunctions.SetClassBasics
	 */
	struct UEB_BrainFunctions_SetClassBasics_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BrainFunctions.RestoreFromData
	 */
	struct UEB_BrainFunctions_RestoreFromData_Params
	{
	public:
		TArray<float>                                              sourceArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_BrainFunctions.InitAsValuesStorage
	 */
	struct UEB_BrainFunctions_InitAsValuesStorage_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BrainFunctions.InitAsMinClamp
	 */
	struct UEB_BrainFunctions_InitAsMinClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BrainFunctions.InitAsMaxClamp
	 */
	struct UEB_BrainFunctions_InitAsMaxClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_BrainFunctions.InitAsFactor
	 */
	struct UEB_BrainFunctions_InitAsFactor_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Perception.StoreSelfData
	 */
	struct UEB_Perception_StoreSelfData_Params
	{
	public:
		TArray<float>                                              targetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_Perception.SetClassBasics
	 */
	struct UEB_Perception_SetClassBasics_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Perception.RestoreFromData
	 */
	struct UEB_Perception_RestoreFromData_Params
	{
	public:
		TArray<float>                                              sourceArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_Perception.InitAsValuesStorage
	 */
	struct UEB_Perception_InitAsValuesStorage_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Perception.InitAsMinClamp
	 */
	struct UEB_Perception_InitAsMinClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Perception.InitAsMaxClamp
	 */
	struct UEB_Perception_InitAsMaxClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Perception.InitAsFactor
	 */
	struct UEB_Perception_InitAsFactor_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Physical.StoreSelfData
	 */
	struct UEB_Physical_StoreSelfData_Params
	{
	public:
		TArray<float>                                              targetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_Physical.SetClassBasics
	 */
	struct UEB_Physical_SetClassBasics_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Physical.RestoreFromData
	 */
	struct UEB_Physical_RestoreFromData_Params
	{
	public:
		TArray<float>                                              sourceArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_Physical.InitAsValuesStorage
	 */
	struct UEB_Physical_InitAsValuesStorage_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Physical.InitAsMinClamp
	 */
	struct UEB_Physical_InitAsMinClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Physical.InitAsMaxClamp
	 */
	struct UEB_Physical_InitAsMaxClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Physical.InitAsFactor
	 */
	struct UEB_Physical_InitAsFactor_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Spirit.StoreSelfData
	 */
	struct UEB_Spirit_StoreSelfData_Params
	{
	public:
		TArray<float>                                              targetArray;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_Spirit.SetClassBasics
	 */
	struct UEB_Spirit_SetClassBasics_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Spirit.RestoreFromData
	 */
	struct UEB_Spirit_RestoreFromData_Params
	{
	public:
		TArray<float>                                              sourceArray;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    baseOffset;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.EB_Spirit.InitAsValuesStorage
	 */
	struct UEB_Spirit_InitAsValuesStorage_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Spirit.InitAsMinClamp
	 */
	struct UEB_Spirit_InitAsMinClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Spirit.InitAsMaxClamp
	 */
	struct UEB_Spirit_InitAsMaxClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.EB_Spirit.InitAsFactor
	 */
	struct UEB_Spirit_InitAsFactor_Params
	{	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.SetTestInt
	 */
	struct AHumanoidActor_SetTestInt_Params
	{
	public:
		int32_t                                                    newInt;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.SaveDataSnapshot
	 */
	struct AHumanoidActor_SaveDataSnapshot_Params
	{	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.RestoreDataSnapshot
	 */
	struct AHumanoidActor_RestoreDataSnapshot_Params
	{	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.NoticeDrugTook
	 */
	struct AHumanoidActor_NoticeDrugTook_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActiveSubstance*                                    valuesProvider;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takenMass;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.IsSubstanceEffective
	 */
	struct AHumanoidActor_IsSubstanceEffective_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.IsSubstanceBeingAbsorbed
	 */
	struct AHumanoidActor_IsSubstanceBeingAbsorbed_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      checkDayTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.GetToleranceDataLevel
	 */
	struct AHumanoidActor_GetToleranceDataLevel_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curDayTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.GetToleranceDataInFactor
	 */
	struct AHumanoidActor_GetToleranceDataInFactor_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curDayTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.GetToleranceDataFactor
	 */
	struct AHumanoidActor_GetToleranceDataFactor_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curDayTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.GetTestInt
	 */
	struct AHumanoidActor_GetTestInt_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.GetCurrentConcentration
	 */
	struct AHumanoidActor_GetCurrentConcentration_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.GetAddictionDataLevel
	 */
	struct AHumanoidActor_GetAddictionDataLevel_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curDayTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.GetAddictionDataInFactor
	 */
	struct AHumanoidActor_GetAddictionDataInFactor_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curDayTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.GetAddictionDataFactor
	 */
	struct AHumanoidActor_GetAddictionDataFactor_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curDayTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidActor.ApplySubstance
	 */
	struct AHumanoidActor_ApplySubstance_Params
	{
	public:
		float                                                      currentValue;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Tolerance;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curConcentration;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidComponent.SetToleranceLevel
	 */
	struct UHumanoidComponent_SetToleranceLevel_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidComponent.SetAddictionLevel
	 */
	struct UHumanoidComponent_SetAddictionLevel_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidComponent.NoticeDrugTook
	 */
	struct UHumanoidComponent_NoticeDrugTook_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActiveSubstance*                                    valuesProvider;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takenMass;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidComponent.GetToleranceLevel
	 */
	struct UHumanoidComponent_GetToleranceLevel_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactorIn
	 */
	struct UHumanoidComponent_GetToleranceFactorIn_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidComponent.GetToleranceFactor
	 */
	struct UHumanoidComponent_GetToleranceFactor_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidComponent.GetAddictionLevel
	 */
	struct UHumanoidComponent_GetAddictionLevel_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidComponent.GetAddictionFactor
	 */
	struct UHumanoidComponent_GetAddictionFactor_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.HumanoidComponent.ApplySubstance
	 */
	struct UHumanoidComponent_ApplySubstance_Params
	{
	public:
		float                                                      currentValue;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Tolerance;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      curConcentration;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.UnlockedDone
	 */
	struct ALockpickPuzzle_UnlockedDone_Params
	{	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.StartTakingDamage
	 */
	struct ALockpickPuzzle_StartTakingDamage_Params
	{	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.ResetPuzzle
	 */
	struct ALockpickPuzzle_ResetPuzzle_Params
	{
	public:
		bool                                                       ResetUnlockPosition;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.PushMouseInput
	 */
	struct ALockpickPuzzle_PushMouseInput_Params
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Y;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.IsUnlocked
	 */
	struct ALockpickPuzzle_IsUnlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.IsScrewDriverInUnlockZone
	 */
	struct ALockpickPuzzle_IsScrewDriverInUnlockZone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.IsBobbyPinInUnlockZone
	 */
	struct ALockpickPuzzle_IsBobbyPinInUnlockZone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.HasBoobyPinBroke
	 */
	struct ALockpickPuzzle_HasBoobyPinBroke_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.GetScrewDriverAngle
	 */
	struct ALockpickPuzzle_GetScrewDriverAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.GetDifficultyMeta
	 */
	struct ALockpickPuzzle_GetDifficultyMeta_Params
	{
	public:
		int32_t                                                    optNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.GetCurrentResistance
	 */
	struct ALockpickPuzzle_GetCurrentResistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinHealth
	 */
	struct ALockpickPuzzle_GetBobbyPinHealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinAngle
	 */
	struct ALockpickPuzzle_GetBobbyPinAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.EndTakingDamage
	 */
	struct ALockpickPuzzle_EndTakingDamage_Params
	{	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.BrokenEvent
	 */
	struct ALockpickPuzzle_BrokenEvent_Params
	{	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.ActionButtonReleased
	 */
	struct ALockpickPuzzle_ActionButtonReleased_Params
	{	};

	/**
	 * Function DrugDealerSimulator.LockpickPuzzle.ActionButtonPressed
	 */
	struct ALockpickPuzzle_ActionButtonPressed_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.WTACStoreInSaveSpace
	 */
	struct UNextSingleton_WTACStoreInSaveSpace_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.WTACRecover
	 */
	struct UNextSingleton_WTACRecover_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.ValidateWorld
	 */
	struct UNextSingleton_ValidateWorld_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.TestCallFunction
	 */
	struct UNextSingleton_TestCallFunction_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.ResearchWorld
	 */
	struct UNextSingleton_ResearchWorld_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.ReInitWTAC
	 */
	struct UNextSingleton_ReInitWTAC_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.ReassignWorld
	 */
	struct UNextSingleton_ReassignWorld_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.ReasearchForStaticMeshes
	 */
	struct UNextSingleton_ReasearchForStaticMeshes_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.PrepareInstancesForSaveEvent
	 */
	struct UNextSingleton_PrepareInstancesForSaveEvent_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.OptSystemOperational
	 */
	struct UNextSingleton_OptSystemOperational_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.NPCSystemOperational
	 */
	struct UNextSingleton_NPCSystemOperational_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.NoticeLoadRequest
	 */
	struct UNextSingleton_NoticeLoadRequest_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.LoadDone
	 */
	struct UNextSingleton_LoadDone_Params
	{
	public:
		bool                                                       retryLoad;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.IsGridOperational
	 */
	struct UNextSingleton_IsGridOperational_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.InnerLoadPerformed
	 */
	struct UNextSingleton_InnerLoadPerformed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.InitSystemsActors
	 */
	struct UNextSingleton_InitSystemsActors_Params
	{	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.GetTSManager
	 */
	struct UNextSingleton_GetTSManager_Params
	{
	public:
		class ATS_Manager*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.GetPlayerLocation
	 */
	struct UNextSingleton_GetPlayerLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingleton.CanSaveDependedInstancesInit
	 */
	struct UNextSingleton_CanSaveDependedInstancesInit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingletonLibrary.GetNextSingletonData
	 */
	struct UNextSingletonLibrary_GetNextSingletonData_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNextSingleton*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.NextSingletonWorldHelper.SetMasterState
	 */
	struct ANextSingletonWorldHelper_SetMasterState_Params
	{
	public:
		bool                                                       newState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMinClamp
	 */
	struct USDB_BodyHealth_InitBucketAsMinClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsMaxClamp
	 */
	struct USDB_BodyHealth_InitBucketAsMaxClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsFactors
	 */
	struct USDB_BodyHealth_InitBucketAsFactors_Params
	{	};

	/**
	 * Function DrugDealerSimulator.SDB_BodyHealth.InitBucketAsDataStorage
	 */
	struct USDB_BodyHealth_InitBucketAsDataStorage_Params
	{	};

	/**
	 * Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMinClamp
	 */
	struct USDB_BodyHealthComp_InitBucketAsMinClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsMaxClamp
	 */
	struct USDB_BodyHealthComp_InitBucketAsMaxClamp_Params
	{	};

	/**
	 * Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsFactors
	 */
	struct USDB_BodyHealthComp_InitBucketAsFactors_Params
	{	};

	/**
	 * Function DrugDealerSimulator.SDB_BodyHealthComp.InitBucketAsDataStorage
	 */
	struct USDB_BodyHealthComp_InitBucketAsDataStorage_Params
	{	};

	/**
	 * Function DrugDealerSimulator.SeasonAstralComponent.GetSunsetTime
	 */
	struct USeasonAstralComponent_GetSunsetTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SeasonAstralComponent.GetSunriseTime
	 */
	struct USeasonAstralComponent_GetSunriseTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitTarget
	 */
	struct USeasonAstralComponent_GetOrbitTarget_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitDistanceTarget
	 */
	struct USeasonAstralComponent_GetOrbitDistanceTarget_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SeasonAstralComponent.GetMaxHeigthTime
	 */
	struct USeasonAstralComponent_GetMaxHeigthTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SeasonAstralComponent.GetHeatPower
	 */
	struct USeasonAstralComponent_GetHeatPower_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SeasonAstralProfile.GetSunsetTime
	 */
	struct ASeasonAstralProfile_GetSunsetTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SeasonAstralProfile.GetSunriseTime
	 */
	struct ASeasonAstralProfile_GetSunriseTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SeasonAstralProfile.GetHeatPower
	 */
	struct ASeasonAstralProfile_GetHeatPower_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SeasonProfile.getAirProfile
	 */
	struct ASeasonProfile_getAirProfile_Params
	{
	public:
		class UAirComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroActor.retName
	 */
	struct AShiroActor_retName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.WeightedArrayRand
	 */
	struct UShiroBlueprint_WeightedArrayRand_Params
	{
	public:
		TArray<float>                                              WeightArr;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.testReferences
	 */
	struct UShiroBlueprint_testReferences_Params
	{
	public:
		float                                                      t1;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      t2;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      t3;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      t4;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.SimpleGrid
	 */
	struct UShiroBlueprint_SimpleGrid_Params
	{
	public:
		float                                                      intervalX;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      intervalY;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    columnCount;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    objectIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      positionX;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      positionY;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2
	 */
	struct UShiroBlueprint_shiroFunc2_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.shiroFunc
	 */
	struct UShiroBlueprint_shiroFunc_Params
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.GetWTAC
	 */
	struct UShiroBlueprint_GetWTAC_Params
	{
	public:
		class AWorldTimeAndConditions*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.GetSingleton
	 */
	struct UShiroBlueprint_GetSingleton_Params
	{
	public:
		class UNextSingleton*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.GetSAE
	 */
	struct UShiroBlueprint_GetSAE_Params
	{
	public:
		class ASubstancesAndEffects*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.FastProportions
	 */
	struct UShiroBlueprint_FastProportions_Params
	{
	public:
		float                                                      minTargetRange;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      maxTargetRange;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      workValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       unboundBounds;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      minBaseRange;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      maxBaseRange;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest
	 */
	struct UShiroBlueprint_extrapolateTest_Params
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Max;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      perc;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.CheckPrice
	 */
	struct UShiroBlueprint_CheckPrice_Params
	{
	public:
		float                                                      drugCurrentPrice;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      drugResonablePrice;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      reputationFactor;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AddictedCustomer;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       priceHighOutput;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       priceTooHighOutput;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      baseMaxSellingFactor;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      reputationInfluence;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AddictedInfluence;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.CanSaveDependedInstancesInit
	 */
	struct UShiroBlueprint_CanSaveDependedInstancesInit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.ShiroBlueprint.calculateSky
	 */
	struct UShiroBlueprint_calculateSky_Params
	{
	public:
		int32_t                                                    dayNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    curHour;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    curMinute;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       sunVisible;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      sunHeight;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      sunPlainAngle;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      sunBrightness;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       moonVisible;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      varDump;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.ProcessTriggers
	 */
	struct ASubstancesAndEffects_ProcessTriggers_Params
	{
	public:
		int32_t                                                    substanceIndexTriggering;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.NoticeDrugTook
	 */
	struct ASubstancesAndEffects_NoticeDrugTook_Params
	{
	public:
		class AActiveSubstance*                                    substanceActor;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActiveSubstance*                                    valuesProvider;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      takenMass;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.MergeWithWorld
	 */
	struct ASubstancesAndEffects_MergeWithWorld_Params
	{
	public:
		class UWorld*                                              W;                                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.ManageLaunchList
	 */
	struct ASubstancesAndEffects_ManageLaunchList_Params
	{
	public:
		float                                                      currentDayTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceGenericData
	 */
	struct ASubstancesAndEffects_GetSubstanceGenericData_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    subprop;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      retEmpty;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffectsByIndex
	 */
	struct ASubstancesAndEffects_GetSubstanceEffectsByIndex_Params
	{
	public:
		int32_t                                                    activeSubIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceEffects
	 */
	struct ASubstancesAndEffects_GetSubstanceEffects_Params
	{
	public:
		class AActiveSubstance*                                    activeSub;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.GetSubstanceByIndex
	 */
	struct ASubstancesAndEffects_GetSubstanceByIndex_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActiveSubstance*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.GetHealthObject
	 */
	struct ASubstancesAndEffects_GetHealthObject_Params
	{
	public:
		class AHumanoidActor*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.DoBasicEffectTick
	 */
	struct ASubstancesAndEffects_DoBasicEffectTick_Params
	{
	public:
		class ATriggeredDrugEffect*                                Eff;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.ClassInit
	 */
	struct ASubstancesAndEffects_ClassInit_Params
	{	};

	/**
	 * Function DrugDealerSimulator.SubstancesAndEffects.CheckForSubstanceEffects
	 */
	struct ASubstancesAndEffects_CheckForSubstanceEffects_Params
	{
	public:
		int32_t                                                    substanceIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.ValidatePTRS
	 */
	struct ATriggeredDrugEffect_ValidatePTRS_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.StartEffect
	 */
	struct ATriggeredDrugEffect_StartEffect_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectInit
	 */
	struct ATriggeredDrugEffect_PureEffectInit_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.PureEffectEnd
	 */
	struct ATriggeredDrugEffect_PureEffectEnd_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.NoticeEffectEnd
	 */
	struct ATriggeredDrugEffect_NoticeEffectEnd_Params
	{
	public:
		float                                                      currentDayTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.InitInnerClass
	 */
	struct ATriggeredDrugEffect_InitInnerClass_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.GetCurrentDayTime
	 */
	struct ATriggeredDrugEffect_GetCurrentDayTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.EndEffect
	 */
	struct ATriggeredDrugEffect_EndEffect_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.EffectTick
	 */
	struct ATriggeredDrugEffect_EffectTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TriggeredDrugEffect.CheckTrigger
	 */
	struct ATriggeredDrugEffect_CheckTrigger_Params
	{
	public:
		class AHumanoidActor*                                      checkObject;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      currentDayTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TimeProfile.setTimeMultiplier
	 */
	struct ATimeProfile_setTimeMultiplier_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      propagationTime;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TimeProfile.setDayHourMinuteTime
	 */
	struct ATimeProfile_setDayHourMinuteTime_Params
	{
	public:
		int32_t                                                    day;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    hour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    minute;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TimeProfile.getIntTimeData
	 */
	struct ATimeProfile_getIntTimeData_Params
	{
	public:
		int32_t                                                    optNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TimeProfile.GetCurrentTimeMultiplier
	 */
	struct ATimeProfile_GetCurrentTimeMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TimeProfile.dayFloatResult
	 */
	struct ATimeProfile_dayFloatResult_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TimeProfile.addSeconds
	 */
	struct ATimeProfile_addSeconds_Params
	{
	public:
		float                                                      addSeconds;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TimeProfile.addMinutes
	 */
	struct ATimeProfile_addMinutes_Params
	{
	public:
		int32_t                                                    addMinutes;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TrainControllerCode.initOnWorld
	 */
	struct ATrainControllerCode_initOnWorld_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TrainControllerCode.initInstance
	 */
	struct ATrainControllerCode_initInstance_Params
	{
	public:
		int32_t                                                    followingSegmentsCount;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TrainControllerCode.calcTotalWeigthAndPower
	 */
	struct ATrainControllerCode_calcTotalWeigthAndPower_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TrainControllerCode.calcTotalFrictionForce
	 */
	struct ATrainControllerCode_calcTotalFrictionForce_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TrainControllerCode.calcSingleSegment
	 */
	struct ATrainControllerCode_calcSingleSegment_Params
	{
	public:
		class ATrainRealSegment*                                   calcSegment;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TrainControllerCode.calcSegmentDistanceToLeader
	 */
	struct ATrainControllerCode_calcSegmentDistanceToLeader_Params
	{
	public:
		int32_t                                                    SegmentIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ValidateIndex
	 */
	struct ATS_Manager_ValidateIndex_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ValidateActorIndex
	 */
	struct ATS_Manager_ValidateActorIndex_Params
	{
	public:
		int32_t                                                    ValidationIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.TranslateActorToDataIndex
	 */
	struct ATS_Manager_TranslateActorToDataIndex_Params
	{
	public:
		int32_t                                                    SeekActorIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.StartDEARaid
	 */
	struct ATS_Manager_StartDEARaid_Params
	{
	public:
		int32_t                                                    EntranceIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DeepSeek;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.SpawnEntranceAndRegister
	 */
	struct ATS_Manager_SpawnEntranceAndRegister_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.SetRaidedState
	 */
	struct ATS_Manager_SetRaidedState_Params
	{
	public:
		bool                                                       newState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.SetDebDigFactor
	 */
	struct ATS_Manager_SetDebDigFactor_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ReserveAndGetNextActorIndex
	 */
	struct ATS_Manager_ReserveAndGetNextActorIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ReportConnRaidProgress
	 */
	struct ATS_Manager_ReportConnRaidProgress_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ReportConnectionDigProgress
	 */
	struct ATS_Manager_ReportConnectionDigProgress_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Progress;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ReopenEntrance
	 */
	struct ATS_Manager_ReopenEntrance_Params
	{
	public:
		int32_t                                                    EntranceActorIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.RemoveConnection
	 */
	struct ATS_Manager_RemoveConnection_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.RegisterOnLoadTunnel
	 */
	struct ATS_Manager_RegisterOnLoadTunnel_Params
	{
	public:
		class ATS_TunnelEntrence*                                  ThisEntrence;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.RegisterNewEntrance
	 */
	struct ATS_Manager_RegisterNewEntrance_Params
	{
	public:
		class ATS_TunnelEntrence*                                  NewBuildedEntrance;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.RecoverData
	 */
	struct ATS_Manager_RecoverData_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.RecalcTunnelsRates
	 */
	struct ATS_Manager_RecalcTunnelsRates_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.RecalcProgressReportsForConn
	 */
	struct ATS_Manager_RecalcProgressReportsForConn_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.RecalcProgressReports
	 */
	struct ATS_Manager_RecalcProgressReports_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.PrintUpgDataForConn
	 */
	struct ATS_Manager_PrintUpgDataForConn_Params
	{
	public:
		int32_t                                                    ConnIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.PrintUpgData
	 */
	struct ATS_Manager_PrintUpgData_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.PrintRaidMessage
	 */
	struct ATS_Manager_PrintRaidMessage_Params
	{
	public:
		int32_t                                                    ActionType;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SubactionType;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ObjectA;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ObjectB;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.PrintEntData
	 */
	struct ATS_Manager_PrintEntData_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.PrintDestinationData
	 */
	struct ATS_Manager_PrintDestinationData_Params
	{
	public:
		struct FTS_AvailableDestinations                           InputData;                                               // 0x0000(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.PrintConnData
	 */
	struct ATS_Manager_PrintConnData_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.PrepareDataForSave
	 */
	struct ATS_Manager_PrepareDataForSave_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.LogRaidAction
	 */
	struct ATS_Manager_LogRaidAction_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    objA;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    objB;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      adtValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.IsUpgradeVisibleInConn
	 */
	struct ATS_Manager_IsUpgradeVisibleInConn_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UpgradeIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.IsUpgradeBoughtInConn
	 */
	struct ATS_Manager_IsUpgradeBoughtInConn_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UpgradeIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.IsUpgradeAvailableForConn
	 */
	struct ATS_Manager_IsUpgradeAvailableForConn_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UpgradeIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.IsTunnelSystemBeeingRaided
	 */
	struct ATS_Manager_IsTunnelSystemBeeingRaided_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.HasUpgradeByIndex
	 */
	struct ATS_Manager_HasUpgradeByIndex_Params
	{
	public:
		int32_t                                                    checkIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.HasEntrenceRegisteredByActor
	 */
	struct ATS_Manager_HasEntrenceRegisteredByActor_Params
	{
	public:
		class ATS_TunnelEntrence*                                  EntrenceActor;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.HasEntrenceRegistered
	 */
	struct ATS_Manager_HasEntrenceRegistered_Params
	{
	public:
		class FString                                              SeekName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GlobalRaidStart
	 */
	struct ATS_Manager_GlobalRaidStart_Params
	{
	public:
		int32_t                                                    EntranceIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GameDifficulty;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetUpgradeDataReferenced
	 */
	struct ATS_Manager_GetUpgradeDataReferenced_Params
	{
	public:
		int32_t                                                    UpgradeIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTS_ConnectionWorkUpgrade                           ReturnValue;                                             // 0x0000(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetUpgradeData
	 */
	struct ATS_Manager_GetUpgradeData_Params
	{
	public:
		int32_t                                                    UpgradeIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTS_ConnectionWorkUpgrade                           ReturnValue;                                             // 0x0000(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetRaidSpeedSeek
	 */
	struct ATS_Manager_GetRaidSpeedSeek_Params
	{
	public:
		int32_t                                                    GameDifficultyLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetRaidDeepSeek
	 */
	struct ATS_Manager_GetRaidDeepSeek_Params
	{
	public:
		int32_t                                                    GameDifficultyLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetNotPayedDistance
	 */
	struct ATS_Manager_GetNotPayedDistance_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetEntrencesData
	 */
	struct ATS_Manager_GetEntrencesData_Params
	{
	public:
		TMap<class FString, int32_t>                               ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndexByActor
	 */
	struct ATS_Manager_GetEntrenceInnerIndexByActor_Params
	{
	public:
		class ATS_TunnelEntrence*                                  EntrenceActor;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetEntrenceInnerIndex
	 */
	struct ATS_Manager_GetEntrenceInnerIndex_Params
	{
	public:
		class FString                                              SeekName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetEntranceName
	 */
	struct ATS_Manager_GetEntranceName_Params
	{
	public:
		int32_t                                                    seekEntranceIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetCurrentGameTime
	 */
	struct ATS_Manager_GetCurrentGameTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetConnectionStatesConst
	 */
	struct ATS_Manager_GetConnectionStatesConst_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTS_ConnState                                       ReturnValue;                                             // 0x0000(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetConnectionStates
	 */
	struct ATS_Manager_GetConnectionStates_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTS_ConnState                                       ReturnValue;                                             // 0x0000(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetConnectionMeterRate
	 */
	struct ATS_Manager_GetConnectionMeterRate_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetAvailableTeleportDestinations
	 */
	struct ATS_Manager_GetAvailableTeleportDestinations_Params
	{
	public:
		int32_t                                                    InputEntranceActorIndex;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTS_AvailableDestinations>                   OutDestination;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.GetAvailableDigDestinations
	 */
	struct ATS_Manager_GetAvailableDigDestinations_Params
	{
	public:
		int32_t                                                    InputEntranceActorIndex;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTS_AvailableDestinations>                   OutDestination;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.FindConnectionIndex
	 */
	struct ATS_Manager_FindConnectionIndex_Params
	{
	public:
		int32_t                                                    FirstEntrenceIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SecondEntrenceIndex;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.DEARaidEnd
	 */
	struct ATS_Manager_DEARaidEnd_Params
	{
	public:
		int32_t                                                    ConnectionsLost;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EntrancesLost;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ArrestedDepositedCount;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.CreateUpgradesIndex
	 */
	struct ATS_Manager_CreateUpgradesIndex_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.CreateNewConnection
	 */
	struct ATS_Manager_CreateNewConnection_Params
	{
	public:
		int32_t                                                    FirstEntrenceIndex;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SecondEntrenceIndex;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ConnectionStartRaidEvent
	 */
	struct ATS_Manager_ConnectionStartRaidEvent_Params
	{
	public:
		int32_t                                                    EntranceIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ConnectionRequiresMoney
	 */
	struct ATS_Manager_ConnectionRequiresMoney_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ConnectionRaidedEvent
	 */
	struct ATS_Manager_ConnectionRaidedEvent_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ConnectionRaided
	 */
	struct ATS_Manager_ConnectionRaided_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartRaidTime;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndRaidTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    parentChain;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.ConnectionDone
	 */
	struct ATS_Manager_ConnectionDone_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.CalcNextIndexBasedOnIndex
	 */
	struct ATS_Manager_CalcNextIndexBasedOnIndex_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.BuyUpgradeForConn
	 */
	struct ATS_Manager_BuyUpgradeForConn_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    UpgradeIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.AfterRaidRelease
	 */
	struct ATS_Manager_AfterRaidRelease_Params
	{	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.AddNewEntrence
	 */
	struct ATS_Manager_AddNewEntrence_Params
	{
	public:
		class ATS_TunnelEntrence*                                  EntrenceActor;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_Manager.AddMoneyToConnection
	 */
	struct ATS_Manager_AddMoneyToConnection_Params
	{
	public:
		int32_t                                                    ConnectionIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      moneyAmount;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_TunnelEntrence.SetManagerIndex
	 */
	struct ATS_TunnelEntrence_SetManagerIndex_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_TunnelEntrence.NeedStartManage
	 */
	struct ATS_TunnelEntrence_NeedStartManage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_TunnelEntrence.GetDataIndex
	 */
	struct ATS_TunnelEntrence_GetDataIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_TunnelEntrence.GetAvailableDestinations
	 */
	struct ATS_TunnelEntrence_GetAvailableDestinations_Params
	{
	public:
		TArray<class ATS_TunnelEntrence*>                          ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.TS_TunnelEntrence.GetActorIndex
	 */
	struct ATS_TunnelEntrence_GetActorIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WeatherProfile.YearPassed
	 */
	struct AWeatherProfile_YearPassed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WeatherProfile.Init
	 */
	struct AWeatherProfile_Init_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.TimeProfile
	 */
	struct AWorldTimeAndConditions_TimeProfile_Params
	{
	public:
		class ATimeProfile*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.StoreInSaveSpace
	 */
	struct AWorldTimeAndConditions_StoreInSaveSpace_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.StartRain
	 */
	struct AWorldTimeAndConditions_StartRain_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.StartFog
	 */
	struct AWorldTimeAndConditions_StartFog_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.ShadowsSettingsChanged
	 */
	struct AWorldTimeAndConditions_ShadowsSettingsChanged_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.SetUltraSkyInit
	 */
	struct AWorldTimeAndConditions_SetUltraSkyInit_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.SetTimeMulptiplier
	 */
	struct AWorldTimeAndConditions_SetTimeMulptiplier_Params
	{
	public:
		float                                                      newFactor;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      propagationTime;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.SetTime
	 */
	struct AWorldTimeAndConditions_SetTime_Params
	{
	public:
		int32_t                                                    dayValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    hourValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    minuteValue;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.SaveDataSnapshot
	 */
	struct AWorldTimeAndConditions_SaveDataSnapshot_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.ReInitLoggers
	 */
	struct AWorldTimeAndConditions_ReInitLoggers_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.RecoverDataSnapshot
	 */
	struct AWorldTimeAndConditions_RecoverDataSnapshot_Params
	{
	public:
		bool                                                       recoverTime;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.PureInit
	 */
	struct AWorldTimeAndConditions_PureInit_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.PoliceArrestTimeShift
	 */
	struct AWorldTimeAndConditions_PoliceArrestTimeShift_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.NoticeCalcPhaseDone
	 */
	struct AWorldTimeAndConditions_NoticeCalcPhaseDone_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.MarkNewLoad
	 */
	struct AWorldTimeAndConditions_MarkNewLoad_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.IsUltraSkyInited
	 */
	struct AWorldTimeAndConditions_IsUltraSkyInited_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.IsCurrentlyRaining
	 */
	struct AWorldTimeAndConditions_IsCurrentlyRaining_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.IsAfterNoon
	 */
	struct AWorldTimeAndConditions_IsAfterNoon_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.InWorldInitiated
	 */
	struct AWorldTimeAndConditions_InWorldInitiated_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.InnerDisableWeatherSystem
	 */
	struct AWorldTimeAndConditions_InnerDisableWeatherSystem_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.Init
	 */
	struct AWorldTimeAndConditions_Init_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.HasFog
	 */
	struct AWorldTimeAndConditions_HasFog_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPowerAfterBounced
	 */
	struct AWorldTimeAndConditions_GetSunPowerAfterBounced_Params
	{
	public:
		float                                                      cAngle;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPower
	 */
	struct AWorldTimeAndConditions_GetSunPower_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetSunLigthPower
	 */
	struct AWorldTimeAndConditions_GetSunLigthPower_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetRainValue
	 */
	struct AWorldTimeAndConditions_GetRainValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetRainLogger
	 */
	struct AWorldTimeAndConditions_GetRainLogger_Params
	{
	public:
		int32_t                                                    dayNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDayConditionsLogger_UE*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitProgress
	 */
	struct AWorldTimeAndConditions_GetMoonOrbitProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitAngle
	 */
	struct AWorldTimeAndConditions_GetMoonOrbitAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetInitiationState
	 */
	struct AWorldTimeAndConditions_GetInitiationState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetHeatLogger
	 */
	struct AWorldTimeAndConditions_GetHeatLogger_Params
	{
	public:
		int32_t                                                    dayNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDayConditionsLogger_UE*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetFromSaveSpace
	 */
	struct AWorldTimeAndConditions_GetFromSaveSpace_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetFogLogger
	 */
	struct AWorldTimeAndConditions_GetFogLogger_Params
	{
	public:
		int32_t                                                    dayNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDayConditionsLogger_UE*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentTimeForUltraSky
	 */
	struct AWorldTimeAndConditions_GetCurrentTimeForUltraSky_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunShadows
	 */
	struct AWorldTimeAndConditions_GetCurrentSunShadows_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunPower
	 */
	struct AWorldTimeAndConditions_GetCurrentSunPower_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunOrbit
	 */
	struct AWorldTimeAndConditions_GetCurrentSunOrbit_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunDistance
	 */
	struct AWorldTimeAndConditions_GetCurrentSunDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunAngle
	 */
	struct AWorldTimeAndConditions_GetCurrentSunAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentStarsIntensity
	 */
	struct AWorldTimeAndConditions_GetCurrentStarsIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentShadowSettings
	 */
	struct AWorldTimeAndConditions_GetCurrentShadowSettings_Params
	{
	public:
		bool                                                       sunShadows;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       moonShadows;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentNigthBrightness
	 */
	struct AWorldTimeAndConditions_GetCurrentNigthBrightness_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonShadows
	 */
	struct AWorldTimeAndConditions_GetCurrentMoonShadows_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonPhase
	 */
	struct AWorldTimeAndConditions_GetCurrentMoonPhase_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonBrigthness
	 */
	struct AWorldTimeAndConditions_GetCurrentMoonBrigthness_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntSeconds
	 */
	struct AWorldTimeAndConditions_GetCurrentIntSeconds_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntMinute
	 */
	struct AWorldTimeAndConditions_GetCurrentIntMinute_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntHour
	 */
	struct AWorldTimeAndConditions_GetCurrentIntHour_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntDay
	 */
	struct AWorldTimeAndConditions_GetCurrentIntDay_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFogLevel
	 */
	struct AWorldTimeAndConditions_GetCurrentFogLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatMinute
	 */
	struct AWorldTimeAndConditions_GetCurrentFloatMinute_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatHour
	 */
	struct AWorldTimeAndConditions_GetCurrentFloatHour_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatDay
	 */
	struct AWorldTimeAndConditions_GetCurrentFloatDay_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsSpeed
	 */
	struct AWorldTimeAndConditions_GetCurrentCloudsSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsLevel
	 */
	struct AWorldTimeAndConditions_GetCurrentCloudsLevel_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentBrightness
	 */
	struct AWorldTimeAndConditions_GetCurrentBrightness_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCloudLogger
	 */
	struct AWorldTimeAndConditions_GetCloudLogger_Params
	{
	public:
		int32_t                                                    dayNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDayConditionsLogger_UE*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistFactor
	 */
	struct AWorldTimeAndConditions_GetCalcSunDistFactor_Params
	{
	public:
		float                                                      baseVal;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistanceFactor
	 */
	struct AWorldTimeAndConditions_GetCalcSunDistanceFactor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.getBasicAirProfile
	 */
	struct AWorldTimeAndConditions_getBasicAirProfile_Params
	{
	public:
		class UAirComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeSunPower
	 */
	struct AWorldTimeAndConditions_GetAnyTimeSunPower_Params
	{
	public:
		int32_t                                                    dayNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      hourMark;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsSunFactor
	 */
	struct AWorldTimeAndConditions_GetAnyTimeCloudsSunFactor_Params
	{
	public:
		int32_t                                                    dayNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      hourMark;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsLevel
	 */
	struct AWorldTimeAndConditions_GetAnyTimeCloudsLevel_Params
	{
	public:
		int32_t                                                    dayNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      hourMark;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.EndRain
	 */
	struct AWorldTimeAndConditions_EndRain_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.EndFog
	 */
	struct AWorldTimeAndConditions_EndFog_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.EnableWeatherSystem
	 */
	struct AWorldTimeAndConditions_EnableWeatherSystem_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunRaysAngle
	 */
	struct AWorldTimeAndConditions_CalcSunRaysAngle_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunPhysics
	 */
	struct AWorldTimeAndConditions_CalcSunPhysics_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.CalcInteraction
	 */
	struct AWorldTimeAndConditions_CalcInteraction_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.Calc
	 */
	struct AWorldTimeAndConditions_Calc_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditions.AddTime
	 */
	struct AWorldTimeAndConditions_AddTime_Params
	{
	public:
		float                                                      hoursValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      minuteValue;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WorldTimeAndConditionsCurFactors.noticeFactors
	 */
	struct AWorldTimeAndConditionsCurFactors_noticeFactors_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      currentRainChance;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      sunPower;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetSunVisibility
	 */
	struct UWTACFactorsComponent_SetSunVisibility_Params
	{
	public:
		bool                                                       newVisibility;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetSunRaysAngle
	 */
	struct UWTACFactorsComponent_SetSunRaysAngle_Params
	{
	public:
		float                                                      newSunRays;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetSunPower
	 */
	struct UWTACFactorsComponent_SetSunPower_Params
	{
	public:
		float                                                      newPower;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitProgress
	 */
	struct UWTACFactorsComponent_SetSunOrbitProgress_Params
	{
	public:
		float                                                      deg;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitDistance
	 */
	struct UWTACFactorsComponent_SetSunOrbitDistance_Params
	{
	public:
		float                                                      newDistance;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitAngle
	 */
	struct UWTACFactorsComponent_SetSunOrbitAngle_Params
	{
	public:
		float                                                      newOrbitAngle;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetSunLumens
	 */
	struct UWTACFactorsComponent_SetSunLumens_Params
	{
	public:
		float                                                      newLumensValue;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetStarsIntensity
	 */
	struct UWTACFactorsComponent_SetStarsIntensity_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetRainValue
	 */
	struct UWTACFactorsComponent_SetRainValue_Params
	{
	public:
		float                                                      newRainValue;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetRainState
	 */
	struct UWTACFactorsComponent_SetRainState_Params
	{
	public:
		bool                                                       newState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetOrbitPhase
	 */
	struct UWTACFactorsComponent_SetOrbitPhase_Params
	{
	public:
		float                                                      shPassed;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetMoonOrbit
	 */
	struct UWTACFactorsComponent_SetMoonOrbit_Params
	{
	public:
		float                                                      newProgress;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetFogState
	 */
	struct UWTACFactorsComponent_SetFogState_Params
	{
	public:
		bool                                                       newState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetFogLevel
	 */
	struct UWTACFactorsComponent_SetFogLevel_Params
	{
	public:
		float                                                      NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetFactorFloatData
	 */
	struct UWTACFactorsComponent_SetFactorFloatData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      fVal;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetCloudsLevel
	 */
	struct UWTACFactorsComponent_SetCloudsLevel_Params
	{
	public:
		float                                                      NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetBrigthnesslevel
	 */
	struct UWTACFactorsComponent_SetBrigthnesslevel_Params
	{
	public:
		float                                                      newBrigthnessLevel;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.SetAtmosphereSunReflections
	 */
	struct UWTACFactorsComponent_SetAtmosphereSunReflections_Params
	{
	public:
		float                                                      newAtmosphereReflections;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.Reinitialize
	 */
	struct UWTACFactorsComponent_Reinitialize_Params
	{	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.noticeFactors
	 */
	struct UWTACFactorsComponent_noticeFactors_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      currentRainChance;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      currentRainDensityTarget;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      currentStormChance;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      sunPower;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.NeedsReinitialization
	 */
	struct UWTACFactorsComponent_NeedsReinitialization_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.GetSunOrbitAbsoluteDeg
	 */
	struct UWTACFactorsComponent_GetSunOrbitAbsoluteDeg_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.GetFactorFloatData
	 */
	struct UWTACFactorsComponent_GetFactorFloatData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DrugDealerSimulator.WTACFactorsComponent.CanRecover
	 */
	struct UWTACFactorsComponent_CanRecover_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
