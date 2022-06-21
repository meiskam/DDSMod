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
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.RamaExpand
	 */
	struct AworkStationEquipmentBase_C_RamaExpand_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.GetHeldSubstanceID
	 */
	struct AworkStationEquipmentBase_C_GetHeldSubstanceID_Params
	{
	public:
		bool                                                       FinalProduct;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                OutSubstanceID;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.HandleRama
	 */
	struct AworkStationEquipmentBase_C_HandleRama_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.packagePopup
	 */
	struct AworkStationEquipmentBase_C_packagePopup_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.packageProduct
	 */
	struct AworkStationEquipmentBase_C_packageProduct_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.rightClickOptions
	 */
	struct AworkStationEquipmentBase_C_rightClickOptions_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.tryAddSubstance
	 */
	struct AworkStationEquipmentBase_C_tryAddSubstance_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.verifySubstanceSource
	 */
	struct AworkStationEquipmentBase_C_verifySubstanceSource_Params
	{
	public:
		bool                                                       Proceed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NameDiffers;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FdrugData                                           SourceData;                                              // 0x0000(0x00B0)  (Parm, OutParm, HasGetValueTypeHash)
		struct FMixProportionsStruct                               SourceMixProportions;                                    // 0x0000(0x0040)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.compareContent
	 */
	struct AworkStationEquipmentBase_C_compareContent_Params
	{
	public:
		struct FdrugData                                           NewData;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FMixProportionsStruct                               MixProportions;                                          // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       TheSame;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NameMissmatch;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.clearEquipment
	 */
	struct AworkStationEquipmentBase_C_clearEquipment_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.quantityChanged
	 */
	struct AworkStationEquipmentBase_C_quantityChanged_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.addSubstancePopup
	 */
	struct AworkStationEquipmentBase_C_addSubstancePopup_Params
	{
	public:
		class AinteractiveBaseObject_C*                            substanceRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.workFinished
	 */
	struct AworkStationEquipmentBase_C_workFinished_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.workCountdown
	 */
	struct AworkStationEquipmentBase_C_workCountdown_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.startWorking
	 */
	struct AworkStationEquipmentBase_C_startWorking_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.defaultHoldAction
	 */
	struct AworkStationEquipmentBase_C_defaultHoldAction_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.storeEquipment
	 */
	struct AworkStationEquipmentBase_C_storeEquipment_Params
	{
	public:
		bool                                                       SkipRender;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.rearangeEquipment
	 */
	struct AworkStationEquipmentBase_C_rearangeEquipment_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivateReleaseButton
	 */
	struct AworkStationEquipmentBase_C_equipmentActivateReleaseButton_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.subclassActivate
	 */
	struct AworkStationEquipmentBase_C_subclassActivate_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivation
	 */
	struct AworkStationEquipmentBase_C_equipmentActivation_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.calcLineTracePoints
	 */
	struct AworkStationEquipmentBase_C_calcLineTracePoints_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.checkCanFit
	 */
	struct AworkStationEquipmentBase_C_checkCanFit_Params
	{
	public:
		bool                                                       canFit;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.UserConstructionScript
	 */
	struct AworkStationEquipmentBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveBeginPlay
	 */
	struct AworkStationEquipmentBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveTick
	 */
	struct AworkStationEquipmentBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.initialSetup
	 */
	struct AworkStationEquipmentBase_C_initialSetup_Params
	{
	public:
		struct FappartmentEquipment                                Data;                                                    // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       Gizmo;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       fromHovered;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.verifyCorrectNaming
	 */
	struct AworkStationEquipmentBase_C_verifyCorrectNaming_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.selectMe
	 */
	struct AworkStationEquipmentBase_C_selectMe_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.dumpContent
	 */
	struct AworkStationEquipmentBase_C_dumpContent_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AworkStationEquipmentBase_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.SubclassRamaLoad
	 */
	struct AworkStationEquipmentBase_C_SubclassRamaLoad_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.GizmoSet
	 */
	struct AworkStationEquipmentBase_C_GizmoSet_Params
	{	};

	/**
	 * Function workStationEquipmentBase.workStationEquipmentBase_C.ExecuteUbergraph_workStationEquipmentBase
	 */
	struct AworkStationEquipmentBase_C_ExecuteUbergraph_workStationEquipmentBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
