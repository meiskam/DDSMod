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
	 * Function workStationMixerBase.workStationMixerBase_C.ExpandMixerRama
	 */
	struct AworkStationMixerBase_C_ExpandMixerRama_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.calcByStrengthening
	 */
	struct AworkStationMixerBase_C_calcByStrengthening_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      differenceMultiplier;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Strengthening;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.calcPrecision
	 */
	struct AworkStationMixerBase_C_calcPrecision_Params
	{
	public:
		float                                                      paramIn;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      paramOut;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.processMix
	 */
	struct AworkStationMixerBase_C_processMix_Params
	{
	public:
		struct FdrugData                                           mixProduct;                                              // 0x0000(0x00B0)  (Parm, OutParm, HasGetValueTypeHash)
		float                                                      mixProductAmount;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMixProportionsStruct                               OutMixProportions;                                       // 0x0000(0x0040)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.showAddPopup
	 */
	struct AworkStationMixerBase_C_showAddPopup_Params
	{
	public:
		class AinteractiveBaseObject_C*                            substanceRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.UserConstructionScript
	 */
	struct AworkStationMixerBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.applyMix
	 */
	struct AworkStationMixerBase_C_applyMix_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.workFinished
	 */
	struct AworkStationMixerBase_C_workFinished_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.addSubstance
	 */
	struct AworkStationMixerBase_C_addSubstance_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.displayMixDetails
	 */
	struct AworkStationMixerBase_C_displayMixDetails_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.ReceiveBeginPlay
	 */
	struct AworkStationMixerBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.displayApllyMix
	 */
	struct AworkStationMixerBase_C_displayApllyMix_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.tryAddSubstance
	 */
	struct AworkStationMixerBase_C_tryAddSubstance_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.SubclassRamaLoad
	 */
	struct AworkStationMixerBase_C_SubclassRamaLoad_Params
	{	};

	/**
	 * Function workStationMixerBase.workStationMixerBase_C.ExecuteUbergraph_workStationMixerBase
	 */
	struct AworkStationMixerBase_C_ExecuteUbergraph_workStationMixerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
