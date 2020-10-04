
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function inventoryScreen.inventoryScreen_C.updateFactorRanks
// (Public, BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::updateFactorRanks()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.updateFactorRanks");

	UinventoryScreen_C_updateFactorRanks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.refreshQuickUse
// (Public, BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::refreshQuickUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.refreshQuickUse");

	UinventoryScreen_C_refreshQuickUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.inventoryError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ErrorText                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UinventoryScreen_C::inventoryError(const struct FText& ErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.inventoryError");

	UinventoryScreen_C_inventoryError_Params params;
	params.ErrorText = ErrorText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.refreshSkills
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::refreshSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.refreshSkills");

	UinventoryScreen_C_refreshSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.countTotalDrugGrams
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            OutGrams                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::countTotalDrugGrams(int* OutGrams)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countTotalDrugGrams");

	UinventoryScreen_C_countTotalDrugGrams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGrams != nullptr)
		*OutGrams = params.OutGrams;
}


// Function inventoryScreen.inventoryScreen_C.checkSubstanceSame
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FinventoryItemStruct> Substances                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    quantities                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           TheSame                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FdrugData               dataAverage                    (Parm, OutParm)

void UinventoryScreen_C::checkSubstanceSame(TArray<struct FinventoryItemStruct>* Substances, TArray<int>* quantities, bool* TheSame, struct FdrugData* dataAverage)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.checkSubstanceSame");

	UinventoryScreen_C_checkSubstanceSame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Substances != nullptr)
		*Substances = params.Substances;
	if (quantities != nullptr)
		*quantities = params.quantities;
	if (TheSame != nullptr)
		*TheSame = params.TheSame;
	if (dataAverage != nullptr)
		*dataAverage = params.dataAverage;
}


// Function inventoryScreen.inventoryScreen_C.renderQuestList
// (Public, BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::renderQuestList()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderQuestList");

	UinventoryScreen_C_renderQuestList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.acceptBoughtItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::acceptBoughtItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.acceptBoughtItems");

	UinventoryScreen_C_acceptBoughtItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.countBoughtItemValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::countBoughtItemValue(class AplayerCharacterBP_C* playerRef, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countBoughtItemValue");

	UinventoryScreen_C_countBoughtItemValue_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function inventoryScreen.inventoryScreen_C.calcDistribution
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          AmountDistribution             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TextOut                        (Parm, OutParm)

void UinventoryScreen_C::calcDistribution(float AmountDistribution, struct FText* TextOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.calcDistribution");

	UinventoryScreen_C_calcDistribution_Params params;
	params.AmountDistribution = AmountDistribution;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextOut != nullptr)
		*TextOut = params.TextOut;
}


// Function inventoryScreen.inventoryScreen_C.updateStatistics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::updateStatistics()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.updateStatistics");

	UinventoryScreen_C_updateStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.Get_txtExpositionHeading_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UinventoryScreen_C::Get_txtExpositionHeading_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.Get_txtExpositionHeading_ToolTipWidget_1");

	UinventoryScreen_C_Get_txtExpositionHeading_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryScreen.inventoryScreen_C.GetToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UinventoryScreen_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.GetToolTipWidget_1");

	UinventoryScreen_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventoryScreen.inventoryScreen_C.renderTasklist
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::renderTasklist()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderTasklist");

	UinventoryScreen_C_renderTasklist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.countTotalSelledDrugsMoney
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           playerCanFitMoney              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::countTotalSelledDrugsMoney(bool* playerCanFitMoney)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countTotalSelledDrugsMoney");

	UinventoryScreen_C_countTotalSelledDrugsMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playerCanFitMoney != nullptr)
		*playerCanFitMoney = params.playerCanFitMoney;
}


// Function inventoryScreen.inventoryScreen_C.checkSelledDrugs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CheckedPositive                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FdrugData               endDrugAverage                 (Parm, OutParm)

void UinventoryScreen_C::checkSelledDrugs(bool* CheckedPositive, struct FdrugData* endDrugAverage)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.checkSelledDrugs");

	UinventoryScreen_C_checkSelledDrugs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CheckedPositive != nullptr)
		*CheckedPositive = params.CheckedPositive;
	if (endDrugAverage != nullptr)
		*endDrugAverage = params.endDrugAverage;
}


