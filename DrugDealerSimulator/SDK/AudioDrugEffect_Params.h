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
	 * Function AudioDrugEffect.AudioDrugEffect_C.UserConstructionScript
	 */
	struct AAudioDrugEffect_C_UserConstructionScript_Params
	{	};

	/**
	 * Function AudioDrugEffect.AudioDrugEffect_C.ReceiveBeginPlay
	 */
	struct AAudioDrugEffect_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AudioDrugEffect.AudioDrugEffect_C.EffectTick
	 */
	struct AAudioDrugEffect_C_EffectTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AudioDrugEffect.AudioDrugEffect_C.StartEffect
	 */
	struct AAudioDrugEffect_C_StartEffect_Params
	{	};

	/**
	 * Function AudioDrugEffect.AudioDrugEffect_C.updateBinauralState
	 */
	struct AAudioDrugEffect_C_updateBinauralState_Params
	{	};

	/**
	 * Function AudioDrugEffect.AudioDrugEffect_C.ExecuteUbergraph_AudioDrugEffect
	 */
	struct AAudioDrugEffect_C_ExecuteUbergraph_AudioDrugEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
