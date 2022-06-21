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
	 * Function saveLoadWidget.saveLoadWidget_C.beforeLoadCleanup
	 */
	struct UsaveLoadWidget_C_beforeLoadCleanup_Params
	{	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.getStringDateTime
	 */
	struct UsaveLoadWidget_C_getStringDateTime_Params
	{
	public:
		class FString                                              DateTime;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.Construct
	 */
	struct UsaveLoadWidget_C_Construct_Params
	{	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.SlotClicked
	 */
	struct UsaveLoadWidget_C_SlotClicked_Params
	{
	public:
		int32_t                                                    SlotID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.Setup
	 */
	struct UsaveLoadWidget_C_Setup_Params
	{
	public:
		bool                                                       SaveGame;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       mainMenu;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AsaveStation_C*                                      saveStationRef;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsaveLoadWidget_C_BndEvt__btnConfirmOK_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsaveLoadWidget_C_BndEvt__btnConfirmCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsaveLoadWidget_C_BndEvt__btnClose_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.Destruct
	 */
	struct UsaveLoadWidget_C_Destruct_Params
	{	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.BndEvt__btnAddSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsaveLoadWidget_C_BndEvt__btnAddSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.RefreshList
	 */
	struct UsaveLoadWidget_C_RefreshList_Params
	{	};

	/**
	 * Function saveLoadWidget.saveLoadWidget_C.ExecuteUbergraph_saveLoadWidget
	 */
	struct UsaveLoadWidget_C_ExecuteUbergraph_saveLoadWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
