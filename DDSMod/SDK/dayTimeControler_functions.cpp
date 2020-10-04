
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function dayTimeControler.dayTimeControler_C.getDayNam
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            DayID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   dayNum                         (Parm, OutParm)

void AdayTimeControler_C::getDayNam(int DayID, struct FText* dayNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.getDayNam");

	AdayTimeControler_C_getDayNam_Params params;
	params.DayID = DayID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dayNum != nullptr)
		*dayNum = params.dayNum;
}


// Function dayTimeControler.dayTimeControler_C.checkTowers
// (Public, BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::checkTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.checkTowers");

	AdayTimeControler_C_checkTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.startTowers
// (Public, BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::startTowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.startTowers");

	AdayTimeControler_C_startTowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.getFutureDate_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          hoursFrom                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          minutesFrom                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           fullHours                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NightHour                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          outHour                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outMinute                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            outDay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AdayTimeControler_C::getFutureDate_2(float hoursFrom, float minutesFrom, bool fullHours, bool NightHour, float* outHour, float* outMinute, int* outDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.getFutureDate_2");

	AdayTimeControler_C_getFutureDate_2_Params params;
	params.hoursFrom = hoursFrom;
	params.minutesFrom = minutesFrom;
	params.fullHours = fullHours;
	params.NightHour = NightHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outHour != nullptr)
		*outHour = params.outHour;
	if (outMinute != nullptr)
		*outMinute = params.outMinute;
	if (outDay != nullptr)
		*outDay = params.outDay;
}


// Function dayTimeControler.dayTimeControler_C.getFutureDate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          hoursFrom                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          minutesFrom                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           fullHours                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           randomNightHour                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          outHour                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outMinute                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            outDay                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AdayTimeControler_C::getFutureDate(float hoursFrom, float minutesFrom, bool fullHours, bool randomNightHour, float* outHour, float* outMinute, int* outDay)
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.getFutureDate");

	AdayTimeControler_C_getFutureDate_Params params;
	params.hoursFrom = hoursFrom;
	params.minutesFrom = minutesFrom;
	params.fullHours = fullHours;
	params.randomNightHour = randomNightHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outHour != nullptr)
		*outHour = params.outHour;
	if (outMinute != nullptr)
		*outMinute = params.outMinute;
	if (outDay != nullptr)
		*outDay = params.outDay;
}


// Function dayTimeControler.dayTimeControler_C.getStringTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HourOnly                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnDate                     (Parm, OutParm, ZeroConstructor)

void AdayTimeControler_C::getStringTime(bool HourOnly, struct FString* ReturnDate)
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.getStringTime");

	AdayTimeControler_C_getStringTime_Params params;
	params.HourOnly = HourOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnDate != nullptr)
		*ReturnDate = params.ReturnDate;
}


// Function dayTimeControler.dayTimeControler_C.setupReferences
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AdayTimeControler_C::setupReferences(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.setupReferences");

	AdayTimeControler_C_setupReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function dayTimeControler.dayTimeControler_C.calculateSky
// (Public, BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::calculateSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.calculateSky");

	AdayTimeControler_C_calculateSky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.UserConstructionScript");

	AdayTimeControler_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.updateSun
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::updateSun()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.updateSun");

	AdayTimeControler_C_updateSun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.disableStreetLight
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::disableStreetLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.disableStreetLight");

	AdayTimeControler_C_disableStreetLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.enableStreetLight
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::enableStreetLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.enableStreetLight");

	AdayTimeControler_C_enableStreetLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.sunDefaults
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::sunDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.sunDefaults");

	AdayTimeControler_C_sunDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.AddTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Hours                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdayTimeControler_C::AddTime(float Hours, float Minutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.AddTime");

	AdayTimeControler_C_AddTime_Params params;
	params.Hours = Hours;
	params.Minutes = Minutes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdayTimeControler_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.ReceiveTick");

	AdayTimeControler_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdayTimeControler_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.ReceiveBeginPlay");

	AdayTimeControler_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.refreshSun
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::refreshSun()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.refreshSun");

	AdayTimeControler_C_refreshSun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.openSunGate
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::openSunGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.openSunGate");

	AdayTimeControler_C_openSunGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.CloseSunGate
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::CloseSunGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.CloseSunGate");

	AdayTimeControler_C_CloseSunGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.checkPoliceHoursAlarm
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::checkPoliceHoursAlarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.checkPoliceHoursAlarm");

	AdayTimeControler_C_checkPoliceHoursAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.updateCepTime
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::updateCepTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.updateCepTime");

	AdayTimeControler_C_updateCepTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.retrySetDefaultTime
// (BlueprintCallable, BlueprintEvent)

void AdayTimeControler_C::retrySetDefaultTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.retrySetDefaultTime");

	AdayTimeControler_C_retrySetDefaultTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dayTimeControler.dayTimeControler_C.ExecuteUbergraph_dayTimeControler
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdayTimeControler_C::ExecuteUbergraph_dayTimeControler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.ExecuteUbergraph_dayTimeControler");

	AdayTimeControler_C_ExecuteUbergraph_dayTimeControler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
