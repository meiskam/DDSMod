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
	 * 		Name   -> Function salesManager.salesManager_C.ReleaseAllClients
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::ReleaseAllClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ReleaseAllClients");
		
		AsalesManager_C_ReleaseAllClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.CalcArrestBail
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ArrestedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutBailAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::CalcArrestBail(int32_t ArrestedIndex, int32_t* OutBailAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.CalcArrestBail");
		
		AsalesManager_C_CalcArrestBail_Params params {};
		params.ArrestedIndex = ArrestedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBailAmount != nullptr)
			*OutBailAmount = params.OutBailAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.CheckArrestReleases
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::CheckArrestReleases()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.CheckArrestReleases");
		
		AsalesManager_C_CheckArrestReleases_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.TryDepositCashToSafe
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AreaID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AsalesManager_C::TryDepositCashToSafe(int32_t Amount, const class FString& AreaID, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.TryDepositCashToSafe");
		
		AsalesManager_C_TryDepositCashToSafe_Params params {};
		params.Amount = Amount;
		params.AreaID = AreaID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.AddDealerExp
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaleQuantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              expAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::AddDealerExp(int32_t ClientId, int32_t SaleQuantity, float expAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.AddDealerExp");
		
		AsalesManager_C_AddDealerExp_Params params {};
		params.ClientId = ClientId;
		params.SaleQuantity = SaleQuantity;
		params.expAmount = expAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.GetClientMeta
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ClientFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FClientMeta                                 OutMeta                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AsalesManager_C::GetClientMeta(int32_t ClientId, bool* ClientFound, struct FClientMeta* OutMeta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.GetClientMeta");
		
		AsalesManager_C_GetClientMeta_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClientFound != nullptr)
			*ClientFound = params.ClientFound;
		if (OutMeta != nullptr)
			*OutMeta = params.OutMeta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.ReleaseClient
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::ReleaseClient(int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ReleaseClient");
		
		AsalesManager_C_ReleaseClient_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.GetClientArrestChance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutChance                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::GetClientArrestChance(int32_t ClientId, float* OutChance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.GetClientArrestChance");
		
		AsalesManager_C_GetClientArrestChance_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutChance != nullptr)
			*OutChance = params.OutChance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.IsClientArrested
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsArrested                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AsalesManager_C::IsClientArrested(int32_t ClientId, bool* IsArrested)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.IsClientArrested");
		
		AsalesManager_C_IsClientArrested_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsArrested != nullptr)
			*IsArrested = params.IsArrested;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.ArrestClient
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::ArrestClient(int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ArrestClient");
		
		AsalesManager_C_ArrestClient_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.ReconstructClientList
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::ReconstructClientList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ReconstructClientList");
		
		AsalesManager_C_ReconstructClientList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.ExpandRama
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::ExpandRama()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ExpandRama");
		
		AsalesManager_C_ExpandRama_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.UpdateFlags
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::UpdateFlags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.UpdateFlags");
		
		AsalesManager_C_UpdateFlags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.AddDrugWishlist
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DrugIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::AddDrugWishlist(int32_t DrugIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.AddDrugWishlist");
		
		AsalesManager_C_AddDrugWishlist_Params params {};
		params.DrugIndex = DrugIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.countAddictedClients
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ClientCount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::countAddictedClients(int32_t* ClientCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.countAddictedClients");
		
		AsalesManager_C_countAddictedClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClientCount != nullptr)
			*ClientCount = params.ClientCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.countMaxDealers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanHaveMore                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AsalesManager_C::countMaxDealers(int32_t ClientId, bool* CanHaveMore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.countMaxDealers");
		
		AsalesManager_C_countMaxDealers_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanHaveMore != nullptr)
			*CanHaveMore = params.CanHaveMore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.adaptDifficulty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::adaptDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.adaptDifficulty");
		
		AsalesManager_C_adaptDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.generateClientMessage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               dealer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CashMeet                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DrugNam                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               priceHigh                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Message                                                    (Parm, OutParm)
	 */
	void AsalesManager_C::generateClientMessage(bool dealer, bool CashMeet, int32_t Quantity, const class FText& DrugNam, bool priceHigh, class FText* Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.generateClientMessage");
		
		AsalesManager_C_generateClientMessage_Params params {};
		params.dealer = dealer;
		params.CashMeet = CashMeet;
		params.Quantity = Quantity;
		params.DrugNam = DrugNam;
		params.priceHigh = priceHigh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Message != nullptr)
			*Message = params.Message;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.recalcClientCount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::recalcClientCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.recalcClientCount");
		
		AsalesManager_C_recalcClientCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.tryDisplayClientState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::tryDisplayClientState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.tryDisplayClientState");
		
		AsalesManager_C_tryDisplayClientState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.displayClientAddictedPopup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::displayClientAddictedPopup(int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.displayClientAddictedPopup");
		
		AsalesManager_C_displayClientAddictedPopup_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.generateClientName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Male                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ClientName                                                 (Parm, OutParm)
	 */
	void AsalesManager_C::generateClientName(bool Male, class FText* ClientName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.generateClientName");
		
		AsalesManager_C_generateClientName_Params params {};
		params.Male = Male;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClientName != nullptr)
			*ClientName = params.ClientName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.updateSkillMultipliers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::updateSkillMultipliers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.updateSkillMultipliers");
		
		AsalesManager_C_updateSkillMultipliers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.spawnAreaSampleClient
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ClientArea                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::spawnAreaSampleClient(const class FString& ClientArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.spawnAreaSampleClient");
		
		AsalesManager_C_spawnAreaSampleClient_Params params {};
		params.ClientArea = ClientArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.updateAreaTimeMultiplier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::updateAreaTimeMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.updateAreaTimeMultiplier");
		
		AsalesManager_C_updateAreaTimeMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.loopCheckPrices
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               someAffordable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AsalesManager_C::loopCheckPrices(bool* someAffordable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.loopCheckPrices");
		
		AsalesManager_C_loopCheckPrices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (someAffordable != nullptr)
			*someAffordable = params.someAffordable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.getOrderedDrugName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            DrugIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Output                                                     (Parm, OutParm)
	 */
	void AsalesManager_C::getOrderedDrugName(int32_t DrugIndex, class FText* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.getOrderedDrugName");
		
		AsalesManager_C_getOrderedDrugName_Params params {};
		params.DrugIndex = DrugIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.checkClientInterested
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DrugDemandedID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Interested                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               priceHigh                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Wish                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AsalesManager_C::checkClientInterested(int32_t ClientId, int32_t DrugDemandedID, bool* Interested, bool* priceHigh, bool* Wish)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.checkClientInterested");
		
		AsalesManager_C_checkClientInterested_Params params {};
		params.ClientId = ClientId;
		params.DrugDemandedID = DrugDemandedID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interested != nullptr)
			*Interested = params.Interested;
		if (priceHigh != nullptr)
			*priceHigh = params.priceHigh;
		if (Wish != nullptr)
			*Wish = params.Wish;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.badSaleResponse
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ClientLost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::badSaleResponse(bool ClientLost, int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.badSaleResponse");
		
		AsalesManager_C_badSaleResponse_Params params {};
		params.ClientLost = ClientLost;
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.sendDealerOffer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::sendDealerOffer(int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.sendDealerOffer");
		
		AsalesManager_C_sendDealerOffer_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.dealerOfferChance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AsalesManager_C::dealerOfferChance(int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.dealerOfferChance");
		
		AsalesManager_C_dealerOfferChance_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.odMessageResponse
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               dealer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::odMessageResponse(bool dealer, int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.odMessageResponse");
		
		AsalesManager_C_odMessageResponse_Params params {};
		params.dealer = dealer;
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.showODPopup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               dealer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::showODPopup(bool dealer, int32_t ClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.showODPopup");
		
		AsalesManager_C_showODPopup_Params params {};
		params.dealer = dealer;
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.addStatsOD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::addStatsOD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.addStatsOD");
		
		AsalesManager_C_addStatsOD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.selectDrugID
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DrugID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::selectDrugID(int32_t ClientId, int32_t* DrugID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.selectDrugID");
		
		AsalesManager_C_selectDrugID_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DrugID != nullptr)
			*DrugID = params.DrugID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.timeShift
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeShiftHours                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TimeShiftMinutes                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::timeShift(float TimeShiftHours, float TimeShiftMinutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.timeShift");
		
		AsalesManager_C_timeShift_Params params {};
		params.TimeShiftHours = TimeShiftHours;
		params.TimeShiftMinutes = TimeShiftMinutes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.affectBadReputation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ReputationLoss                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::affectBadReputation(float ReputationLoss)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.affectBadReputation");
		
		AsalesManager_C_affectBadReputation_Params params {};
		params.ReputationLoss = ReputationLoss;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.calcIntervalMultiplier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              baseInterval                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutInterval                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::calcIntervalMultiplier(float baseInterval, float* OutInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.calcIntervalMultiplier");
		
		AsalesManager_C_calcIntervalMultiplier_Params params {};
		params.baseInterval = baseInterval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInterval != nullptr)
			*OutInterval = params.OutInterval;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.selectClientArea
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedAreaID                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::selectClientArea(class FString* SelectedAreaID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.selectClientArea");
		
		AsalesManager_C_selectClientArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedAreaID != nullptr)
			*SelectedAreaID = params.SelectedAreaID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.getOrderedDrugIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            RandomIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::getOrderedDrugIndex(int32_t RandomIndex, int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.getOrderedDrugIndex");
		
		AsalesManager_C_getOrderedDrugIndex_Params params {};
		params.RandomIndex = RandomIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.refreshAvailableDrugs
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DrugsAreAvailable                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AsalesManager_C::refreshAvailableDrugs(int32_t ClientId, bool* DrugsAreAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.refreshAvailableDrugs");
		
		AsalesManager_C_refreshAvailableDrugs_Params params {};
		params.ClientId = ClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DrugsAreAvailable != nullptr)
			*DrugsAreAvailable = params.DrugsAreAvailable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.countClientStatistics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::countClientStatistics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.countClientStatistics");
		
		AsalesManager_C_countClientStatistics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.calcOrderQuantity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            inClientID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               nightTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               priceHigh                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            DrugID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutQuantity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Critical                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AsalesManager_C::calcOrderQuantity(int32_t inClientID, bool nightTime, bool priceHigh, int32_t DrugID, int32_t* OutQuantity, bool* Critical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.calcOrderQuantity");
		
		AsalesManager_C_calcOrderQuantity_Params params {};
		params.inClientID = inClientID;
		params.nightTime = nightTime;
		params.priceHigh = priceHigh;
		params.DrugID = DrugID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutQuantity != nullptr)
			*OutQuantity = params.OutQuantity;
		if (Critical != nullptr)
			*Critical = params.Critical;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.clientSendNewOrder
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ClientId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               nightTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AsalesManager_C::clientSendNewOrder(int32_t ClientId, bool nightTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.clientSendNewOrder");
		
		AsalesManager_C_clientSendNewOrder_Params params {};
		params.ClientId = ClientId;
		params.nightTime = nightTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.clientOrderCountdown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::clientOrderCountdown(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.clientOrderCountdown");
		
		AsalesManager_C_clientOrderCountdown_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.generateNewClient
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AsalesManager_C::generateNewClient(bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.generateNewClient");
		
		AsalesManager_C_generateNewClient_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.UserConstructionScript");
		
		AsalesManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AsalesManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ReceiveBeginPlay");
		
		AsalesManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ReceiveTick");
		
		AsalesManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.tryInitialise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::tryInitialise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.tryInitialise");
		
		AsalesManager_C_tryInitialise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.checkClientState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::checkClientState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.checkClientState");
		
		AsalesManager_C_checkClientState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.trySpawnSampleGuy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::trySpawnSampleGuy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.trySpawnSampleGuy");
		
		AsalesManager_C_trySpawnSampleGuy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		AsalesManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.ForceArrestAllClients
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::ForceArrestAllClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ForceArrestAllClients");
		
		AsalesManager_C_ForceArrestAllClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.AddArrestClients
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::AddArrestClients(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.AddArrestClients");
		
		AsalesManager_C_AddArrestClients_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.AddArrestScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::AddArrestScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.AddArrestScreen");
		
		AsalesManager_C_AddArrestScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.DealerLeveledUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::DealerLeveledUp(int32_t NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.DealerLeveledUp");
		
		AsalesManager_C_DealerLeveledUp_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.AllDealersAddExp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              expAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::AllDealersAddExp(float expAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.AllDealersAddExp");
		
		AsalesManager_C_AllDealersAddExp_Params params {};
		params.expAmount = expAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.DealerGotArrested
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::DealerGotArrested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.DealerGotArrested");
		
		AsalesManager_C_DealerGotArrested_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.DisplayArrestPopup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::DisplayArrestPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.DisplayArrestPopup");
		
		AsalesManager_C_DisplayArrestPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.ForceReleaseAllClients
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::ForceReleaseAllClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ForceReleaseAllClients");
		
		AsalesManager_C_ForceReleaseAllClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.DisableBallenaBlock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::DisableBallenaBlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.DisableBallenaBlock");
		
		AsalesManager_C_DisableBallenaBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.KillSalesManager
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AsalesManager_C::KillSalesManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.KillSalesManager");
		
		AsalesManager_C_KillSalesManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function salesManager.salesManager_C.ExecuteUbergraph_salesManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AsalesManager_C::ExecuteUbergraph_salesManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ExecuteUbergraph_salesManager");
		
		AsalesManager_C_ExecuteUbergraph_salesManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AsalesManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AsalesManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass salesManager.salesManager_C");
		return ptr;
	}

}


