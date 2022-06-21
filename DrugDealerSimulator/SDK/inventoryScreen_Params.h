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
	 * Function inventoryScreen.inventoryScreen_C.Get_btnAcceptTrade_bIsEnabled_1
	 */
	struct UinventoryScreen_C_Get_btnAcceptTrade_bIsEnabled_1_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.RefreshInventory
	 */
	struct UinventoryScreen_C_RefreshInventory_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.resetUseContent
	 */
	struct UinventoryScreen_C_resetUseContent_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.3dcharacterToggle
	 */
	struct UinventoryScreen_C__3dcharacterToggle_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.updateFactorRanks
	 */
	struct UinventoryScreen_C_updateFactorRanks_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.refreshQuickUse
	 */
	struct UinventoryScreen_C_refreshQuickUse_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.inventoryError
	 */
	struct UinventoryScreen_C_inventoryError_Params
	{
	public:
		class FText                                                ErrorText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.refreshSkills
	 */
	struct UinventoryScreen_C_refreshSkills_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.countTotalDrugGrams
	 */
	struct UinventoryScreen_C_countTotalDrugGrams_Params
	{
	public:
		int32_t                                                    OutGrams;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.checkSubstanceSame
	 */
	struct UinventoryScreen_C_checkSubstanceSame_Params
	{
	public:
		TArray<struct FMixProportionsStruct>                       Mixes;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            Quantities;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       TheSame;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FdrugData                                           dataAverage;                                             // 0x0000(0x00B0)  (Parm, OutParm, HasGetValueTypeHash)
		struct FMixProportionsStruct                               MixAverage;                                              // 0x0000(0x0040)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.renderQuestList
	 */
	struct UinventoryScreen_C_renderQuestList_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.acceptBoughtItems
	 */
	struct UinventoryScreen_C_acceptBoughtItems_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.countBoughtItemValue
	 */
	struct UinventoryScreen_C_countBoughtItemValue_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.calcDistribution
	 */
	struct UinventoryScreen_C_calcDistribution_Params
	{
	public:
		float                                                      AmountDistribution;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                TextOut;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.updateStatistics
	 */
	struct UinventoryScreen_C_updateStatistics_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.Get_txtExpositionHeading_ToolTipWidget_1
	 */
	struct UinventoryScreen_C_Get_txtExpositionHeading_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.GetToolTipWidget_1
	 */
	struct UinventoryScreen_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.renderTasklist
	 */
	struct UinventoryScreen_C_renderTasklist_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.countTotalSelledDrugsMoney
	 */
	struct UinventoryScreen_C_countTotalSelledDrugsMoney_Params
	{
	public:
		bool                                                       playerCanFitMoney;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.checkSelledDrugs
	 */
	struct UinventoryScreen_C_checkSelledDrugs_Params
	{
	public:
		bool                                                       CheckedPositive;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FdrugData                                           endDrugAverage;                                          // 0x0000(0x00B0)  (Parm, OutParm, HasGetValueTypeHash)
		struct FMixProportionsStruct                               OutMixAverage;                                           // 0x0000(0x0040)  (Parm, OutParm, HasGetValueTypeHash)
		class FText                                                OutMixName;                                              // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.renderBuyerNeeded
	 */
	struct UinventoryScreen_C_renderBuyerNeeded_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.checkItemsFitPockets
	 */
	struct UinventoryScreen_C_checkItemsFitPockets_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoFit;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.countTradeItemSizing
	 */
	struct UinventoryScreen_C_countTradeItemSizing_Params
	{
	public:
		float                                                      TotalSize;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalWieght;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.countItemValue
	 */
	struct UinventoryScreen_C_countItemValue_Params
	{
	public:
		int32_t                                                    TotalValue;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.clearTradeItems
	 */
	struct UinventoryScreen_C_clearTradeItems_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.renderShopItems
	 */
	struct UinventoryScreen_C_renderShopItems_Params
	{
	public:
		class AbaseNPC_C*                                          sellerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.renderContainer
	 */
	struct UinventoryScreen_C_renderContainer_Params
	{
	public:
		class AcontainerBase_C*                                    container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.prepareInventoryMode
	 */
	struct UinventoryScreen_C_prepareInventoryMode_Params
	{
	public:
		class AcontainerBase_C*                                    ContainerRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AbaseNPC_C*                                          sellerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.renderPockets
	 */
	struct UinventoryScreen_C_renderPockets_Params
	{
	public:
		class AplayerCharacterBP_C*                                Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.renderBackpack
	 */
	struct UinventoryScreen_C_renderBackpack_Params
	{
	public:
		class UInventoryComponent_C*                               InvComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.PreConstruct
	 */
	struct UinventoryScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.Construct
	 */
	struct UinventoryScreen_C_Construct_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.Tick
	 */
	struct UinventoryScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UinventoryScreen_C_BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UinventoryScreen_C_BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UinventoryScreen_C_BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UinventoryScreen_C_BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UinventoryScreen_C_BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UinventoryScreen_C_BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.resetTabs
	 */
	struct UinventoryScreen_C_resetTabs_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.NextTab
	 */
	struct UinventoryScreen_C_NextTab_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.PreviousTab
	 */
	struct UinventoryScreen_C_PreviousTab_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.Destruct
	 */
	struct UinventoryScreen_C_Destruct_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.BreakTrade
	 */
	struct UinventoryScreen_C_BreakTrade_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.randomWobble
	 */
	struct UinventoryScreen_C_randomWobble_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.refreshActiveColor
	 */
	struct UinventoryScreen_C_refreshActiveColor_Params
	{	};

	/**
	 * Function inventoryScreen.inventoryScreen_C.ExecuteUbergraph_inventoryScreen
	 */
	struct UinventoryScreen_C_ExecuteUbergraph_inventoryScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
