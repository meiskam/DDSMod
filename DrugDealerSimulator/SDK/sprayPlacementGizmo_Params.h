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
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.updateSprayLook
	 */
	struct AsprayPlacementGizmo_C_updateSprayLook_Params
	{	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.useSprayFromCan
	 */
	struct AsprayPlacementGizmo_C_useSprayFromCan_Params
	{	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkPlacementConditions
	 */
	struct AsprayPlacementGizmo_C_checkPlacementConditions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                                       AreaUnlocked;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       showGizmo;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.checkSurroundings
	 */
	struct AsprayPlacementGizmo_C_checkSurroundings_Params
	{	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.countdownHold
	 */
	struct AsprayPlacementGizmo_C_countdownHold_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.UserConstructionScript
	 */
	struct AsprayPlacementGizmo_C_UserConstructionScript_Params
	{	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveBeginPlay
	 */
	struct AsprayPlacementGizmo_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.ReceiveTick
	 */
	struct AsprayPlacementGizmo_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.ActionPress
	 */
	struct AsprayPlacementGizmo_C_ActionPress_Params
	{	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.actionRelease
	 */
	struct AsprayPlacementGizmo_C_actionRelease_Params
	{	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.PutSpraySymbol
	 */
	struct AsprayPlacementGizmo_C_PutSpraySymbol_Params
	{	};

	/**
	 * Function sprayPlacementGizmo.sprayPlacementGizmo_C.ExecuteUbergraph_sprayPlacementGizmo
	 */
	struct AsprayPlacementGizmo_C_ExecuteUbergraph_sprayPlacementGizmo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
