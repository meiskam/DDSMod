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
	 * Function workStationUI.workStationUI_C.Get_tabWorkStation_ColorAndOpacity_1
	 */
	struct UworkStationUI_C_Get_tabWorkStation_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function workStationUI.workStationUI_C.getSubstanceName
	 */
	struct UworkStationUI_C_getSubstanceName_Params
	{
	public:
		class AworkStationEquipmentBase_C*                         Eq;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function workStationUI.workStationUI_C.calcPrecisionText
	 */
	struct UworkStationUI_C_calcPrecisionText_Params
	{
	public:
		class AworkStationEquipmentBase_C*                         EquipmentRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationUI.workStationUI_C.scrollEqUp
	 */
	struct UworkStationUI_C_scrollEqUp_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.scrollEqDown
	 */
	struct UworkStationUI_C_scrollEqDown_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.renderEquipment
	 */
	struct UworkStationUI_C_renderEquipment_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.scrollDrugsUp
	 */
	struct UworkStationUI_C_scrollDrugsUp_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.scrollDrugsDown
	 */
	struct UworkStationUI_C_scrollDrugsDown_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.renderInventoryDrugs
	 */
	struct UworkStationUI_C_renderInventoryDrugs_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.PreConstruct
	 */
	struct UworkStationUI_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function workStationUI.workStationUI_C.Construct
	 */
	struct UworkStationUI_C_Construct_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.Tick
	 */
	struct UworkStationUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationUI.workStationUI_C.reinitialise
	 */
	struct UworkStationUI_C_reinitialise_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.popRing
	 */
	struct UworkStationUI_C_popRing_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.ManualToggle
	 */
	struct UworkStationUI_C_ManualToggle_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.BndEvt__btnCloseManual_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UworkStationUI_C_BndEvt__btnCloseManual_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.BndEvt__btnManEquipment_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UworkStationUI_C_BndEvt__btnManEquipment_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.BndEvt__btnManModes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UworkStationUI_C_BndEvt__btnManModes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.BndEvt__btnManFunctions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UworkStationUI_C_BndEvt__btnManFunctions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.BndEvt__btnManChemistry_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UworkStationUI_C_BndEvt__btnManChemistry_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.verifyWS_Instance
	 */
	struct UworkStationUI_C_verifyWS_Instance_Params
	{	};

	/**
	 * Function workStationUI.workStationUI_C.ExecuteUbergraph_workStationUI
	 */
	struct UworkStationUI_C_ExecuteUbergraph_workStationUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
