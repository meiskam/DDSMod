
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

// Function questManager.questManager_C.fixTaskDuplicates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AquestManager_C::fixTaskDuplicates()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.fixTaskDuplicates");

	AquestManager_C_fixTaskDuplicates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.countUnlockedHideouts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllRented                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::countUnlockedHideouts(bool* AllRented)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.countUnlockedHideouts");

	AquestManager_C_countUnlockedHideouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllRented != nullptr)
		*AllRented = params.AllRented;
}


// Function questManager.questManager_C.checkSecondZoneUnlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           checkPositive                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::checkSecondZoneUnlock(bool* checkPositive)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkSecondZoneUnlock");

	AquestManager_C_checkSecondZoneUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (checkPositive != nullptr)
		*checkPositive = params.checkPositive;
}


// Function questManager.questManager_C.checkCanShowTip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanShowTip                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::checkCanShowTip(bool* CanShowTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkCanShowTip");

	AquestManager_C_checkCanShowTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanShowTip != nullptr)
		*CanShowTip = params.CanShowTip;
}


// Function questManager.questManager_C.onLoadFixes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AquestManager_C::onLoadFixes()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.onLoadFixes");

	AquestManager_C_onLoadFixes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.questEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::questEnded(bool Success, int QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.questEnded");

	AquestManager_C_questEnded_Params params;
	params.Success = Success;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.activateQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::activateQuest(int QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.activateQuest");

	AquestManager_C_activateQuest_Params params;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.addNewQuest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   QuestNam                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   QuestShort                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   QuestDescription               (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          QuestExp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            QuestCash                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 QuestScriptNam                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AquestManager_C::addNewQuest(const struct FText& QuestNam, const struct FText& QuestShort, const struct FText& QuestDescription, float QuestExp, int QuestCash, const struct FString& QuestScriptNam)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.addNewQuest");

	AquestManager_C_addNewQuest_Params params;
	params.QuestNam = QuestNam;
	params.QuestShort = QuestShort;
	params.QuestDescription = QuestDescription;
	params.QuestExp = QuestExp;
	params.QuestCash = QuestCash;
	params.QuestScriptNam = QuestScriptNam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.checkCanAddWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ok                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::checkCanAddWidget(bool* ok)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkCanAddWidget");

	AquestManager_C_checkCanAddWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ok != nullptr)
		*ok = params.ok;
}


// Function questManager.questManager_C.playerAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isAvailable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::playerAvailable(bool* isAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.playerAvailable");

	AquestManager_C_playerAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isAvailable != nullptr)
		*isAvailable = params.isAvailable;
}


// Function questManager.questManager_C.checkTaskRelatedMarkers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TaskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::checkTaskRelatedMarkers(int TaskID)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkTaskRelatedMarkers");

	AquestManager_C_checkTaskRelatedMarkers_Params params;
	params.TaskID = TaskID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.checkDisplayNewTask
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AquestManager_C::checkDisplayNewTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkDisplayNewTask");

	AquestManager_C_checkDisplayNewTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.playNarration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   MonologueText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::playNarration(class USoundWave* Sound, const struct FText& MonologueText, float* Length)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.playNarration");

	AquestManager_C_playNarration_Params params;
	params.Sound = Sound;
	params.MonologueText = MonologueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function questManager.questManager_C.markTaskStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EtaskStatuses>     Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::markTaskStatus(int ID, TEnumAsByte<EtaskStatuses> Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.markTaskStatus");

	AquestManager_C_markTaskStatus_Params params;
	params.ID = ID;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.createNewTask
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   taskName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   taskDecription                 (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          taskExpReward                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FunctionOnComplete             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           creteTaskMarker                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 taskMarkerLocation             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   MarkerTitle                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   MarkerDesc                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           isSale                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SpecialTask                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AssignedID                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::createNewTask(const struct FText& taskName, const struct FText& taskDecription, float taskExpReward, const struct FString& FunctionOnComplete, bool creteTaskMarker, const struct FVector& taskMarkerLocation, const struct FText& MarkerTitle, const struct FText& MarkerDesc, bool isSale, int QuestID, bool SpecialTask, int* AssignedID)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.createNewTask");

	AquestManager_C_createNewTask_Params params;
	params.taskName = taskName;
	params.taskDecription = taskDecription;
	params.taskExpReward = taskExpReward;
	params.FunctionOnComplete = FunctionOnComplete;
	params.creteTaskMarker = creteTaskMarker;
	params.taskMarkerLocation = taskMarkerLocation;
	params.MarkerTitle = MarkerTitle;
	params.MarkerDesc = MarkerDesc;
	params.isSale = isSale;
	params.QuestID = QuestID;
	params.SpecialTask = SpecialTask;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssignedID != nullptr)
		*AssignedID = params.AssignedID;
}


