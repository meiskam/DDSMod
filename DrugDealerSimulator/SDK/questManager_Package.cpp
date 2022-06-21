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
	 * 		Name   -> Function questManager.questManager_C.ReportLaunderDoor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AlaunderDoor_C*                              Door                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::ReportLaunderDoor(class AlaunderDoor_C* Door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ReportLaunderDoor");
		
		AquestManager_C_ReportLaunderDoor_Params params {};
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.RamaExpand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::RamaExpand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.RamaExpand");
		
		AquestManager_C_RamaExpand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.fixTaskDuplicates
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::fixTaskDuplicates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.fixTaskDuplicates");
		
		AquestManager_C_fixTaskDuplicates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.countUnlockedHideouts
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllRented                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AquestManager_C::countUnlockedHideouts(bool* AllRented)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.countUnlockedHideouts");
		
		AquestManager_C_countUnlockedHideouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllRented != nullptr)
			*AllRented = params.AllRented;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.checkSecondZoneUnlock
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               checkPositive                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AquestManager_C::checkSecondZoneUnlock(bool* checkPositive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkSecondZoneUnlock");
		
		AquestManager_C_checkSecondZoneUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (checkPositive != nullptr)
			*checkPositive = params.checkPositive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.checkCanShowTip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CanShowTip                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AquestManager_C::checkCanShowTip(bool* CanShowTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkCanShowTip");
		
		AquestManager_C_checkCanShowTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanShowTip != nullptr)
			*CanShowTip = params.CanShowTip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.onLoadFixes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::onLoadFixes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.onLoadFixes");
		
		AquestManager_C_onLoadFixes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.questEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::questEnded(bool Success, int32_t QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.questEnded");
		
		AquestManager_C_questEnded_Params params {};
		params.Success = Success;
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.activateQuest
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::activateQuest(int32_t QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.activateQuest");
		
		AquestManager_C_activateQuest_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.addNewQuest
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        QuestNam                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        QuestShort                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        QuestDescription                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              QuestExp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestCash                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      QuestScriptNam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::addNewQuest(const class FText& QuestNam, const class FText& QuestShort, const class FText& QuestDescription, float QuestExp, int32_t QuestCash, const class FString& QuestScriptNam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.addNewQuest");
		
		AquestManager_C_addNewQuest_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.checkCanAddWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ok                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AquestManager_C::checkCanAddWidget(bool* ok)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkCanAddWidget");
		
		AquestManager_C_checkCanAddWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ok != nullptr)
			*ok = params.ok;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.playerAvailable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AquestManager_C::playerAvailable(bool* IsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.playerAvailable");
		
		AquestManager_C_playerAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAvailable != nullptr)
			*IsAvailable = params.IsAvailable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.checkTaskRelatedMarkers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TaskID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::checkTaskRelatedMarkers(int32_t TaskID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkTaskRelatedMarkers");
		
		AquestManager_C_checkTaskRelatedMarkers_Params params {};
		params.TaskID = TaskID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.checkDisplayNewTask
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::checkDisplayNewTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkDisplayNewTask");
		
		AquestManager_C_checkDisplayNewTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.playNarration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        MonologueText                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::playNarration(class USoundWave* Sound, const class FText& MonologueText, float* Length)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.playNarration");
		
		AquestManager_C_playNarration_Params params {};
		params.Sound = Sound;
		params.MonologueText = MonologueText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Length != nullptr)
			*Length = params.Length;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.markTaskStatus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EtaskStatuses                                      Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::markTaskStatus(int32_t ID, EtaskStatuses Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.markTaskStatus");
		
		AquestManager_C_markTaskStatus_Params params {};
		params.ID = ID;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.createNewTask
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        TaskName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        taskDecription                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              taskExpReward                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      FunctionOnComplete                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               creteTaskMarker                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     taskMarkerLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        MarkerTitle                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        MarkerDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               isSale                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SpecialTask                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AssignedID                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::createNewTask(const class FText& TaskName, const class FText& taskDecription, float taskExpReward, const class FString& FunctionOnComplete, bool creteTaskMarker, const struct FVector& taskMarkerLocation, const class FText& MarkerTitle, const class FText& MarkerDesc, bool isSale, int32_t QuestID, bool SpecialTask, int32_t* AssignedID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.createNewTask");
		
		AquestManager_C_createNewTask_Params params {};
		params.TaskName = TaskName;
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

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.setupDefaultReferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::setupDefaultReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.setupDefaultReferences");
		
		AquestManager_C_setupDefaultReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.UserConstructionScript");
		
		AquestManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AquestManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ReceiveBeginPlay");
		
		AquestManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.initialiseQuestManager
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::initialiseQuestManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.initialiseQuestManager");
		
		AquestManager_C_initialiseQuestManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.handOverMoney
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::handOverMoney()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.handOverMoney");
		
		AquestManager_C_handOverMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.newNarrationEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      stringIdentifier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::newNarrationEvent(const class FString& stringIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.newNarrationEvent");
		
		AquestManager_C_newNarrationEvent_Params params {};
		params.stringIdentifier = stringIdentifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.unlockCryptoNarr
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::unlockCryptoNarr()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.unlockCryptoNarr");
		
		AquestManager_C_unlockCryptoNarr_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.tryAtm02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::tryAtm02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tryAtm02");
		
		AquestManager_C_tryAtm02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.newGameTip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AquestManager_C::newGameTip(const class FText& Title, const class FText& Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.newGameTip");
		
		AquestManager_C_newGameTip_Params params {};
		params.Title = Title;
		params.Desc = Desc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.gameTipEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::gameTipEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.gameTipEnd");
		
		AquestManager_C_gameTipEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.FirstPoliceEncounter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::FirstPoliceEncounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.FirstPoliceEncounter");
		
		AquestManager_C_FirstPoliceEncounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.FirstDogEncounter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::FirstDogEncounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.FirstDogEncounter");
		
		AquestManager_C_FirstDogEncounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.delayNarration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::delayNarration(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.delayNarration");
		
		AquestManager_C_delayNarration_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieFirstCall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieFirstCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieFirstCall");
		
		AquestManager_C_eddieFirstCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.repeatEddieFirstCall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::repeatEddieFirstCall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieFirstCall");
		
		AquestManager_C_repeatEddieFirstCall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.firstMetEddie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::firstMetEddie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstMetEddie");
		
		AquestManager_C_firstMetEddie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retrievedFirstPackage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retrievedFirstPackage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retrievedFirstPackage");
		
		AquestManager_C_retrievedFirstPackage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.salesUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::salesUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.salesUpdate");
		
		AquestManager_C_salesUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.activatedShadyComm
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::activatedShadyComm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.activatedShadyComm");
		
		AquestManager_C_activatedShadyComm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.firstThreeOrders
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::firstThreeOrders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstThreeOrders");
		
		AquestManager_C_firstThreeOrders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.runIntroCredits
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::runIntroCredits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.runIntroCredits");
		
		AquestManager_C_runIntroCredits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.oneIntroCredit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::oneIntroCredit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.oneIntroCredit");
		
		AquestManager_C_oneIntroCredit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.firstWorkStation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::firstWorkStation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstWorkStation");
		
		AquestManager_C_firstWorkStation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.madeFirstOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::madeFirstOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.madeFirstOrder");
		
		AquestManager_C_madeFirstOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.workStationTask
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::workStationTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.workStationTask");
		
		AquestManager_C_workStationTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.firstOwnOrderReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TaskID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::firstOwnOrderReceived(int32_t TaskID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstOwnOrderReceived");
		
		AquestManager_C_firstOwnOrderReceived_Params params {};
		params.TaskID = TaskID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.tutWorkPlayerPutDrug
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::tutWorkPlayerPutDrug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tutWorkPlayerPutDrug");
		
		AquestManager_C_tutWorkPlayerPutDrug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.tutWorkPlayerPutContainer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::tutWorkPlayerPutContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tutWorkPlayerPutContainer");
		
		AquestManager_C_tutWorkPlayerPutContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.tutWorkPlayerAddedSubstance
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::tutWorkPlayerAddedSubstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tutWorkPlayerAddedSubstance");
		
		AquestManager_C_tutWorkPlayerAddedSubstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.tutWorkPlayerPackagedProduct
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::tutWorkPlayerPackagedProduct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tutWorkPlayerPackagedProduct");
		
		AquestManager_C_tutWorkPlayerPackagedProduct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.cartelRefundTip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::cartelRefundTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.cartelRefundTip");
		
		AquestManager_C_cartelRefundTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.introduceBank
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::introduceBank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.introduceBank");
		
		AquestManager_C_introduceBank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.atmActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::atmActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.atmActivated");
		
		AquestManager_C_atmActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.checkLevelUnlocks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::checkLevelUnlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkLevelUnlocks");
		
		AquestManager_C_checkLevelUnlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallApartmentRent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallApartmentRent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallApartmentRent");
		
		AquestManager_C_eddieCallApartmentRent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.apartmentRentMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::apartmentRentMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.apartmentRentMessage");
		
		AquestManager_C_apartmentRentMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.repeatEddieRent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::repeatEddieRent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieRent");
		
		AquestManager_C_repeatEddieRent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddieRent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddieRent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieRent");
		
		AquestManager_C_retryEddieRent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallPolice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallPolice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallPolice");
		
		AquestManager_C_eddieCallPolice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.repeatEddiePolice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::repeatEddiePolice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddiePolice");
		
		AquestManager_C_repeatEddiePolice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddiePolice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddiePolice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddiePolice");
		
		AquestManager_C_retryEddiePolice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallPoliceEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallPoliceEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallPoliceEnd");
		
		AquestManager_C_eddieCallPoliceEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallFurnitureShop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallFurnitureShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallFurnitureShop");
		
		AquestManager_C_eddieCallFurnitureShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.repeatEddieFurniture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::repeatEddieFurniture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieFurniture");
		
		AquestManager_C_repeatEddieFurniture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddieFurniture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddieFurniture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieFurniture");
		
		AquestManager_C_retryEddieFurniture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieFurnitureEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieFurnitureEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieFurnitureEnd");
		
		AquestManager_C_eddieFurnitureEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.apartmentModeFirstLaunch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::apartmentModeFirstLaunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.apartmentModeFirstLaunch");
		
		AquestManager_C_apartmentModeFirstLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.apartmentModeIntroduction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::apartmentModeIntroduction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.apartmentModeIntroduction");
		
		AquestManager_C_apartmentModeIntroduction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.apartmentViewerLaunch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::apartmentViewerLaunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.apartmentViewerLaunch");
		
		AquestManager_C_apartmentViewerLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.appRentHint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::appRentHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.appRentHint");
		
		AquestManager_C_appRentHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.playGameOverNarration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::playGameOverNarration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.playGameOverNarration");
		
		AquestManager_C_playGameOverNarration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallDrugstore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallDrugstore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallDrugstore");
		
		AquestManager_C_eddieCallDrugstore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.repeatEddieDrugstore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::repeatEddieDrugstore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieDrugstore");
		
		AquestManager_C_repeatEddieDrugstore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddieDrugstore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddieDrugstore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieDrugstore");
		
		AquestManager_C_retryEddieDrugstore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.drugStoreTask
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::drugStoreTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.drugStoreTask");
		
		AquestManager_C_drugStoreTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallBank
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallBank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallBank");
		
		AquestManager_C_eddieCallBank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.repeatEddieBank
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::repeatEddieBank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieBank");
		
		AquestManager_C_repeatEddieBank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddieBank
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddieBank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieBank");
		
		AquestManager_C_retryEddieBank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallLaunder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallLaunder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallLaunder");
		
		AquestManager_C_eddieCallLaunder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.repeatEddieLaunder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::repeatEddieLaunder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieLaunder");
		
		AquestManager_C_repeatEddieLaunder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddieLaunder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddieLaunder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieLaunder");
		
		AquestManager_C_retryEddieLaunder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieEndBank
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieEndBank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieEndBank");
		
		AquestManager_C_eddieEndBank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieEndLaunder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieEndLaunder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieEndLaunder");
		
		AquestManager_C_eddieEndLaunder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.ConfirmedOneOrder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::ConfirmedOneOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ConfirmedOneOrder");
		
		AquestManager_C_ConfirmedOneOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.keyFinder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::keyFinder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.keyFinder");
		
		AquestManager_C_keyFinder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.rentedFirstApartment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     newApartmentLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::rentedFirstApartment(const struct FVector& newApartmentLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.rentedFirstApartment");
		
		AquestManager_C_rentedFirstApartment_Params params {};
		params.newApartmentLocation = newApartmentLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.PlayerLeftApartment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::PlayerLeftApartment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.PlayerLeftApartment");
		
		AquestManager_C_PlayerLeftApartment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.openEddieFurnitureGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::openEddieFurnitureGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.openEddieFurnitureGate");
		
		AquestManager_C_openEddieFurnitureGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.longHireDealer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::longHireDealer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longHireDealer");
		
		AquestManager_C_longHireDealer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.tryWS_Task
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::tryWS_Task()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tryWS_Task");
		
		AquestManager_C_tryWS_Task_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.longAddict
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::longAddict()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longAddict");
		
		AquestManager_C_longAddict_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.longUnlockedAreas
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::longUnlockedAreas()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longUnlockedAreas");
		
		AquestManager_C_longUnlockedAreas_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.taskGainTerritory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::taskGainTerritory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.taskGainTerritory");
		
		AquestManager_C_taskGainTerritory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.putOneSpray
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::putOneSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.putOneSpray");
		
		AquestManager_C_putOneSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.gaveAwayFreeSample
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::gaveAwayFreeSample()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.gaveAwayFreeSample");
		
		AquestManager_C_gaveAwayFreeSample_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.launderCash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::launderCash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.launderCash");
		
		AquestManager_C_launderCash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.addCashToLaunder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::addCashToLaunder(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.addCashToLaunder");
		
		AquestManager_C_addCashToLaunder_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ReceiveTick");
		
		AquestManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallGangsters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallGangsters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallGangsters");
		
		AquestManager_C_eddieCallGangsters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.repeatEddieGangsters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::repeatEddieGangsters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.repeatEddieGangsters");
		
		AquestManager_C_repeatEddieGangsters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddieGangsters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddieGangsters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieGangsters");
		
		AquestManager_C_retryEddieGangsters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.spraySymbolSelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::spraySymbolSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.spraySymbolSelection");
		
		AquestManager_C_spraySymbolSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.introductionBallena
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::introductionBallena()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.introductionBallena");
		
		AquestManager_C_introductionBallena_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.introductionKeiji
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::introductionKeiji()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.introductionKeiji");
		
		AquestManager_C_introductionKeiji_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.unlockGangKeiji
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::unlockGangKeiji()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.unlockGangKeiji");
		
		AquestManager_C_unlockGangKeiji_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.unlockGangBallena
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::unlockGangBallena()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.unlockGangBallena");
		
		AquestManager_C_unlockGangBallena_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.forceUnlockSecondZone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::forceUnlockSecondZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.forceUnlockSecondZone");
		
		AquestManager_C_forceUnlockSecondZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.longGetBig
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::longGetBig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longGetBig");
		
		AquestManager_C_longGetBig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.longGainGangRespect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::longGainGangRespect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longGainGangRespect");
		
		AquestManager_C_longGainGangRespect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.checkDomination
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::checkDomination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.checkDomination");
		
		AquestManager_C_checkDomination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.longDomination
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::longDomination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longDomination");
		
		AquestManager_C_longDomination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.taskUnlockDowntown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::taskUnlockDowntown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.taskUnlockDowntown");
		
		AquestManager_C_taskUnlockDowntown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.fugitiveComment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::fugitiveComment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.fugitiveComment");
		
		AquestManager_C_fugitiveComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.quickHint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EquickHintType                                     Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::quickHint(const class FText& Text, EquickHintType Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.quickHint");
		
		AquestManager_C_quickHint_Params params {};
		params.Text = Text;
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.tryDisplayQuickHint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::tryDisplayQuickHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.tryDisplayQuickHint");
		
		AquestManager_C_tryDisplayQuickHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.policeHoursHint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::policeHoursHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.policeHoursHint");
		
		AquestManager_C_policeHoursHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.firstOrderSpawned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::firstOrderSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.firstOrderSpawned");
		
		AquestManager_C_firstOrderSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.longMoreAreas01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::longMoreAreas01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longMoreAreas01");
		
		AquestManager_C_longMoreAreas01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.longMoreAreas02
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::longMoreAreas02()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longMoreAreas02");
		
		AquestManager_C_longMoreAreas02_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.longMoreAreas03
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::longMoreAreas03()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.longMoreAreas03");
		
		AquestManager_C_longMoreAreas03_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.openWeedGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::openWeedGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.openWeedGate");
		
		AquestManager_C_openWeedGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.closeWeedGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::closeWeedGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.closeWeedGate");
		
		AquestManager_C_closeWeedGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.displayWeedTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::displayWeedTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.displayWeedTutorial");
		
		AquestManager_C_displayWeedTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.displayPlantHints
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               indoor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AquestManager_C::displayPlantHints(bool indoor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.displayPlantHints");
		
		AquestManager_C_displayPlantHints_Params params {};
		params.indoor = indoor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallPsychedelics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallPsychedelics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallPsychedelics");
		
		AquestManager_C_eddieCallPsychedelics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieRepeatPsychedelics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieRepeatPsychedelics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieRepeatPsychedelics");
		
		AquestManager_C_eddieRepeatPsychedelics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddiePsychedelics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddiePsychedelics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddiePsychedelics");
		
		AquestManager_C_retryEddiePsychedelics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallPsychedelicsEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallPsychedelicsEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallPsychedelicsEnd");
		
		AquestManager_C_eddieCallPsychedelicsEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieRepeatPsychedelicsEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieRepeatPsychedelicsEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieRepeatPsychedelicsEnd");
		
		AquestManager_C_eddieRepeatPsychedelicsEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddiePsychedelicsEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddiePsychedelicsEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddiePsychedelicsEnd");
		
		AquestManager_C_retryEddiePsychedelicsEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieEndPsychedelics
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieEndPsychedelics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieEndPsychedelics");
		
		AquestManager_C_eddieEndPsychedelics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieEndPsychedelicsEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieEndPsychedelicsEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieEndPsychedelicsEnd");
		
		AquestManager_C_eddieEndPsychedelicsEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallSectorC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallSectorC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallSectorC");
		
		AquestManager_C_eddieCallSectorC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieRepeatSectorc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieRepeatSectorc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieRepeatSectorc");
		
		AquestManager_C_eddieRepeatSectorc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddieSecotrc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddieSecotrc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieSecotrc");
		
		AquestManager_C_retryEddieSecotrc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieCallLaundry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieCallLaundry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieCallLaundry");
		
		AquestManager_C_eddieCallLaundry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieRepeatLaundry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieRepeatLaundry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieRepeatLaundry");
		
		AquestManager_C_eddieRepeatLaundry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.retryEddieLaundry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::retryEddieLaundry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.retryEddieLaundry");
		
		AquestManager_C_retryEddieLaundry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieEndSectorc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieEndSectorc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieEndSectorc");
		
		AquestManager_C_eddieEndSectorc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.eddieEndLaundry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::eddieEndLaundry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.eddieEndLaundry");
		
		AquestManager_C_eddieEndLaundry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.UnlockSectorC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::UnlockSectorC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.UnlockSectorC");
		
		AquestManager_C_UnlockSectorC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		AquestManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.TrySectorC_Quests
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::TrySectorC_Quests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.TrySectorC_Quests");
		
		AquestManager_C_TrySectorC_Quests_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.NewLaunderHidout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::NewLaunderHidout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.NewLaunderHidout");
		
		AquestManager_C_NewLaunderHidout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.ReopenNewLaunder
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AquestManager_C::ReopenNewLaunder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ReopenNewLaunder");
		
		AquestManager_C_ReopenNewLaunder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function questManager.questManager_C.ExecuteUbergraph_questManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AquestManager_C::ExecuteUbergraph_questManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function questManager.questManager_C.ExecuteUbergraph_questManager");
		
		AquestManager_C_ExecuteUbergraph_questManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AquestManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AquestManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass questManager.questManager_C");
		return ptr;
	}

}


