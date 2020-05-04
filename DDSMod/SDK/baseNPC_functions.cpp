
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function baseNPC.baseNPC_C.calcSaleExp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          expOut                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::calcSaleExp(float* expOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.calcSaleExp");

	AbaseNPC_C_calcSaleExp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (expOut != nullptr)
		*expOut = params.expOut;
}


// Function baseNPC.baseNPC_C.calcExpoEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ExpoVal                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::calcExpoEvent(float* ExpoVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.calcExpoEvent");

	AbaseNPC_C_calcExpoEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpoVal != nullptr)
		*ExpoVal = params.ExpoVal;
}


// Function baseNPC.baseNPC_C.saleReputationUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          productQuality                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::saleReputationUpdate(float productQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.saleReputationUpdate");

	AbaseNPC_C_saleReputationUpdate_Params params;
	params.productQuality = productQuality;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.animUpdates
// (Public, BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::animUpdates()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.animUpdates");

	AbaseNPC_C_animUpdates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.calcSaleRisk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AbaseNPC_C::calcSaleRisk()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.calcSaleRisk");

	AbaseNPC_C_calcSaleRisk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function baseNPC.baseNPC_C.calcSaleExposure
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AbaseNPC_C::calcSaleExposure()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.calcSaleExposure");

	AbaseNPC_C_calcSaleExposure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function baseNPC.baseNPC_C.setClientLooks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isMale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::setClientLooks(bool isMale)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.setClientLooks");

	AbaseNPC_C_setClientLooks_Params params;
	params.isMale = isMale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.lookAtPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Look                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::lookAtPlayer(bool Look, float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.lookAtPlayer");

	AbaseNPC_C_lookAtPlayer_Params params;
	params.Look = Look;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.randomiseAnimationDynamics
// (Public, BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::randomiseAnimationDynamics()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.randomiseAnimationDynamics");

	AbaseNPC_C_randomiseAnimationDynamics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.taskDone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::taskDone(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.taskDone");

	AbaseNPC_C_taskDone_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.assignPublicTask
// (Public, BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::assignPublicTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.assignPublicTask");

	AbaseNPC_C_assignPublicTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.chooseGoHomeLocation
// (Public, BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::chooseGoHomeLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.chooseGoHomeLocation");

	AbaseNPC_C_chooseGoHomeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.checkRotating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::checkRotating(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.checkRotating");

	AbaseNPC_C_checkRotating_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.UpdateMorphTargets
// (Public, BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::UpdateMorphTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.UpdateMorphTargets");

	AbaseNPC_C_UpdateMorphTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.GetMorphTargetValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanMorph                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AbaseNPC_C::GetMorphTargetValue(bool CanMorph)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.GetMorphTargetValue");

	AbaseNPC_C_GetMorphTargetValue_Params params;
	params.CanMorph = CanMorph;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function baseNPC.baseNPC_C.SetMasterPoseComponentForParts
// (Public, BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::SetMasterPoseComponentForParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.SetMasterPoseComponentForParts");

	AbaseNPC_C_SetMasterPoseComponentForParts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.IsDefaultMeshInheritungItsAnimationAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AbaseNPC_C::IsDefaultMeshInheritungItsAnimationAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.IsDefaultMeshInheritungItsAnimationAsset");

	AbaseNPC_C_IsDefaultMeshInheritungItsAnimationAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function baseNPC.baseNPC_C.processReceivedDrugs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::processReceivedDrugs()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.processReceivedDrugs");

	AbaseNPC_C_processReceivedDrugs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.setupNewDrugSale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdrugData               drugData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            DrugQuantity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CharacterName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          expectedPrice                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OrderId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TaskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isMale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isDealer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpectationLevel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::setupNewDrugSale(const struct FdrugData& drugData, int DrugQuantity, const struct FText& CharacterName, float expectedPrice, int OrderId, int TaskID, bool isMale, bool isDealer, float ExpectationLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.setupNewDrugSale");

	AbaseNPC_C_setupNewDrugSale_Params params;
	params.drugData = drugData;
	params.DrugQuantity = DrugQuantity;
	params.CharacterName = CharacterName;
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


// Function baseNPC.baseNPC_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.UserConstructionScript");

	AbaseNPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AbaseNPC_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.ReceiveBeginPlay");

	AbaseNPC_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.ReceiveTick");

	AbaseNPC_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.dialogueMode
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::dialogueMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.dialogueMode");

	AbaseNPC_C_dialogueMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.endDialogueMode
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::endDialogueMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.endDialogueMode");

	AbaseNPC_C_endDialogueMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.activateTrade
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::activateTrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.activateTrade");

	AbaseNPC_C_activateTrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.endTrade
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::endTrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.endTrade");

	AbaseNPC_C_endTrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.drugSaleSuccesfull
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::drugSaleSuccesfull()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.drugSaleSuccesfull");

	AbaseNPC_C_drugSaleSuccesfull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.clientResignedWaiting
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::clientResignedWaiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.clientResignedWaiting");

	AbaseNPC_C_clientResignedWaiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.CashDeliverySuccessfull
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::CashDeliverySuccessfull()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.CashDeliverySuccessfull");

	AbaseNPC_C_CashDeliverySuccessfull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.gotHome
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::gotHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.gotHome");

	AbaseNPC_C_gotHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.continueGoHome
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::continueGoHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.continueGoHome");

	AbaseNPC_C_continueGoHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.eventEnterDialogue
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::eventEnterDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.eventEnterDialogue");

	AbaseNPC_C_eventEnterDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.failGoHome
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::failGoHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.failGoHome");

	AbaseNPC_C_failGoHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.testAroundPlayer
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::testAroundPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.testAroundPlayer");

	AbaseNPC_C_testAroundPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.togglePoseCalc
// (BlueprintCallable, BlueprintEvent)

void AbaseNPC_C::togglePoseCalc()
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.togglePoseCalc");

	AbaseNPC_C_togglePoseCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function baseNPC.baseNPC_C.ExecuteUbergraph_baseNPC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbaseNPC_C::ExecuteUbergraph_baseNPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function baseNPC.baseNPC_C.ExecuteUbergraph_baseNPC");

	AbaseNPC_C_ExecuteUbergraph_baseNPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
