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
	 * Function pauseMenu.pauseMenu_C.showConfirm
	 */
	struct UpauseMenu_C_showConfirm_Params
	{
	public:
		class FText                                                Header;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Desc;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    ConfirmActionIndex;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function pauseMenu.pauseMenu_C.terminateMe
	 */
	struct UpauseMenu_C_terminateMe_Params
	{
	public:
		bool                                                       canUnpause;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function pauseMenu.pauseMenu_C.Construct
	 */
	struct UpauseMenu_C_Construct_Params
	{	};

	/**
	 * Function pauseMenu.pauseMenu_C.BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpauseMenu_C_BndEvt__btnResume_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function pauseMenu.pauseMenu_C.BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpauseMenu_C_BndEvt__btnMainMenu_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function pauseMenu.pauseMenu_C.BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpauseMenu_C_BndEvt__btnExit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function pauseMenu.pauseMenu_C.BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpauseMenu_C_BndEvt__btnSettings_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function pauseMenu.pauseMenu_C.BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpauseMenu_C_BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function pauseMenu.pauseMenu_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpauseMenu_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function pauseMenu.pauseMenu_C.BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpauseMenu_C_BndEvt__btnConfirm_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function pauseMenu.pauseMenu_C.ExecuteUbergraph_pauseMenu
	 */
	struct UpauseMenu_C_ExecuteUbergraph_pauseMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
