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
	 * Function BP_TDE_Alkaloid.BP_TDE_Alkaloid_C.UserConstructionScript
	 */
	struct ABP_TDE_Alkaloid_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TDE_Alkaloid.BP_TDE_Alkaloid_C.StartEffect
	 */
	struct ABP_TDE_Alkaloid_C_StartEffect_Params
	{	};

	/**
	 * Function BP_TDE_Alkaloid.BP_TDE_Alkaloid_C.EffectTick
	 */
	struct ABP_TDE_Alkaloid_C_EffectTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TDE_Alkaloid.BP_TDE_Alkaloid_C.EndEffect
	 */
	struct ABP_TDE_Alkaloid_C_EndEffect_Params
	{	};

	/**
	 * Function BP_TDE_Alkaloid.BP_TDE_Alkaloid_C.ExecuteUbergraph_BP_TDE_Alkaloid
	 */
	struct ABP_TDE_Alkaloid_C_ExecuteUbergraph_BP_TDE_Alkaloid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
