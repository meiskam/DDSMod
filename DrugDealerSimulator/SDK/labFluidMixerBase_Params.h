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
	 * Function labFluidMixerBase.labFluidMixerBase_C.setEndMixForm
	 */
	struct AlabFluidMixerBase_C_setEndMixForm_Params
	{
	public:
		EdrugForm                                                  EndForm;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Humidity;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function labFluidMixerBase.labFluidMixerBase_C.checkMixContents
	 */
	struct AlabFluidMixerBase_C_checkMixContents_Params
	{
	public:
		bool                                                       LiquidFound;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function labFluidMixerBase.labFluidMixerBase_C.UserConstructionScript
	 */
	struct AlabFluidMixerBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function labFluidMixerBase.labFluidMixerBase_C.addSubstance
	 */
	struct AlabFluidMixerBase_C_addSubstance_Params
	{	};

	/**
	 * Function labFluidMixerBase.labFluidMixerBase_C.applyMix
	 */
	struct AlabFluidMixerBase_C_applyMix_Params
	{	};

	/**
	 * Function labFluidMixerBase.labFluidMixerBase_C.workFinished
	 */
	struct AlabFluidMixerBase_C_workFinished_Params
	{	};

	/**
	 * Function labFluidMixerBase.labFluidMixerBase_C.tryAddSubstance
	 */
	struct AlabFluidMixerBase_C_tryAddSubstance_Params
	{	};

	/**
	 * Function labFluidMixerBase.labFluidMixerBase_C.ExecuteUbergraph_labFluidMixerBase
	 */
	struct AlabFluidMixerBase_C_ExecuteUbergraph_labFluidMixerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
