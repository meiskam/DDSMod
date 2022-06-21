/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.Get_btnAcceptTrade_bIsEnabled_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UinventoryScreen_C::Get_btnAcceptTrade_bIsEnabled_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.Get_btnAcceptTrade_bIsEnabled_1");
		
		UinventoryScreen_C_Get_btnAcceptTrade_bIsEnabled_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.RefreshInventory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::RefreshInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.RefreshInventory");
		
		UinventoryScreen_C_RefreshInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.resetUseContent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::resetUseContent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.resetUseContent");
		
		UinventoryScreen_C_resetUseContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.3dcharacterToggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UinventoryScreen_C::_3dcharacterToggle(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.3dcharacterToggle");
		
		UinventoryScreen_C__3dcharacterToggle_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.updateFactorRanks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::updateFactorRanks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.updateFactorRanks");
		
		UinventoryScreen_C_updateFactorRanks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.refreshQuickUse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::refreshQuickUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.refreshQuickUse");
		
		UinventoryScreen_C_refreshQuickUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.inventoryError
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ErrorText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UinventoryScreen_C::inventoryError(const class FText& ErrorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.inventoryError");
		
		UinventoryScreen_C_inventoryError_Params params {};
		params.ErrorText = ErrorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.refreshSkills
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::refreshSkills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.refreshSkills");
		
		UinventoryScreen_C_refreshSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.countTotalDrugGrams
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            OutGrams                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::countTotalDrugGrams(int32_t* OutGrams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countTotalDrugGrams");
		
		UinventoryScreen_C_countTotalDrugGrams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGrams != nullptr)
			*OutGrams = params.OutGrams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.checkSubstanceSame
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FMixProportionsStruct>               Mixes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<int32_t>                                    Quantities                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               TheSame                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FdrugData                                   dataAverage                                                (Parm, OutParm, HasGetValueTypeHash)
	 * 		struct FMixProportionsStruct                       MixAverage                                                 (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::checkSubstanceSame(TArray<struct FMixProportionsStruct>* Mixes, TArray<int32_t>* Quantities, bool* TheSame, struct FdrugData* dataAverage, struct FMixProportionsStruct* MixAverage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.checkSubstanceSame");
		
		UinventoryScreen_C_checkSubstanceSame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mixes != nullptr)
			*Mixes = params.Mixes;
		if (Quantities != nullptr)
			*Quantities = params.Quantities;
		if (TheSame != nullptr)
			*TheSame = params.TheSame;
		if (dataAverage != nullptr)
			*dataAverage = params.dataAverage;
		if (MixAverage != nullptr)
			*MixAverage = params.MixAverage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.renderQuestList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::renderQuestList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderQuestList");
		
		UinventoryScreen_C_renderQuestList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.acceptBoughtItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::acceptBoughtItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.acceptBoughtItems");
		
		UinventoryScreen_C_acceptBoughtItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.countBoughtItemValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::countBoughtItemValue(class AplayerCharacterBP_C* PlayerRef, int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countBoughtItemValue");
		
		UinventoryScreen_C_countBoughtItemValue_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.calcDistribution
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AmountDistribution                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TextOut                                                    (Parm, OutParm)
	 */
	void UinventoryScreen_C::calcDistribution(float AmountDistribution, class FText* TextOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.calcDistribution");
		
		UinventoryScreen_C_calcDistribution_Params params {};
		params.AmountDistribution = AmountDistribution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextOut != nullptr)
			*TextOut = params.TextOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.updateStatistics
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::updateStatistics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.updateStatistics");
		
		UinventoryScreen_C_updateStatistics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.Get_txtExpositionHeading_ToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UinventoryScreen_C::Get_txtExpositionHeading_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.Get_txtExpositionHeading_ToolTipWidget_1");
		
		UinventoryScreen_C_Get_txtExpositionHeading_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.GetToolTipWidget_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UWidget* UinventoryScreen_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.GetToolTipWidget_1");
		
		UinventoryScreen_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.renderTasklist
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::renderTasklist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderTasklist");
		
		UinventoryScreen_C_renderTasklist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.countTotalSelledDrugsMoney
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playerCanFitMoney                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UinventoryScreen_C::countTotalSelledDrugsMoney(bool* playerCanFitMoney)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countTotalSelledDrugsMoney");
		
		UinventoryScreen_C_countTotalSelledDrugsMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (playerCanFitMoney != nullptr)
			*playerCanFitMoney = params.playerCanFitMoney;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.checkSelledDrugs
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CheckedPositive                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FdrugData                                   endDrugAverage                                             (Parm, OutParm, HasGetValueTypeHash)
	 * 		struct FMixProportionsStruct                       OutMixAverage                                              (Parm, OutParm, HasGetValueTypeHash)
	 * 		class FText                                        OutMixName                                                 (Parm, OutParm)
	 */
	void UinventoryScreen_C::checkSelledDrugs(bool* CheckedPositive, struct FdrugData* endDrugAverage, struct FMixProportionsStruct* OutMixAverage, class FText* OutMixName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.checkSelledDrugs");
		
		UinventoryScreen_C_checkSelledDrugs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CheckedPositive != nullptr)
			*CheckedPositive = params.CheckedPositive;
		if (endDrugAverage != nullptr)
			*endDrugAverage = params.endDrugAverage;
		if (OutMixAverage != nullptr)
			*OutMixAverage = params.OutMixAverage;
		if (OutMixName != nullptr)
			*OutMixName = params.OutMixName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.renderBuyerNeeded
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::renderBuyerNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderBuyerNeeded");
		
		UinventoryScreen_C_renderBuyerNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.checkItemsFitPockets
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NoFit                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UinventoryScreen_C::checkItemsFitPockets(class AplayerCharacterBP_C* PlayerRef, bool* NoFit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.checkItemsFitPockets");
		
		UinventoryScreen_C_checkItemsFitPockets_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NoFit != nullptr)
			*NoFit = params.NoFit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.countTradeItemSizing
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TotalSize                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalWieght                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::countTradeItemSizing(float* TotalSize, float* TotalWieght)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countTradeItemSizing");
		
		UinventoryScreen_C_countTradeItemSizing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalSize != nullptr)
			*TotalSize = params.TotalSize;
		if (TotalWieght != nullptr)
			*TotalWieght = params.TotalWieght;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.countItemValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TotalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::countItemValue(int32_t* TotalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.countItemValue");
		
		UinventoryScreen_C_countItemValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalValue != nullptr)
			*TotalValue = params.TotalValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.clearTradeItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::clearTradeItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.clearTradeItems");
		
		UinventoryScreen_C_clearTradeItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.renderShopItems
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AbaseNPC_C*                                  sellerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::renderShopItems(class AbaseNPC_C* sellerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderShopItems");
		
		UinventoryScreen_C_renderShopItems_Params params {};
		params.sellerRef = sellerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.renderContainer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AcontainerBase_C*                            container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::renderContainer(class AcontainerBase_C* container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderContainer");
		
		UinventoryScreen_C_renderContainer_Params params {};
		params.container = container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.prepareInventoryMode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AcontainerBase_C*                            ContainerRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AbaseNPC_C*                                  sellerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::prepareInventoryMode(class AcontainerBase_C* ContainerRef, class AbaseNPC_C* sellerRef, class AplayerCharacterBP_C* PlayerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.prepareInventoryMode");
		
		UinventoryScreen_C_prepareInventoryMode_Params params {};
		params.ContainerRef = ContainerRef;
		params.sellerRef = sellerRef;
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.renderPockets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::renderPockets(class AplayerCharacterBP_C* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderPockets");
		
		UinventoryScreen_C_renderPockets_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.renderBackpack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInventoryComponent_C*                       InvComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::renderBackpack(class UInventoryComponent_C* InvComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.renderBackpack");
		
		UinventoryScreen_C_renderBackpack_Params params {};
		params.InvComponent = InvComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UinventoryScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.PreConstruct");
		
		UinventoryScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UinventoryScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.Construct");
		
		UinventoryScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.Tick");
		
		UinventoryScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UinventoryScreen_C::BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UinventoryScreen_C_BndEvt__tabInventory_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UinventoryScreen_C::BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UinventoryScreen_C_BndEvt__tabCharacter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UinventoryScreen_C::BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UinventoryScreen_C_BndEvt__btnOrganiser_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UinventoryScreen_C::BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UinventoryScreen_C_BndEvt__btnAcceptTrade_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UinventoryScreen_C::BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UinventoryScreen_C_BndEvt__btnClearTrade_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UinventoryScreen_C::BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UinventoryScreen_C_BndEvt__btnCancelTrade_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.resetTabs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::resetTabs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.resetTabs");
		
		UinventoryScreen_C_resetTabs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.NextTab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::NextTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.NextTab");
		
		UinventoryScreen_C_NextTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.PreviousTab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::PreviousTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.PreviousTab");
		
		UinventoryScreen_C_PreviousTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UinventoryScreen_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.Destruct");
		
		UinventoryScreen_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.BreakTrade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::BreakTrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.BreakTrade");
		
		UinventoryScreen_C_BreakTrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.randomWobble
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::randomWobble()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.randomWobble");
		
		UinventoryScreen_C_randomWobble_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.refreshActiveColor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UinventoryScreen_C::refreshActiveColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.refreshActiveColor");
		
		UinventoryScreen_C_refreshActiveColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function inventoryScreen.inventoryScreen_C.ExecuteUbergraph_inventoryScreen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UinventoryScreen_C::ExecuteUbergraph_inventoryScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function inventoryScreen.inventoryScreen_C.ExecuteUbergraph_inventoryScreen");
		
		UinventoryScreen_C_ExecuteUbergraph_inventoryScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UinventoryScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UinventoryScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass inventoryScreen.inventoryScreen_C");
		return ptr;
	}

}


