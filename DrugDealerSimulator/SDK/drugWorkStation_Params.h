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
	 * Function drugWorkStation.drugWorkStation_C.respawnWorkStation
	 */
	struct AdrugWorkStation_C_respawnWorkStation_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.checkHasEquipment
	 */
	struct AdrugWorkStation_C_checkHasEquipment_Params
	{
	public:
		bool                                                       hasEquipment;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.displayInteractionError
	 */
	struct AdrugWorkStation_C_displayInteractionError_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.eqGizmoUpdate
	 */
	struct AdrugWorkStation_C_eqGizmoUpdate_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.setEqPlacementGizmo
	 */
	struct AdrugWorkStation_C_setEqPlacementGizmo_Params
	{
	public:
		bool                                                       FromHoveredObject;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AworkStationEquipmentBase_C*                         HoveredEq;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.setDrugPlacementGizmo
	 */
	struct AdrugWorkStation_C_setDrugPlacementGizmo_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.packageGizmoUpdate
	 */
	struct AdrugWorkStation_C_packageGizmoUpdate_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.switchNextMode
	 */
	struct AdrugWorkStation_C_switchNextMode_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.UserConstructionScript
	 */
	struct AdrugWorkStation_C_UserConstructionScript_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.TabHeldDown
	 */
	struct AdrugWorkStation_C_TabHeldDown_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.TabReleased
	 */
	struct AdrugWorkStation_C_TabReleased_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.ShiftHeldDown
	 */
	struct AdrugWorkStation_C_ShiftHeldDown_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.ShiftReleased
	 */
	struct AdrugWorkStation_C_ShiftReleased_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.placeCurObject
	 */
	struct AdrugWorkStation_C_placeCurObject_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.LeaveWorkStation
	 */
	struct AdrugWorkStation_C_LeaveWorkStation_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.ActivateWorkStation
	 */
	struct AdrugWorkStation_C_ActivateWorkStation_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.scrollOneUp
	 */
	struct AdrugWorkStation_C_scrollOneUp_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.scrollOneDown
	 */
	struct AdrugWorkStation_C_scrollOneDown_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.ReceiveTick
	 */
	struct AdrugWorkStation_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.rotateGizmo
	 */
	struct AdrugWorkStation_C_rotateGizmo_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.ReceiveBeginPlay
	 */
	struct AdrugWorkStation_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.updateWorkStationObjects
	 */
	struct AdrugWorkStation_C_updateWorkStationObjects_Params
	{
	public:
		bool                                                       Placed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function drugWorkStation.drugWorkStation_C.ExecuteUbergraph_drugWorkStation
	 */
	struct AdrugWorkStation_C_ExecuteUbergraph_drugWorkStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
