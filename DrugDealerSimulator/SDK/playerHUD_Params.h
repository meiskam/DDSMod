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
	 * Function playerHUD.playerHUD_C.UpdateHP
	 */
	struct UplayerHUD_C_UpdateHP_Params
	{
	public:
		float                                                      HpLevel;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerHUD.playerHUD_C.Get_txtActionBtn_ColorAndOpacity_1
	 */
	struct UplayerHUD_C_Get_txtActionBtn_ColorAndOpacity_1_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function playerHUD.playerHUD_C.updateDebugPanel
	 */
	struct UplayerHUD_C_updateDebugPanel_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.renderAwaitingOrders
	 */
	struct UplayerHUD_C_renderAwaitingOrders_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.refreshCompass
	 */
	struct UplayerHUD_C_refreshCompass_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.updateCompass
	 */
	struct UplayerHUD_C_updateCompass_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.Construct
	 */
	struct UplayerHUD_C_Construct_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.Tick
	 */
	struct UplayerHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerHUD.playerHUD_C.showAction
	 */
	struct UplayerHUD_C_showAction_Params
	{
	public:
		class FText                                                KeyName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ActionName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ObjectName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function playerHUD.playerHUD_C.hideAction
	 */
	struct UplayerHUD_C_hideAction_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.toggleSterowanie
	 */
	struct UplayerHUD_C_toggleSterowanie_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.displayQuickMessage
	 */
	struct UplayerHUD_C_displayQuickMessage_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function playerHUD.playerHUD_C.unlockQuickMessage
	 */
	struct UplayerHUD_C_unlockQuickMessage_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.updateTest
	 */
	struct UplayerHUD_C_updateTest_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.updateMiniTaskList
	 */
	struct UplayerHUD_C_updateMiniTaskList_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.checkShowTaskList
	 */
	struct UplayerHUD_C_checkShowTaskList_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.breakListRender
	 */
	struct UplayerHUD_C_breakListRender_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.updateWeedPanel
	 */
	struct UplayerHUD_C_updateWeedPanel_Params
	{
	public:
		class ArentAppartmentArea_C*                               HideoutRef;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InAppartment;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerHUD.playerHUD_C.refreshActiveColor
	 */
	struct UplayerHUD_C_refreshActiveColor_Params
	{	};

	/**
	 * Function playerHUD.playerHUD_C.ExecuteUbergraph_playerHUD
	 */
	struct UplayerHUD_C_ExecuteUbergraph_playerHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
