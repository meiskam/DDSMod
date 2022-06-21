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
	 * Function BP_TDE_THC.BP_TDE_THC_C.UserConstructionScript
	 */
	struct ABP_TDE_THC_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TDE_THC.BP_TDE_THC_C.EndEffect
	 */
	struct ABP_TDE_THC_C_EndEffect_Params
	{	};

	/**
	 * Function BP_TDE_THC.BP_TDE_THC_C.EffectTick
	 */
	struct ABP_TDE_THC_C_EffectTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TDE_THC.BP_TDE_THC_C.StartEffect
	 */
	struct ABP_TDE_THC_C_StartEffect_Params
	{	};

	/**
	 * Function BP_TDE_THC.BP_TDE_THC_C.ExecuteUbergraph_BP_TDE_THC
	 */
	struct ABP_TDE_THC_C_ExecuteUbergraph_BP_TDE_THC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
