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
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.getSubstanceName
	 */
	struct UworkStationSubstanceAddWidget_C_getSubstanceName_Params
	{
	public:
		class FText                                                OutName;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.setPackageIcon
	 */
	struct UworkStationSubstanceAddWidget_C_setPackageIcon_Params
	{
	public:
		EdrugForm                                                  Form;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quan;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          Original;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EitemCategories                                            Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          OutIcon;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.addToEquipment
	 */
	struct UworkStationSubstanceAddWidget_C_addToEquipment_Params
	{
	public:
		bool                                                       DontChangeInput;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Construct
	 */
	struct UworkStationSubstanceAddWidget_C_Construct_Params
	{	};

	/**
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Setup
	 */
	struct UworkStationSubstanceAddWidget_C_Setup_Params
	{
	public:
		class AinteractiveBaseObject_C*                            SelectedSubstance;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AworkStationEquipmentBase_C*                         Equipment;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UworkStationSubstanceAddWidget_C_BndEvt__btnAdd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UworkStationSubstanceAddWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.killWidget
	 */
	struct UworkStationSubstanceAddWidget_C_killWidget_Params
	{
	public:
		bool                                                       DontChangeInput;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.Tick
	 */
	struct UworkStationSubstanceAddWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function workStationSubstanceAddWidget.workStationSubstanceAddWidget_C.ExecuteUbergraph_workStationSubstanceAddWidget
	 */
	struct UworkStationSubstanceAddWidget_C_ExecuteUbergraph_workStationSubstanceAddWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
