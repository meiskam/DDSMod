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
	 * 		Name   -> Function baseNPC.baseNPC_C.ExpandRama
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::ExpandRama()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.ExpandRama");
		
		AbaseNPC_C_ExpandRama_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.calcSaleExp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              expOut                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AbaseNPC_C::calcSaleExp(float* expOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.calcSaleExp");
		
		AbaseNPC_C_calcSaleExp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (expOut != nullptr)
			*expOut = params.expOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.calcExpoEvent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ExpoVal                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AbaseNPC_C::calcExpoEvent(float* ExpoVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.calcExpoEvent");
		
		AbaseNPC_C_calcExpoEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExpoVal != nullptr)
			*ExpoVal = params.ExpoVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.saleReputationUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              productQuality                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AbaseNPC_C::saleReputationUpdate(float productQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.saleReputationUpdate");
		
		AbaseNPC_C_saleReputationUpdate_Params params {};
		params.productQuality = productQuality;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.animUpdates
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::animUpdates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.animUpdates");
		
		AbaseNPC_C_animUpdates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.calcSaleRisk
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float AbaseNPC_C::calcSaleRisk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.calcSaleRisk");
		
		AbaseNPC_C_calcSaleRisk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.calcSaleExposure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float AbaseNPC_C::calcSaleExposure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.calcSaleExposure");
		
		AbaseNPC_C_calcSaleExposure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.setClientLooks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isMale                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AbaseNPC_C::setClientLooks(bool isMale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.setClientLooks");
		
		AbaseNPC_C_setClientLooks_Params params {};
		params.isMale = isMale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.lookAtPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Look                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AbaseNPC_C::lookAtPlayer(bool Look, float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.lookAtPlayer");
		
		AbaseNPC_C_lookAtPlayer_Params params {};
		params.Look = Look;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.randomiseAnimationDynamics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::randomiseAnimationDynamics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.randomiseAnimationDynamics");
		
		AbaseNPC_C_randomiseAnimationDynamics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.TaskDone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AbaseNPC_C::TaskDone(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.TaskDone");
		
		AbaseNPC_C_TaskDone_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.assignPublicTask
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::assignPublicTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.assignPublicTask");
		
		AbaseNPC_C_assignPublicTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.chooseGoHomeLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::chooseGoHomeLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.chooseGoHomeLocation");
		
		AbaseNPC_C_chooseGoHomeLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.checkRotating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AbaseNPC_C::checkRotating(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.checkRotating");
		
		AbaseNPC_C_checkRotating_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.UpdateMorphTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::UpdateMorphTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.UpdateMorphTargets");
		
		AbaseNPC_C_UpdateMorphTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.GetMorphTargetValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CanMorph                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AbaseNPC_C::GetMorphTargetValue(bool CanMorph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.GetMorphTargetValue");
		
		AbaseNPC_C_GetMorphTargetValue_Params params {};
		params.CanMorph = CanMorph;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.SetMasterPoseComponentForParts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::SetMasterPoseComponentForParts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.SetMasterPoseComponentForParts");
		
		AbaseNPC_C_SetMasterPoseComponentForParts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.IsDefaultMeshInheritungItsAnimationAsset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AbaseNPC_C::IsDefaultMeshInheritungItsAnimationAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.IsDefaultMeshInheritungItsAnimationAsset");
		
		AbaseNPC_C_IsDefaultMeshInheritungItsAnimationAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.processReceivedDrugs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::processReceivedDrugs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.processReceivedDrugs");
		
		AbaseNPC_C_processReceivedDrugs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.setupNewDrugSale
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FdrugData                                   drugData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            DrugQuantity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        characterName                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              expectedPrice                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OrderId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TaskID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isMale                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isDealer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ExpectationLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AbaseNPC_C::setupNewDrugSale(const struct FdrugData& drugData, int32_t DrugQuantity, const class FText& characterName, float expectedPrice, int32_t OrderId, int32_t TaskID, bool isMale, bool isDealer, float ExpectationLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.setupNewDrugSale");
		
		AbaseNPC_C_setupNewDrugSale_Params params {};
		params.drugData = drugData;
		params.DrugQuantity = DrugQuantity;
		params.characterName = characterName;
		params.expectedPrice = expectedPrice;
		params.OrderId = OrderId;
		params.TaskID = TaskID;
		params.isMale = isMale;
		params.isDealer = isDealer;
		params.ExpectationLevel = ExpectationLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.UserConstructionScript");
		
		AbaseNPC_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AbaseNPC_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.ReceiveBeginPlay");
		
		AbaseNPC_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AbaseNPC_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.ReceiveTick");
		
		AbaseNPC_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.dialogueMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::dialogueMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.dialogueMode");
		
		AbaseNPC_C_dialogueMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.endDialogueMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::endDialogueMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.endDialogueMode");
		
		AbaseNPC_C_endDialogueMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.activateTrade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::activateTrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.activateTrade");
		
		AbaseNPC_C_activateTrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.endTrade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::endTrade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.endTrade");
		
		AbaseNPC_C_endTrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.drugSaleSuccesfull
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::drugSaleSuccesfull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.drugSaleSuccesfull");
		
		AbaseNPC_C_drugSaleSuccesfull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.clientResignedWaiting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::clientResignedWaiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.clientResignedWaiting");
		
		AbaseNPC_C_clientResignedWaiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.CashDeliverySuccessfull
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::CashDeliverySuccessfull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.CashDeliverySuccessfull");
		
		AbaseNPC_C_CashDeliverySuccessfull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.gotHome
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::gotHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.gotHome");
		
		AbaseNPC_C_gotHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.continueGoHome
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::continueGoHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.continueGoHome");
		
		AbaseNPC_C_continueGoHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.eventEnterDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::eventEnterDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.eventEnterDialogue");
		
		AbaseNPC_C_eventEnterDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.failGoHome
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::failGoHome()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.failGoHome");
		
		AbaseNPC_C_failGoHome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.togglePoseCalc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::togglePoseCalc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.togglePoseCalc");
		
		AbaseNPC_C_togglePoseCalc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.waitTimeMultiplierCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::waitTimeMultiplierCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.waitTimeMultiplierCheck");
		
		AbaseNPC_C_waitTimeMultiplierCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.RetryDialAssign
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::RetryDialAssign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.RetryDialAssign");
		
		AbaseNPC_C_RetryDialAssign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.LongRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AbaseNPC_C::LongRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.LongRadiusChanged");
		
		AbaseNPC_C_LongRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.ShortRadiusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AbaseNPC_C::ShortRadiusChanged(bool InRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.ShortRadiusChanged");
		
		AbaseNPC_C_ShortRadiusChanged_Params params {};
		params.InRadius = InRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AbaseNPC_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		AbaseNPC_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.RamaLoadedEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AbaseNPC_C::RamaLoadedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.RamaLoadedEvent");
		
		AbaseNPC_C_RamaLoadedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function baseNPC.baseNPC_C.ExecuteUbergraph_baseNPC
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AbaseNPC_C::ExecuteUbergraph_baseNPC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.ExecuteUbergraph_baseNPC");
		
		AbaseNPC_C_ExecuteUbergraph_baseNPC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AbaseNPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AbaseNPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass baseNPC.baseNPC_C");
		return ptr;
	}

}


