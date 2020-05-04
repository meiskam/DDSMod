
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

// Function statisticsManager.statisticsManager_C.adaptDifficulty
// (Public, BlueprintCallable, BlueprintEvent)

void AstatisticsManager_C::adaptDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.adaptDifficulty");

	AstatisticsManager_C_adaptDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.tryDisplayExpPopup
// (Public, BlueprintCallable, BlueprintEvent)

void AstatisticsManager_C::tryDisplayExpPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.tryDisplayExpPopup");

	AstatisticsManager_C_tryDisplayExpPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.upgradeSkill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SkillID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          UpgradeAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::upgradeSkill(int SkillID, float UpgradeAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.upgradeSkill");

	AstatisticsManager_C_upgradeSkill_Params params;
	params.SkillID = SkillID;
	params.UpgradeAmount = UpgradeAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.subtractSkillPoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::subtractSkillPoints(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.subtractSkillPoints");

	AstatisticsManager_C_subtractSkillPoints_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.levelUpFunctions
// (Public, BlueprintCallable, BlueprintEvent)

void AstatisticsManager_C::levelUpFunctions()
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.levelUpFunctions");

	AstatisticsManager_C_levelUpFunctions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.canAddInfoWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanAddWidget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::canAddInfoWidget(bool* CanAddWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.canAddInfoWidget");

	AstatisticsManager_C_canAddInfoWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanAddWidget != nullptr)
		*CanAddWidget = params.CanAddWidget;
}


// Function statisticsManager.statisticsManager_C.startDeaObservation
// (Public, BlueprintCallable, BlueprintEvent)

void AstatisticsManager_C::startDeaObservation()
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.startDeaObservation");

	AstatisticsManager_C_startDeaObservation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.modifyReputation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::modifyReputation(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.modifyReputation");

	AstatisticsManager_C_modifyReputation_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.factorTimeDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::factorTimeDrop(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.factorTimeDrop");

	AstatisticsManager_C_factorTimeDrop_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.addExpoEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ExpoValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::addExpoEvent(float ExpoValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.addExpoEvent");

	AstatisticsManager_C_addExpoEvent_Params params;
	params.ExpoValue = ExpoValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.addRiskEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RiskValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::addRiskEvent(float RiskValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.addRiskEvent");

	AstatisticsManager_C_addRiskEvent_Params params;
	params.RiskValue = RiskValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.addExp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          expAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::addExp(float expAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.addExp");

	AstatisticsManager_C_addExp_Params params;
	params.expAmount = expAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.calcExpForLevelUp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ExpLacking                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ExpNeededTotal                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          NextLevelProgress              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::calcExpForLevelUp(float* ExpLacking, float* ExpNeededTotal, float* NextLevelProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.calcExpForLevelUp");

	AstatisticsManager_C_calcExpForLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpLacking != nullptr)
		*ExpLacking = params.ExpLacking;
	if (ExpNeededTotal != nullptr)
		*ExpNeededTotal = params.ExpNeededTotal;
	if (NextLevelProgress != nullptr)
		*NextLevelProgress = params.NextLevelProgress;
}


// Function statisticsManager.statisticsManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AstatisticsManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.UserConstructionScript");

	AstatisticsManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AstatisticsManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.ReceiveBeginPlay");

	AstatisticsManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.ReceiveTick");

	AstatisticsManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.levelUpWidget
// (BlueprintCallable, BlueprintEvent)

void AstatisticsManager_C::levelUpWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.levelUpWidget");

	AstatisticsManager_C_levelUpWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.checkStatuses
// (BlueprintCallable, BlueprintEvent)

void AstatisticsManager_C::checkStatuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.checkStatuses");

	AstatisticsManager_C_checkStatuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.tryShowLevel
// (BlueprintCallable, BlueprintEvent)

void AstatisticsManager_C::tryShowLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.tryShowLevel");

	AstatisticsManager_C_tryShowLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function statisticsManager.statisticsManager_C.ExecuteUbergraph_statisticsManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstatisticsManager_C::ExecuteUbergraph_statisticsManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function statisticsManager.statisticsManager_C.ExecuteUbergraph_statisticsManager");

	AstatisticsManager_C_ExecuteUbergraph_statisticsManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
