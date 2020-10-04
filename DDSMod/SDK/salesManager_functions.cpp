
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function salesManager.salesManager_C.countAddictedClients
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ClientCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::countAddictedClients(int* ClientCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.countAddictedClients");

	AsalesManager_C_countAddictedClients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientCount != nullptr)
		*ClientCount = params.ClientCount;
}


// Function salesManager.salesManager_C.countMaxDealers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumDealers                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::countMaxDealers(int* NumDealers)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.countMaxDealers");

	AsalesManager_C_countMaxDealers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumDealers != nullptr)
		*NumDealers = params.NumDealers;
}


// Function salesManager.salesManager_C.adaptDifficulty
// (Public, BlueprintCallable, BlueprintEvent)

void AsalesManager_C::adaptDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.adaptDifficulty");

	AsalesManager_C_adaptDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.generateClientMessage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           dealer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CashMeet                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DrugNam                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           priceHigh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (Parm, OutParm)

void AsalesManager_C::generateClientMessage(bool dealer, bool CashMeet, int Quantity, const struct FText& DrugNam, bool priceHigh, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.generateClientMessage");

	AsalesManager_C_generateClientMessage_Params params;
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


// Function salesManager.salesManager_C.recalcClientCount
// (Public, BlueprintCallable, BlueprintEvent)

void AsalesManager_C::recalcClientCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.recalcClientCount");

	AsalesManager_C_recalcClientCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.tryDisplayClientState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AsalesManager_C::tryDisplayClientState()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.tryDisplayClientState");

	AsalesManager_C_tryDisplayClientState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.displayClientAddictedPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::displayClientAddictedPopup(int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.displayClientAddictedPopup");

	AsalesManager_C_displayClientAddictedPopup_Params params;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.generateClientName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           male                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ClientName                     (Parm, OutParm)

void AsalesManager_C::generateClientName(bool male, struct FText* ClientName)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.generateClientName");

	AsalesManager_C_generateClientName_Params params;
	params.male = male;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientName != nullptr)
		*ClientName = params.ClientName;
}


// Function salesManager.salesManager_C.updateSkillMultipliers
// (Public, BlueprintCallable, BlueprintEvent)

void AsalesManager_C::updateSkillMultipliers()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.updateSkillMultipliers");

	AsalesManager_C_updateSkillMultipliers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.spawnAreaSampleClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ClientArea                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AsalesManager_C::spawnAreaSampleClient(const struct FString& ClientArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.spawnAreaSampleClient");

	AsalesManager_C_spawnAreaSampleClient_Params params;
	params.ClientArea = ClientArea;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.updateAreaTimeMultiplier
// (Public, BlueprintCallable, BlueprintEvent)

void AsalesManager_C::updateAreaTimeMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.updateAreaTimeMultiplier");

	AsalesManager_C_updateAreaTimeMultiplier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.loopCheckPrices
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           someAffordable                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::loopCheckPrices(bool* someAffordable)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.loopCheckPrices");

	AsalesManager_C_loopCheckPrices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (someAffordable != nullptr)
		*someAffordable = params.someAffordable;
}


// Function salesManager.salesManager_C.getOrderedDrugName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            DrugIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Output                         (Parm, OutParm)

void AsalesManager_C::getOrderedDrugName(int DrugIndex, struct FText* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.getOrderedDrugName");

	AsalesManager_C_getOrderedDrugName_Params params;
	params.DrugIndex = DrugIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function salesManager.salesManager_C.checkClientInterested
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DrugDemandedID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interested                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           priceHigh                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::checkClientInterested(int ClientId, int DrugDemandedID, bool* Interested, bool* priceHigh)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.checkClientInterested");

	AsalesManager_C_checkClientInterested_Params params;
	params.ClientId = ClientId;
	params.DrugDemandedID = DrugDemandedID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interested != nullptr)
		*Interested = params.Interested;
	if (priceHigh != nullptr)
		*priceHigh = params.priceHigh;
}


