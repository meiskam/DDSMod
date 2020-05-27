#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function inventoryScreen.inventoryScreen_C.updateFactorRanks
struct UinventoryScreen_C_updateFactorRanks_Params
{
};

// Function inventoryScreen.inventoryScreen_C.refreshQuickUse
struct UinventoryScreen_C_refreshQuickUse_Params
{
};

// Function inventoryScreen.inventoryScreen_C.inventoryError
struct UinventoryScreen_C_inventoryError_Params
{
	struct FText                                       ErrorText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function inventoryScreen.inventoryScreen_C.refreshSkills
struct UinventoryScreen_C_refreshSkills_Params
{
};

// Function inventoryScreen.inventoryScreen_C.countTotalDrugGrams
struct UinventoryScreen_C_countTotalDrugGrams_Params
{
	int                                                OutGrams;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.checkSubstanceSame
struct UinventoryScreen_C_checkSubstanceSame_Params
{
	TArray<struct FinventoryItemStruct>                Substances;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Quantities;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               TheSame;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FdrugData                                   dataAverage;                                              // (Parm, OutParm)
};

// Function inventoryScreen.inventoryScreen_C.renderQuestList
struct UinventoryScreen_C_renderQuestList_Params
{
};

// Function inventoryScreen.inventoryScreen_C.acceptBoughtItems
struct UinventoryScreen_C_acceptBoughtItems_Params
{
};

// Function inventoryScreen.inventoryScreen_C.countBoughtItemValue
struct UinventoryScreen_C_countBoughtItemValue_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.calcDistribution
struct UinventoryScreen_C_calcDistribution_Params
{
	float                                              AmountDistribution;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TextOut;                                                  // (Parm, OutParm)
};

// Function inventoryScreen.inventoryScreen_C.updateStatistics
struct UinventoryScreen_C_updateStatistics_Params
{
};

// Function inventoryScreen.inventoryScreen_C.Get_txtExpositionHeading_ToolTipWidget_1
struct UinventoryScreen_C_Get_txtExpositionHeading_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.GetToolTipWidget_1
struct UinventoryScreen_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.renderTasklist
struct UinventoryScreen_C_renderTasklist_Params
{
};

// Function inventoryScreen.inventoryScreen_C.countTotalSelledDrugsMoney
struct UinventoryScreen_C_countTotalSelledDrugsMoney_Params
{
	bool                                               playerCanFitMoney;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.checkSelledDrugs
struct UinventoryScreen_C_checkSelledDrugs_Params
{
	bool                                               CheckedPositive;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FdrugData                                   endDrugAverage;                                           // (Parm, OutParm)
};

// Function inventoryScreen.inventoryScreen_C.renderBuyerNeeded
struct UinventoryScreen_C_renderBuyerNeeded_Params
{
};

// Function inventoryScreen.inventoryScreen_C.checkItemsFitPockets
struct UinventoryScreen_C_checkItemsFitPockets_Params
{
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoFit;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.countTradeItemSizing
struct UinventoryScreen_C_countTradeItemSizing_Params
{
	float                                              TotalSize;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TotalWieght;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.countItemValue
struct UinventoryScreen_C_countItemValue_Params
{
	int                                                totalValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.clearTradeItems
struct UinventoryScreen_C_clearTradeItems_Params
{
};

// Function inventoryScreen.inventoryScreen_C.renderShopItems
struct UinventoryScreen_C_renderShopItems_Params
{
	class AbaseNPC_C*                                  sellerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.renderContainer
struct UinventoryScreen_C_renderContainer_Params
{
	TArray<struct FinventoryItemStruct>                containerItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AcontainerBase_C*                            container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.prepareInventoryMode
struct UinventoryScreen_C_prepareInventoryMode_Params
{
	class AcontainerBase_C*                            ContainerRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AbaseNPC_C*                                  sellerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AplayerCharacterBP_C*                        playerRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.renderPockets
struct UinventoryScreen_C_renderPockets_Params
{
	TArray<struct FinventoryItemStruct>                pocketItems;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AplayerCharacterBP_C*                        Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.renderBackpack
struct UinventoryScreen_C_renderBackpack_Params
{
	TArray<struct FinventoryItemStruct>                backpackItems;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function inventoryScreen.inventoryScreen_C.PreConstruct
struct UinventoryScreen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.Construct
struct UinventoryScreen_C_Construct_Params
{
};

// Function inventoryScreen.inventoryScreen_C.Tick
struct UinventoryScreen_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventoryScreen.inventoryScreen_C.BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UinventoryScreen_C_BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function inventoryScreen.inventoryScreen_C.BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UinventoryScreen_C_BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function inventoryScreen.inventoryScreen_C.BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UinventoryScreen_C_BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function inventoryScreen.inventoryScreen_C.BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UinventoryScreen_C_BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function inventoryScreen.inventoryScreen_C.BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UinventoryScreen_C_BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function inventoryScreen.inventoryScreen_C.BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UinventoryScreen_C_BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function inventoryScreen.inventoryScreen_C.resetTabs
struct UinventoryScreen_C_resetTabs_Params
{
};

// Function inventoryScreen.inventoryScreen_C.NextTab
struct UinventoryScreen_C_NextTab_Params
{
};

// Function inventoryScreen.inventoryScreen_C.PreviousTab
struct UinventoryScreen_C_PreviousTab_Params
{
};

// Function inventoryScreen.inventoryScreen_C.Destruct
struct UinventoryScreen_C_Destruct_Params
{
};

// Function inventoryScreen.inventoryScreen_C.BreakTrade
struct UinventoryScreen_C_BreakTrade_Params
{
};

// Function inventoryScreen.inventoryScreen_C.ExecuteUbergraph_inventoryScreen
struct UinventoryScreen_C_ExecuteUbergraph_inventoryScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