// Function inventoryScreen.inventoryScreen_C.renderBuyerNeeded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::renderBuyerNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderBuyerNeeded");

	UinventoryScreen_C_renderBuyerNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.checkItemsFitPockets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoFit                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::checkItemsFitPockets(class AplayerCharacterBP_C* playerRef, bool* NoFit)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.checkItemsFitPockets");

	UinventoryScreen_C_checkItemsFitPockets_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NoFit != nullptr)
		*NoFit = params.NoFit;
}


// Function inventoryScreen.inventoryScreen_C.countTradeItemSizing
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TotalSize                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TotalWieght                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::countTradeItemSizing(float* TotalSize, float* TotalWieght)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countTradeItemSizing");

	UinventoryScreen_C_countTradeItemSizing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalSize != nullptr)
		*TotalSize = params.TotalSize;
	if (TotalWieght != nullptr)
		*TotalWieght = params.TotalWieght;
}


// Function inventoryScreen.inventoryScreen_C.countItemValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            totalValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::countItemValue(int* totalValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countItemValue");

	UinventoryScreen_C_countItemValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (totalValue != nullptr)
		*totalValue = params.totalValue;
}


// Function inventoryScreen.inventoryScreen_C.clearTradeItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::clearTradeItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.clearTradeItems");

	UinventoryScreen_C_clearTradeItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.renderShopItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AbaseNPC_C*              sellerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::renderShopItems(class AbaseNPC_C* sellerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderShopItems");

	UinventoryScreen_C_renderShopItems_Params params;
	params.sellerRef = sellerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.renderContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> containerItems                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AcontainerBase_C*        container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::renderContainer(class AcontainerBase_C* container, TArray<struct FinventoryItemStruct>* containerItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderContainer");

	UinventoryScreen_C_renderContainer_Params params;
	params.container = container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (containerItems != nullptr)
		*containerItems = params.containerItems;
}


// Function inventoryScreen.inventoryScreen_C.prepareInventoryMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AcontainerBase_C*        ContainerRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AbaseNPC_C*              sellerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::prepareInventoryMode(class AcontainerBase_C* ContainerRef, class AbaseNPC_C* sellerRef, class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.prepareInventoryMode");

	UinventoryScreen_C_prepareInventoryMode_Params params;
	params.ContainerRef = ContainerRef;
	params.sellerRef = sellerRef;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.renderPockets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> pocketItems                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AplayerCharacterBP_C*    Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::renderPockets(class AplayerCharacterBP_C* Player, TArray<struct FinventoryItemStruct>* pocketItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderPockets");

	UinventoryScreen_C_renderPockets_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pocketItems != nullptr)
		*pocketItems = params.pocketItems;
}


// Function inventoryScreen.inventoryScreen_C.renderBackpack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> backpackItems                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UinventoryScreen_C::renderBackpack(TArray<struct FinventoryItemStruct>* backpackItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderBackpack");

	UinventoryScreen_C_renderBackpack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (backpackItems != nullptr)
		*backpackItems = params.backpackItems;
}


// Function inventoryScreen.inventoryScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.PreConstruct");

	UinventoryScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UinventoryScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.Construct");

	UinventoryScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.Tick");

	UinventoryScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UinventoryScreen_C::BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UinventoryScreen_C_BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UinventoryScreen_C::BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UinventoryScreen_C_BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UinventoryScreen_C::BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UinventoryScreen_C_BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UinventoryScreen_C::BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UinventoryScreen_C_BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UinventoryScreen_C::BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UinventoryScreen_C_BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UinventoryScreen_C::BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UinventoryScreen_C_BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.resetTabs
// (BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::resetTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.resetTabs");

	UinventoryScreen_C_resetTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.NextTab
// (BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::NextTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.NextTab");

	UinventoryScreen_C_NextTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.PreviousTab
// (BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::PreviousTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.PreviousTab");

	UinventoryScreen_C_PreviousTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UinventoryScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.Destruct");

	UinventoryScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.BreakTrade
// (BlueprintCallable, BlueprintEvent)

void UinventoryScreen_C::BreakTrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BreakTrade");

	UinventoryScreen_C_BreakTrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventoryScreen.inventoryScreen_C.ExecuteUbergraph_inventoryScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UinventoryScreen_C::ExecuteUbergraph_inventoryScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.ExecuteUbergraph_inventoryScreen");

	UinventoryScreen_C_ExecuteUbergraph_inventoryScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