// Function salesManager.salesManager_C.badSaleResponse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClientLost                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::badSaleResponse(bool ClientLost, int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.badSaleResponse");

	AsalesManager_C_badSaleResponse_Params params;
	params.ClientLost = ClientLost;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.sendDealerOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::sendDealerOffer(int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.sendDealerOffer");

	AsalesManager_C_sendDealerOffer_Params params;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.dealerOfferChance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AsalesManager_C::dealerOfferChance(int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.dealerOfferChance");

	AsalesManager_C_dealerOfferChance_Params params;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function salesManager.salesManager_C.odMessageResponse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dealer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::odMessageResponse(bool dealer, int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.odMessageResponse");

	AsalesManager_C_odMessageResponse_Params params;
	params.dealer = dealer;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.showODPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           dealer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::showODPopup(bool dealer, int ClientId)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.showODPopup");

	AsalesManager_C_showODPopup_Params params;
	params.dealer = dealer;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.addStatsOD
// (Public, BlueprintCallable, BlueprintEvent)

void AsalesManager_C::addStatsOD()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.addStatsOD");

	AsalesManager_C_addStatsOD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.selectDrugID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DrugID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::selectDrugID(int ClientId, int* DrugID)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.selectDrugID");

	AsalesManager_C_selectDrugID_Params params;
	params.ClientId = ClientId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DrugID != nullptr)
		*DrugID = params.DrugID;
}


// Function salesManager.salesManager_C.timeShift
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeShiftHours                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeShiftMinutes               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::timeShift(float TimeShiftHours, float TimeShiftMinutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.timeShift");

	AsalesManager_C_timeShift_Params params;
	params.TimeShiftHours = TimeShiftHours;
	params.TimeShiftMinutes = TimeShiftMinutes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.affectBadReputation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReputationLoss                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::affectBadReputation(float ReputationLoss)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.affectBadReputation");

	AsalesManager_C_affectBadReputation_Params params;
	params.ReputationLoss = ReputationLoss;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.calcIntervalMultiplier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          baseInterval                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutInterval                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::calcIntervalMultiplier(float baseInterval, float* OutInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.calcIntervalMultiplier");

	AsalesManager_C_calcIntervalMultiplier_Params params;
	params.baseInterval = baseInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInterval != nullptr)
		*OutInterval = params.OutInterval;
}


// Function salesManager.salesManager_C.selectClientArea
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SelectedAreaID                 (Parm, OutParm, ZeroConstructor)

void AsalesManager_C::selectClientArea(struct FString* SelectedAreaID)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.selectClientArea");

	AsalesManager_C_selectClientArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedAreaID != nullptr)
		*SelectedAreaID = params.SelectedAreaID;
}


// Function salesManager.salesManager_C.getOrderedDrugIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            RandomIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::getOrderedDrugIndex(int RandomIndex, int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.getOrderedDrugIndex");

	AsalesManager_C_getOrderedDrugIndex_Params params;
	params.RandomIndex = RandomIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;
}


// Function salesManager.salesManager_C.refreshAvailableDrugs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DrugsAreAvailable              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::refreshAvailableDrugs(bool* DrugsAreAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.refreshAvailableDrugs");

	AsalesManager_C_refreshAvailableDrugs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DrugsAreAvailable != nullptr)
		*DrugsAreAvailable = params.DrugsAreAvailable;
}


// Function salesManager.salesManager_C.countClientStatistics
// (Public, BlueprintCallable, BlueprintEvent)

void AsalesManager_C::countClientStatistics()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.countClientStatistics");

	AsalesManager_C_countClientStatistics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.calcOrderQuantity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            inClientID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           nightTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           priceHigh                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutQuantity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::calcOrderQuantity(int inClientID, bool nightTime, bool priceHigh, int* OutQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.calcOrderQuantity");

	AsalesManager_C_calcOrderQuantity_Params params;
	params.inClientID = inClientID;
	params.nightTime = nightTime;
	params.priceHigh = priceHigh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutQuantity != nullptr)
		*OutQuantity = params.OutQuantity;
}


// Function salesManager.salesManager_C.clientSendNewOrder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ClientId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           nightTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::clientSendNewOrder(int ClientId, bool nightTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.clientSendNewOrder");

	AsalesManager_C_clientSendNewOrder_Params params;
	params.ClientId = ClientId;
	params.nightTime = nightTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.clientOrderCountdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::clientOrderCountdown(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.clientOrderCountdown");

	AsalesManager_C_clientOrderCountdown_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.generateNewClient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::generateNewClient(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.generateNewClient");

	AsalesManager_C_generateNewClient_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsalesManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.UserConstructionScript");

	AsalesManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsalesManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ReceiveBeginPlay");

	AsalesManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ReceiveTick");

	AsalesManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.tryInitialise
// (BlueprintCallable, BlueprintEvent)

void AsalesManager_C::tryInitialise()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.tryInitialise");

	AsalesManager_C_tryInitialise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.checkClientState
// (BlueprintCallable, BlueprintEvent)

void AsalesManager_C::checkClientState()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.checkClientState");

	AsalesManager_C_checkClientState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.trySpawnSampleGuy
// (BlueprintCallable, BlueprintEvent)

void AsalesManager_C::trySpawnSampleGuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.trySpawnSampleGuy");

	AsalesManager_C_trySpawnSampleGuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function salesManager.salesManager_C.ExecuteUbergraph_salesManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsalesManager_C::ExecuteUbergraph_salesManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function salesManager.salesManager_C.ExecuteUbergraph_salesManager");

	AsalesManager_C_ExecuteUbergraph_salesManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
