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
	 * Function NewLightBase.NewLightBase_C.HasPower
	 */
	struct ANewLightBase_C_HasPower_Params
	{
	public:
		bool                                                       Power;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NewLightBase.NewLightBase_C.UserConstructionScript
	 */
	struct ANewLightBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function NewLightBase.NewLightBase_C.LongRadiusChanged
	 */
	struct ANewLightBase_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NewLightBase.NewLightBase_C.ReceiveBeginPlay
	 */
	struct ANewLightBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NewLightBase.NewLightBase_C.LightStateChanged
	 */
	struct ANewLightBase_C_LightStateChanged_Params
	{
	public:
		bool                                                       LightVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CastShadows;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NewLightBase.NewLightBase_C.ShortRadiusChanged
	 */
	struct ANewLightBase_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NewLightBase.NewLightBase_C.UpdateDaytimeCon
	 */
	struct ANewLightBase_C_UpdateDaytimeCon_Params
	{
	public:
		class AdayTimeControler_C*                                 dayTimeCon;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NewLightBase.NewLightBase_C.Switch
	 */
	struct ANewLightBase_C_Switch_Params
	{
	public:
		bool                                                       TurnedOn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NewLightBase.NewLightBase_C.RefreshLantern
	 */
	struct ANewLightBase_C_RefreshLantern_Params
	{	};

	/**
	 * Function NewLightBase.NewLightBase_C.PowerChange
	 */
	struct ANewLightBase_C_PowerChange_Params
	{	};

	/**
	 * Function NewLightBase.NewLightBase_C.updatePlayerDistance
	 */
	struct ANewLightBase_C_updatePlayerDistance_Params
	{	};

	/**
	 * Function NewLightBase.NewLightBase_C.openOutLightRange
	 */
	struct ANewLightBase_C_openOutLightRange_Params
	{	};

	/**
	 * Function NewLightBase.NewLightBase_C.ExecuteUbergraph_NewLightBase
	 */
	struct ANewLightBase_C_ExecuteUbergraph_NewLightBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