// Function questManager.questManager_C.setupDefaultReferences
// (Public, BlueprintCallable, BlueprintEvent)

void AquestManager_C::setupDefaultReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.setupDefaultReferences");

	AquestManager_C_setupDefaultReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AquestManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.UserConstructionScript");

	AquestManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AquestManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ReceiveBeginPlay");

	AquestManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.initialiseQuestManager
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::initialiseQuestManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.initialiseQuestManager");

	AquestManager_C_initialiseQuestManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.handOverMoney
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::handOverMoney()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.handOverMoney");

	AquestManager_C_handOverMoney_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.newNarrationEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 stringIdentifier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AquestManager_C::newNarrationEvent(const struct FString& stringIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.newNarrationEvent");

	AquestManager_C_newNarrationEvent_Params params;
	params.stringIdentifier = stringIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.unlockCryptoNarr
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::unlockCryptoNarr()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.unlockCryptoNarr");

	AquestManager_C_unlockCryptoNarr_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.tryAtm02
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::tryAtm02()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tryAtm02");

	AquestManager_C_tryAtm02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.newGameTip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Desc                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AquestManager_C::newGameTip(const struct FText& Title, const struct FText& Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.newGameTip");

	AquestManager_C_newGameTip_Params params;
	params.Title = Title;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.gameTipEnd
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::gameTipEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.gameTipEnd");

	AquestManager_C_gameTipEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.FirstPoliceEncounter
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::FirstPoliceEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.FirstPoliceEncounter");

	AquestManager_C_FirstPoliceEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.FirstDogEncounter
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::FirstDogEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.FirstDogEncounter");

	AquestManager_C_FirstDogEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.delayNarration
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AquestManager_C::delayNarration(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.delayNarration");

	AquestManager_C_delayNarration_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieFirstCall
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieFirstCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieFirstCall");

	AquestManager_C_eddieFirstCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.repeatEddieFirstCall
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::repeatEddieFirstCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieFirstCall");

	AquestManager_C_repeatEddieFirstCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.firstMetEddie
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::firstMetEddie()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstMetEddie");

	AquestManager_C_firstMetEddie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.retrievedFirstPackage
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::retrievedFirstPackage()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retrievedFirstPackage");

	AquestManager_C_retrievedFirstPackage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.salesUpdate
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::salesUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.salesUpdate");

	AquestManager_C_salesUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.activatedShadyComm
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::activatedShadyComm()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.activatedShadyComm");

	AquestManager_C_activatedShadyComm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.firstThreeOrders
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::firstThreeOrders()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstThreeOrders");

	AquestManager_C_firstThreeOrders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.runIntroCredits
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::runIntroCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.runIntroCredits");

	AquestManager_C_runIntroCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.oneIntroCredit
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::oneIntroCredit()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.oneIntroCredit");

	AquestManager_C_oneIntroCredit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.firstWorkStation
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::firstWorkStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstWorkStation");

	AquestManager_C_firstWorkStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.madeFirstOrder
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::madeFirstOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.madeFirstOrder");

	AquestManager_C_madeFirstOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.workStationTask
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::workStationTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.workStationTask");

	AquestManager_C_workStationTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.firstOwnOrderReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TaskID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::firstOwnOrderReceived(int TaskID)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstOwnOrderReceived");

	AquestManager_C_firstOwnOrderReceived_Params params;
	params.TaskID = TaskID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.tutWorkPlayerPutDrug
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::tutWorkPlayerPutDrug()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tutWorkPlayerPutDrug");

	AquestManager_C_tutWorkPlayerPutDrug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.tutWorkPlayerPutContainer
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::tutWorkPlayerPutContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tutWorkPlayerPutContainer");

	AquestManager_C_tutWorkPlayerPutContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.tutWorkPlayerAddedSubstance
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::tutWorkPlayerAddedSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tutWorkPlayerAddedSubstance");

	AquestManager_C_tutWorkPlayerAddedSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.tutWorkPlayerPackagedProduct
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::tutWorkPlayerPackagedProduct()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tutWorkPlayerPackagedProduct");

	AquestManager_C_tutWorkPlayerPackagedProduct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.cartelRefundTip
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::cartelRefundTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.cartelRefundTip");

	AquestManager_C_cartelRefundTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.introduceBank
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::introduceBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.introduceBank");

	AquestManager_C_introduceBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.atmActivated
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::atmActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.atmActivated");

	AquestManager_C_atmActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.checkLevelUnlocks
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::checkLevelUnlocks()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkLevelUnlocks");

	AquestManager_C_checkLevelUnlocks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieCallApartmentRent
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieCallApartmentRent()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallApartmentRent");

	AquestManager_C_eddieCallApartmentRent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.apartmentRentMessage
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::apartmentRentMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.apartmentRentMessage");

	AquestManager_C_apartmentRentMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.repeatEddieRent
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::repeatEddieRent()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieRent");

	AquestManager_C_repeatEddieRent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.retryEddieRent
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::retryEddieRent()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieRent");

	AquestManager_C_retryEddieRent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieCallPolice
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieCallPolice()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallPolice");

	AquestManager_C_eddieCallPolice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.repeatEddiePolice
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::repeatEddiePolice()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddiePolice");

	AquestManager_C_repeatEddiePolice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.retryEddiePolice
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::retryEddiePolice()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddiePolice");

	AquestManager_C_retryEddiePolice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieCallPoliceEnd
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieCallPoliceEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallPoliceEnd");

	AquestManager_C_eddieCallPoliceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieCallFurnitureShop
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieCallFurnitureShop()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallFurnitureShop");

	AquestManager_C_eddieCallFurnitureShop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.repeatEddieFurniture
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::repeatEddieFurniture()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieFurniture");

	AquestManager_C_repeatEddieFurniture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.retryEddieFurniture
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::retryEddieFurniture()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieFurniture");

	AquestManager_C_retryEddieFurniture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieFurnitureEnd
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieFurnitureEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieFurnitureEnd");

	AquestManager_C_eddieFurnitureEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.apartmentModeFirstLaunch
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::apartmentModeFirstLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.apartmentModeFirstLaunch");

	AquestManager_C_apartmentModeFirstLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.apartmentModeIntroduction
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::apartmentModeIntroduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.apartmentModeIntroduction");

	AquestManager_C_apartmentModeIntroduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.apartmentViewerLaunch
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::apartmentViewerLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.apartmentViewerLaunch");

	AquestManager_C_apartmentViewerLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.appRentHint
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::appRentHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.appRentHint");

	AquestManager_C_appRentHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.playGameOverNarration
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::playGameOverNarration()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.playGameOverNarration");

	AquestManager_C_playGameOverNarration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieCallDrugstore
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieCallDrugstore()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallDrugstore");

	AquestManager_C_eddieCallDrugstore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.repeatEddieDrugstore
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::repeatEddieDrugstore()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieDrugstore");

	AquestManager_C_repeatEddieDrugstore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.retryEddieDrugstore
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::retryEddieDrugstore()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieDrugstore");

	AquestManager_C_retryEddieDrugstore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.drugStoreTask
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::drugStoreTask()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.drugStoreTask");

	AquestManager_C_drugStoreTask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieCallBank
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieCallBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallBank");

	AquestManager_C_eddieCallBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.repeatEddieBank
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::repeatEddieBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieBank");

	AquestManager_C_repeatEddieBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.retryEddieBank
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::retryEddieBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieBank");

	AquestManager_C_retryEddieBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieCallLaunder
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieCallLaunder()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallLaunder");

	AquestManager_C_eddieCallLaunder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.repeatEddieLaunder
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::repeatEddieLaunder()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieLaunder");

	AquestManager_C_repeatEddieLaunder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.retryEddieLaunder
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::retryEddieLaunder()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieLaunder");

	AquestManager_C_retryEddieLaunder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieEndBank
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieEndBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieEndBank");

	AquestManager_C_eddieEndBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieEndLaunder
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieEndLaunder()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieEndLaunder");

	AquestManager_C_eddieEndLaunder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.ConfirmedOneOrder
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::ConfirmedOneOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ConfirmedOneOrder");

	AquestManager_C_ConfirmedOneOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.keyFinder
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::keyFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.keyFinder");

	AquestManager_C_keyFinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.rentedFirstApartment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 newApartmentLocation           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::rentedFirstApartment(const struct FVector& newApartmentLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.rentedFirstApartment");

	AquestManager_C_rentedFirstApartment_Params params;
	params.newApartmentLocation = newApartmentLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.PlayerLeftApartment
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::PlayerLeftApartment()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.PlayerLeftApartment");

	AquestManager_C_PlayerLeftApartment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.openEddieFurnitureGate
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::openEddieFurnitureGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.openEddieFurnitureGate");

	AquestManager_C_openEddieFurnitureGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.longHireDealer
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::longHireDealer()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longHireDealer");

	AquestManager_C_longHireDealer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.tryWS_Task
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::tryWS_Task()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tryWS_Task");

	AquestManager_C_tryWS_Task_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.longAddict
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::longAddict()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longAddict");

	AquestManager_C_longAddict_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.longUnlockedAreas
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::longUnlockedAreas()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longUnlockedAreas");

	AquestManager_C_longUnlockedAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.taskGainTerritory
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::taskGainTerritory()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.taskGainTerritory");

	AquestManager_C_taskGainTerritory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.putOneSpray
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::putOneSpray()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.putOneSpray");

	AquestManager_C_putOneSpray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.gaveAwayFreeSample
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::gaveAwayFreeSample()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.gaveAwayFreeSample");

	AquestManager_C_gaveAwayFreeSample_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.launderCash
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::launderCash()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.launderCash");

	AquestManager_C_launderCash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.addCashToLaunder
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::addCashToLaunder(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.addCashToLaunder");

	AquestManager_C_addCashToLaunder_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ReceiveTick");

	AquestManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.eddieCallGangsters
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::eddieCallGangsters()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallGangsters");

	AquestManager_C_eddieCallGangsters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.repeatEddieGangsters
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::repeatEddieGangsters()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieGangsters");

	AquestManager_C_repeatEddieGangsters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.retryEddieGangsters
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::retryEddieGangsters()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieGangsters");

	AquestManager_C_retryEddieGangsters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.spraySymbolSelection
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::spraySymbolSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.spraySymbolSelection");

	AquestManager_C_spraySymbolSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.introductionBallena
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::introductionBallena()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.introductionBallena");

	AquestManager_C_introductionBallena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.introductionKeiji
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::introductionKeiji()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.introductionKeiji");

	AquestManager_C_introductionKeiji_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.unlockGangKeiji
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::unlockGangKeiji()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.unlockGangKeiji");

	AquestManager_C_unlockGangKeiji_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.unlockGangBallena
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::unlockGangBallena()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.unlockGangBallena");

	AquestManager_C_unlockGangBallena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.forceUnlockSecondZone
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::forceUnlockSecondZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.forceUnlockSecondZone");

	AquestManager_C_forceUnlockSecondZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.longGetBig
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::longGetBig()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longGetBig");

	AquestManager_C_longGetBig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.longGainGangRespect
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::longGainGangRespect()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longGainGangRespect");

	AquestManager_C_longGainGangRespect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.checkDomination
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::checkDomination()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkDomination");

	AquestManager_C_checkDomination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.longDomination
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::longDomination()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longDomination");

	AquestManager_C_longDomination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.taskUnlockDowntown
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::taskUnlockDowntown()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.taskUnlockDowntown");

	AquestManager_C_taskUnlockDowntown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.fugitiveComment
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::fugitiveComment()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.fugitiveComment");

	AquestManager_C_fugitiveComment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.quickHint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EquickHintType>    Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::quickHint(const struct FText& Text, TEnumAsByte<EquickHintType> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.quickHint");

	AquestManager_C_quickHint_Params params;
	params.Text = Text;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.tryDisplayQuickHint
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::tryDisplayQuickHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tryDisplayQuickHint");

	AquestManager_C_tryDisplayQuickHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.policeHoursHint
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::policeHoursHint()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.policeHoursHint");

	AquestManager_C_policeHoursHint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.firstOrderSpawned
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::firstOrderSpawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstOrderSpawned");

	AquestManager_C_firstOrderSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.longMoreAreas01
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::longMoreAreas01()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longMoreAreas01");

	AquestManager_C_longMoreAreas01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.longMoreAreas02
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::longMoreAreas02()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longMoreAreas02");

	AquestManager_C_longMoreAreas02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.longMoreAreas03
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::longMoreAreas03()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longMoreAreas03");

	AquestManager_C_longMoreAreas03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.openWeedGate
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::openWeedGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.openWeedGate");

	AquestManager_C_openWeedGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.closeWeedGate
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::closeWeedGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.closeWeedGate");

	AquestManager_C_closeWeedGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.displayWeedTutorial
// (BlueprintCallable, BlueprintEvent)

void AquestManager_C::displayWeedTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.displayWeedTutorial");

	AquestManager_C_displayWeedTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.displayPlantHints
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           indoor                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::displayPlantHints(bool indoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.displayPlantHints");

	AquestManager_C_displayPlantHints_Params params;
	params.indoor = indoor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function questManager.questManager_C.ExecuteUbergraph_questManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AquestManager_C::ExecuteUbergraph_questManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ExecuteUbergraph_questManager");

	AquestManager_C_ExecuteUbergraph_questManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
