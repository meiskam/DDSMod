
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

// Function DrugDealerSimulator.AstralProfile.powerOnSurface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAstralProfile::powerOnSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AstralProfile.powerOnSurface");

	AAstralProfile_powerOnSurface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.AstralProfile.heatPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AAstralProfile::heatPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.AstralProfile.heatPower");

	AAstralProfile_heatPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepSaveTester.noticeAction
// (Final, Native, Public)

void ACepSaveTester::noticeAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepSaveTester.noticeAction");

	ACepSaveTester_noticeAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.CepSaveTester.getCount
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACepSaveTester::getCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepSaveTester.getCount");

	ACepSaveTester_getCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.YearPassed
// (Final, Native, Protected)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCepWeatherComponent::YearPassed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.YearPassed");

	UCepWeatherComponent_YearPassed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.YearDay
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCepWeatherComponent::YearDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.YearDay");

	UCepWeatherComponent_YearDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.SetupRain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            datNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          rainLength                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          rainDensity                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCepWeatherComponent::SetupRain(int datNum, float rainLength, float rainDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.SetupRain");

	UCepWeatherComponent_SetupRain_Params params;
	params.datNum = datNum;
	params.rainLength = rainLength;
	params.rainDensity = rainDensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.SaveDataSnapshot
// (Final, Native, Public)

void UCepWeatherComponent::SaveDataSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.SaveDataSnapshot");

	UCepWeatherComponent_SaveDataSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.CepWeatherComponent.RecoverDataSnapshot
// (Final, Native, Public)

void UCepWeatherComponent::RecoverDataSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.RecoverDataSnapshot");

	UCepWeatherComponent_RecoverDataSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.CepWeatherComponent.NextYearDay
// (Final, Native, Public)
// Parameters:
// int                            curDay                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Op                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCepWeatherComponent::NextYearDay(int curDay, int Op)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.NextYearDay");

	UCepWeatherComponent_NextYearDay_Params params;
	params.curDay = curDay;
	params.Op = Op;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherComponent.Init
// (Final, Native, Public)

void UCepWeatherComponent::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherComponent.Init");

	UCepWeatherComponent_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.CepWeatherProfile.YearPassed
// (Final, Native, Protected)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ACepWeatherProfile::YearPassed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherProfile.YearPassed");

	ACepWeatherProfile_YearPassed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherProfile.YearDay
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ACepWeatherProfile::YearDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherProfile.YearDay");

	ACepWeatherProfile_YearDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.CepWeatherProfile.Init
// (Final, Native, Public)

void ACepWeatherProfile::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.CepWeatherProfile.Init");

	ACepWeatherProfile_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.StartCommitSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newStartVal                    (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLogger_UE::StartCommitSession(float newStartVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.StartCommitSession");

	UDayConditionsLogger_UE_StartCommitSession_Params params;
	params.newStartVal = newStartVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLogger_UE::SetValueByIndex(int Index, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByIndex");

	UDayConditionsLogger_UE_SetValueByIndex_Params params;
	params.Index = Index;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByHour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          setHour                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLogger_UE::SetValueByHour(float setHour, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByHour");

	UDayConditionsLogger_UE_SetValueByHour_Params params;
	params.setHour = setHour;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.SeekIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          seekHour                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDayConditionsLogger_UE::SeekIndex(float seekHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.SeekIndex");

	UDayConditionsLogger_UE_SeekIndex_Params params;
	params.seekHour = seekHour;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.IsInCommitMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDayConditionsLogger_UE::IsInCommitMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.IsInCommitMode");

	UDayConditionsLogger_UE_IsInCommitMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValuesLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDayConditionsLogger_UE::GetValuesLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetValuesLength");

	UDayConditionsLogger_UE_GetValuesLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SeekIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDayConditionsLogger_UE::GetValueByIndex(int SeekIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByIndex");

	UDayConditionsLogger_UE_GetValueByIndex_Params params;
	params.SeekIndex = SeekIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByHour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          seekHour                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           extrapolateValue               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDayConditionsLogger_UE::GetValueByHour(float seekHour, bool extrapolateValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByHour");

	UDayConditionsLogger_UE_GetValueByHour_Params params;
	params.seekHour = seekHour;
	params.extrapolateValue = extrapolateValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetSum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            maxIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDayConditionsLogger_UE::GetSum(int maxIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetSum");

	UDayConditionsLogger_UE_GetSum_Params params;
	params.maxIndex = maxIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.GetNextIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            curIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Op                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UDayConditionsLogger_UE::GetNextIndex(int curIndex, int Op)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.GetNextIndex");

	UDayConditionsLogger_UE_GetNextIndex_Params params;
	params.curIndex = curIndex;
	params.Op = Op;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.EndCommitSession
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newEndVal                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           followToEnd                    (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLogger_UE::EndCommitSession(float newEndVal, bool followToEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.EndCommitSession");

	UDayConditionsLogger_UE_EndCommitSession_Params params;
	params.newEndVal = newEndVal;
	params.followToEnd = followToEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLogger_UE.ClassInit
// (Final, Native, Public, BlueprintCallable)

void UDayConditionsLogger_UE::ClassInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLogger_UE.ClassInit");

	UDayConditionsLogger_UE_ClassInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLoggerComponent.SetValueByIndex
// (Final, Native, Protected)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UDayConditionsLoggerComponent::SetValueByIndex(int Index, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLoggerComponent.SetValueByIndex");

	UDayConditionsLoggerComponent_SetValueByIndex_Params params;
	params.Index = Index;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.DayConditionsLoggerComponent.Init
// (Final, Native, Protected)

void UDayConditionsLoggerComponent::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.DayConditionsLoggerComponent.Init");

	UDayConditionsLoggerComponent_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.UnlockedDone
// (Native, Event, Public, BlueprintEvent)

void ALockpickPuzzle::UnlockedDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.UnlockedDone");

	ALockpickPuzzle_UnlockedDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.StartTakingDamage
// (Native, Event, Public, BlueprintEvent)

void ALockpickPuzzle::StartTakingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.StartTakingDamage");

	ALockpickPuzzle_StartTakingDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.ResetPuzzle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ResetUnlockPosition            (Parm, ZeroConstructor, IsPlainOldData)

void ALockpickPuzzle::ResetPuzzle(bool ResetUnlockPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.ResetPuzzle");

	ALockpickPuzzle_ResetPuzzle_Params params;
	params.ResetUnlockPosition = ResetUnlockPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.PushMouseInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void ALockpickPuzzle::PushMouseInput(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.PushMouseInput");

	ALockpickPuzzle_PushMouseInput_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.IsUnlocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALockpickPuzzle::IsUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.IsUnlocked");

	ALockpickPuzzle_IsUnlocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.IsScrewDriverInUnlockZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALockpickPuzzle::IsScrewDriverInUnlockZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.IsScrewDriverInUnlockZone");

	ALockpickPuzzle_IsScrewDriverInUnlockZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.IsBobbyPinInUnlockZone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALockpickPuzzle::IsBobbyPinInUnlockZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.IsBobbyPinInUnlockZone");

	ALockpickPuzzle_IsBobbyPinInUnlockZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.HasBoobyPinBroke
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALockpickPuzzle::HasBoobyPinBroke()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.HasBoobyPinBroke");

	ALockpickPuzzle_HasBoobyPinBroke_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetScrewDriverAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetScrewDriverAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetScrewDriverAngle");

	ALockpickPuzzle_GetScrewDriverAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetDifficultyMeta
// (Final, Native, Protected)
// Parameters:
// int                            optNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetDifficultyMeta(int optNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetDifficultyMeta");

	ALockpickPuzzle_GetDifficultyMeta_Params params;
	params.optNum = optNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetCurrentResistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetCurrentResistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetCurrentResistance");

	ALockpickPuzzle_GetCurrentResistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetBobbyPinHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinHealth");

	ALockpickPuzzle_GetBobbyPinHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALockpickPuzzle::GetBobbyPinAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinAngle");

	ALockpickPuzzle_GetBobbyPinAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.LockpickPuzzle.EndTakingDamage
// (Native, Event, Public, BlueprintEvent)

void ALockpickPuzzle::EndTakingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.EndTakingDamage");

	ALockpickPuzzle_EndTakingDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.BrokenEvent
// (Native, Event, Public, BlueprintEvent)

void ALockpickPuzzle::BrokenEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.BrokenEvent");

	ALockpickPuzzle_BrokenEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.ActionButtonReleased
// (Final, Native, Public, BlueprintCallable)

void ALockpickPuzzle::ActionButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.ActionButtonReleased");

	ALockpickPuzzle_ActionButtonReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.LockpickPuzzle.ActionButtonPressed
// (Final, Native, Public, BlueprintCallable)

void ALockpickPuzzle::ActionButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.LockpickPuzzle.ActionButtonPressed");

	ALockpickPuzzle_ActionButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.WTACStoreInSaveSpace
// (Final, Native, Protected)

void UNextSingleton::WTACStoreInSaveSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.WTACStoreInSaveSpace");

	UNextSingleton_WTACStoreInSaveSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.WTACRecover
// (Final, Native, Protected)

void UNextSingleton::WTACRecover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.WTACRecover");

	UNextSingleton_WTACRecover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.ValidateWorld
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNextSingleton::ValidateWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ValidateWorld");

	UNextSingleton_ValidateWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingleton.ResearchWorld
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::ResearchWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ResearchWorld");

	UNextSingleton_ResearchWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.ReInitWTAC
// (Final, Native, Protected)

void UNextSingleton::ReInitWTAC()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ReInitWTAC");

	UNextSingleton_ReInitWTAC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.ReassignWorld
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::ReassignWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.ReassignWorld");

	UNextSingleton_ReassignWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.PrepareInstancesForSaveEvent
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::PrepareInstancesForSaveEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.PrepareInstancesForSaveEvent");

	UNextSingleton_PrepareInstancesForSaveEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.NoticeLoadRequest
// (Final, Native, Public, BlueprintCallable)

void UNextSingleton::NoticeLoadRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.NoticeLoadRequest");

	UNextSingleton_NoticeLoadRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.LoadDone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           retryLoad                      (Parm, ZeroConstructor, IsPlainOldData)

void UNextSingleton::LoadDone(bool retryLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.LoadDone");

	UNextSingleton_LoadDone_Params params;
	params.retryLoad = retryLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.NextSingleton.InnerLoadPerformed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNextSingleton::InnerLoadPerformed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.InnerLoadPerformed");

	UNextSingleton_InnerLoadPerformed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingleton.CanSaveDependedInstancesInit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNextSingleton::CanSaveDependedInstancesInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingleton.CanSaveDependedInstancesInit");

	UNextSingleton_CanSaveDependedInstancesInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingletonLibrary.GetNextSingletonData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UNextSingleton*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNextSingleton* UNextSingletonLibrary::STATIC_GetNextSingletonData(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingletonLibrary.GetNextSingletonData");

	UNextSingletonLibrary_GetNextSingletonData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.NextSingletonWorldHelper.SetMasterState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           newState                       (Parm, ZeroConstructor, IsPlainOldData)

void ANextSingletonWorldHelper::SetMasterState(bool newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.NextSingletonWorldHelper.SetMasterState");

	ANextSingletonWorldHelper_SetMasterState_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetSunsetTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetSunsetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetSunsetTime");

	USeasonAstralComponent_GetSunsetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetSunriseTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetSunriseTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetSunriseTime");

	USeasonAstralComponent_GetSunriseTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitTarget
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetOrbitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitTarget");

	USeasonAstralComponent_GetOrbitTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitDistanceTarget
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetOrbitDistanceTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitDistanceTarget");

	USeasonAstralComponent_GetOrbitDistanceTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetMaxHeigthTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetMaxHeigthTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetMaxHeigthTime");

	USeasonAstralComponent_GetMaxHeigthTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralComponent.GetHeatPower
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USeasonAstralComponent::GetHeatPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralComponent.GetHeatPower");

	USeasonAstralComponent_GetHeatPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralProfile.GetSunsetTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASeasonAstralProfile::GetSunsetTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralProfile.GetSunsetTime");

	ASeasonAstralProfile_GetSunsetTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralProfile.GetSunriseTime
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASeasonAstralProfile::GetSunriseTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralProfile.GetSunriseTime");

	ASeasonAstralProfile_GetSunriseTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonAstralProfile.GetHeatPower
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ASeasonAstralProfile::GetHeatPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonAstralProfile.GetHeatPower");

	ASeasonAstralProfile_GetHeatPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.SeasonProfile.getAirProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAirComponent*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAirComponent* ASeasonProfile::getAirProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.SeasonProfile.getAirProfile");

	ASeasonProfile_getAirProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroActor.retName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString AShiroActor::retName()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroActor.retName");

	AShiroActor_retName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.WeightedArrayRand
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                  WeightArr                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShiroBlueprint::STATIC_WeightedArrayRand(TArray<float> WeightArr)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.WeightedArrayRand");

	UShiroBlueprint_WeightedArrayRand_Params params;
	params.WeightArr = WeightArr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.testReferences
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          t1                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          t2                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          t3                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          t4                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShiroBlueprint::STATIC_testReferences(float* t1, float* t2, float* t3, float* t4)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.testReferences");

	UShiroBlueprint_testReferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (t1 != nullptr)
		*t1 = params.t1;
	if (t2 != nullptr)
		*t2 = params.t2;
	if (t3 != nullptr)
		*t3 = params.t3;
	if (t4 != nullptr)
		*t4 = params.t4;
}


// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShiroBlueprint::STATIC_shiroFunc2(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2");

	UShiroBlueprint_shiroFunc2_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UShiroBlueprint::STATIC_shiroFunc(int A)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.shiroFunc");

	UShiroBlueprint_shiroFunc_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.GetWTAC
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AWorldTimeAndConditions* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AWorldTimeAndConditions* UShiroBlueprint::STATIC_GetWTAC()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.GetWTAC");

	UShiroBlueprint_GetWTAC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.GetSingleton
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNextSingleton*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNextSingleton* UShiroBlueprint::STATIC_GetSingleton()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.GetSingleton");

	UShiroBlueprint_GetSingleton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.FastProportions
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          minTargetRange                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxTargetRange                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          workValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           unboundBounds                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          minBaseRange                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          maxBaseRange                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShiroBlueprint::STATIC_FastProportions(float minTargetRange, float maxTargetRange, float workValue, bool unboundBounds, float minBaseRange, float maxBaseRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.FastProportions");

	UShiroBlueprint_FastProportions_Params params;
	params.minTargetRange = minTargetRange;
	params.maxTargetRange = maxTargetRange;
	params.workValue = workValue;
	params.unboundBounds = unboundBounds;
	params.minBaseRange = minBaseRange;
	params.maxBaseRange = maxBaseRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          perc                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UShiroBlueprint::STATIC_extrapolateTest(float Min, float Max, float perc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest");

	UShiroBlueprint_extrapolateTest_Params params;
	params.Min = Min;
	params.Max = Max;
	params.perc = perc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.CheckPrice
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          drugCurrentPrice               (Parm, ZeroConstructor, IsPlainOldData)
// float                          drugResonablePrice             (Parm, ZeroConstructor, IsPlainOldData)
// float                          reputationFactor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddictedCustomer               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           priceHighOutput                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           priceTooHighOutput             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          baseMaxSellingFactor           (Parm, ZeroConstructor, IsPlainOldData)
// float                          reputationInfluence            (Parm, ZeroConstructor, IsPlainOldData)
// float                          AddictedInfluence              (Parm, ZeroConstructor, IsPlainOldData)

void UShiroBlueprint::STATIC_CheckPrice(float drugCurrentPrice, float drugResonablePrice, float reputationFactor, bool AddictedCustomer, float baseMaxSellingFactor, float reputationInfluence, float AddictedInfluence, bool* priceHighOutput, bool* priceTooHighOutput)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.CheckPrice");

	UShiroBlueprint_CheckPrice_Params params;
	params.drugCurrentPrice = drugCurrentPrice;
	params.drugResonablePrice = drugResonablePrice;
	params.reputationFactor = reputationFactor;
	params.AddictedCustomer = AddictedCustomer;
	params.baseMaxSellingFactor = baseMaxSellingFactor;
	params.reputationInfluence = reputationInfluence;
	params.AddictedInfluence = AddictedInfluence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (priceHighOutput != nullptr)
		*priceHighOutput = params.priceHighOutput;
	if (priceTooHighOutput != nullptr)
		*priceTooHighOutput = params.priceTooHighOutput;
}


// Function DrugDealerSimulator.ShiroBlueprint.CanSaveDependedInstancesInit
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UShiroBlueprint::STATIC_CanSaveDependedInstancesInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.CanSaveDependedInstancesInit");

	UShiroBlueprint_CanSaveDependedInstancesInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.ShiroBlueprint.calculateSky
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            curHour                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            curMinute                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           sunVisible                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          sunHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          sunPlainAngle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          sunBrightness                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           moonVisible                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          varDump                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UShiroBlueprint::STATIC_calculateSky(int dayNum, int curHour, int curMinute, bool* sunVisible, float* sunHeight, float* sunPlainAngle, float* sunBrightness, bool* moonVisible, float* varDump)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.ShiroBlueprint.calculateSky");

	UShiroBlueprint_calculateSky_Params params;
	params.dayNum = dayNum;
	params.curHour = curHour;
	params.curMinute = curMinute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sunVisible != nullptr)
		*sunVisible = params.sunVisible;
	if (sunHeight != nullptr)
		*sunHeight = params.sunHeight;
	if (sunPlainAngle != nullptr)
		*sunPlainAngle = params.sunPlainAngle;
	if (sunBrightness != nullptr)
		*sunBrightness = params.sunBrightness;
	if (moonVisible != nullptr)
		*moonVisible = params.moonVisible;
	if (varDump != nullptr)
		*varDump = params.varDump;
}


// Function DrugDealerSimulator.TimeProfile.setTimeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          propagationTime                (Parm, ZeroConstructor, IsPlainOldData)

void ATimeProfile::setTimeMultiplier(float Val, float propagationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.setTimeMultiplier");

	ATimeProfile_setTimeMultiplier_Params params;
	params.Val = Val;
	params.propagationTime = propagationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TimeProfile.setDayHourMinuteTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            day                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            hour                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            minute                         (Parm, ZeroConstructor, IsPlainOldData)

void ATimeProfile::setDayHourMinuteTime(int day, int hour, int minute)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.setDayHourMinuteTime");

	ATimeProfile_setDayHourMinuteTime_Params params;
	params.day = day;
	params.hour = hour;
	params.minute = minute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TimeProfile.getIntTimeData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            optNum                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ATimeProfile::getIntTimeData(int optNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.getIntTimeData");

	ATimeProfile_getIntTimeData_Params params;
	params.optNum = optNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TimeProfile.GetCurrentTimeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeProfile::GetCurrentTimeMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.GetCurrentTimeMultiplier");

	ATimeProfile_GetCurrentTimeMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TimeProfile.dayFloatResult
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATimeProfile::dayFloatResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.dayFloatResult");

	ATimeProfile_dayFloatResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TimeProfile.addSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          addSeconds                     (Parm, ZeroConstructor, IsPlainOldData)

void ATimeProfile::addSeconds(float addSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.addSeconds");

	ATimeProfile_addSeconds_Params params;
	params.addSeconds = addSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TimeProfile.addMinutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            addMinutes                     (Parm, ZeroConstructor, IsPlainOldData)

void ATimeProfile::addMinutes(int addMinutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TimeProfile.addMinutes");

	ATimeProfile_addMinutes_Params params;
	params.addMinutes = addMinutes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TrainControllerCode.initOnWorld
// (Final, Native, Private)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrainControllerCode::initOnWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.initOnWorld");

	ATrainControllerCode_initOnWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TrainControllerCode.initInstance
// (Final, Native, Private)
// Parameters:
// int                            followingSegmentsCount         (Parm, ZeroConstructor, IsPlainOldData)

void ATrainControllerCode::initInstance(int followingSegmentsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.initInstance");

	ATrainControllerCode_initInstance_Params params;
	params.followingSegmentsCount = followingSegmentsCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TrainControllerCode.calcTotalWeigthAndPower
// (Final, Native, Private)

void ATrainControllerCode::calcTotalWeigthAndPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcTotalWeigthAndPower");

	ATrainControllerCode_calcTotalWeigthAndPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TrainControllerCode.calcTotalFrictionForce
// (Final, Native, Private)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrainControllerCode::calcTotalFrictionForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcTotalFrictionForce");

	ATrainControllerCode_calcTotalFrictionForce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.TrainControllerCode.calcSingleSegment
// (Final, Native, Private)
// Parameters:
// class ATrainRealSegment*       calcSegment                    (Parm, ZeroConstructor, IsPlainOldData)

void ATrainControllerCode::calcSingleSegment(class ATrainRealSegment* calcSegment)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcSingleSegment");

	ATrainControllerCode_calcSingleSegment_Params params;
	params.calcSegment = calcSegment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.TrainControllerCode.calcSegmentDistanceToLeader
// (Final, Native, Private)
// Parameters:
// int                            SegmentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATrainControllerCode::calcSegmentDistanceToLeader(int SegmentIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.TrainControllerCode.calcSegmentDistanceToLeader");

	ATrainControllerCode_calcSegmentDistanceToLeader_Params params;
	params.SegmentIndex = SegmentIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WeatherProfile.YearPassed
// (Final, Native, Protected)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeatherProfile::YearPassed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WeatherProfile.YearPassed");

	AWeatherProfile_YearPassed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WeatherProfile.Init
// (Final, Native, Public)

void AWeatherProfile::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WeatherProfile.Init");

	AWeatherProfile_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.TimeProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ATimeProfile*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ATimeProfile* AWorldTimeAndConditions::TimeProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.TimeProfile");

	AWorldTimeAndConditions_TimeProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.StoreInSaveSpace
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Val                            (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::StoreInSaveSpace(int Index, float Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.StoreInSaveSpace");

	AWorldTimeAndConditions_StoreInSaveSpace_Params params;
	params.Index = Index;
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.StartRain
// (Final, Native, Public)

void AWorldTimeAndConditions::StartRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.StartRain");

	AWorldTimeAndConditions_StartRain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.StartFog
// (Final, Native, Public)

void AWorldTimeAndConditions::StartFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.StartFog");

	AWorldTimeAndConditions_StartFog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.ShadowsSettingsChanged
// (Native, Event, Public, BlueprintEvent)

void AWorldTimeAndConditions::ShadowsSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.ShadowsSettingsChanged");

	AWorldTimeAndConditions_ShadowsSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.SetUltraSkyInit
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::SetUltraSkyInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SetUltraSkyInit");

	AWorldTimeAndConditions_SetUltraSkyInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.SetTimeMulptiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          newFactor                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          propagationTime                (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::SetTimeMulptiplier(float newFactor, float propagationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SetTimeMulptiplier");

	AWorldTimeAndConditions_SetTimeMulptiplier_Params params;
	params.newFactor = newFactor;
	params.propagationTime = propagationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.SetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayValue                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            hourValue                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            minuteValue                    (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::SetTime(int dayValue, int hourValue, int minuteValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SetTime");

	AWorldTimeAndConditions_SetTime_Params params;
	params.dayValue = dayValue;
	params.hourValue = hourValue;
	params.minuteValue = minuteValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.SaveDataSnapshot
// (Final, Native, Public)

void AWorldTimeAndConditions::SaveDataSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.SaveDataSnapshot");

	AWorldTimeAndConditions_SaveDataSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.ReInitLoggers
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::ReInitLoggers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.ReInitLoggers");

	AWorldTimeAndConditions_ReInitLoggers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.RecoverDataSnapshot
// (Final, Native, Public)
// Parameters:
// bool                           recoverTime                    (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::RecoverDataSnapshot(bool recoverTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.RecoverDataSnapshot");

	AWorldTimeAndConditions_RecoverDataSnapshot_Params params;
	params.recoverTime = recoverTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.PureInit
// (Final, Native, Public)

void AWorldTimeAndConditions::PureInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.PureInit");

	AWorldTimeAndConditions_PureInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.PoliceArrestTimeShift
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::PoliceArrestTimeShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.PoliceArrestTimeShift");

	AWorldTimeAndConditions_PoliceArrestTimeShift_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.NoticeCalcPhaseDone
// (Final, Native, Public)

void AWorldTimeAndConditions::NoticeCalcPhaseDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.NoticeCalcPhaseDone");

	AWorldTimeAndConditions_NoticeCalcPhaseDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.MarkNewLoad
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::MarkNewLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.MarkNewLoad");

	AWorldTimeAndConditions_MarkNewLoad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.IsUltraSkyInited
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::IsUltraSkyInited()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.IsUltraSkyInited");

	AWorldTimeAndConditions_IsUltraSkyInited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.IsCurrentlyRaining
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::IsCurrentlyRaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.IsCurrentlyRaining");

	AWorldTimeAndConditions_IsCurrentlyRaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.IsAfterNoon
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::IsAfterNoon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.IsAfterNoon");

	AWorldTimeAndConditions_IsAfterNoon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.InWorldInitiated
// (Native, Event, Public, BlueprintEvent)

void AWorldTimeAndConditions::InWorldInitiated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.InWorldInitiated");

	AWorldTimeAndConditions_InWorldInitiated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.InnerDisableWeatherSystem
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::InnerDisableWeatherSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.InnerDisableWeatherSystem");

	AWorldTimeAndConditions_InnerDisableWeatherSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.Init
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.Init");

	AWorldTimeAndConditions_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.HasFog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::HasFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.HasFog");

	AWorldTimeAndConditions_HasFog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPowerAfterBounced
// (Final, Native, Protected)
// Parameters:
// float                          cAngle                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetSunPowerAfterBounced(float cAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPowerAfterBounced");

	AWorldTimeAndConditions_GetSunPowerAfterBounced_Params params;
	params.cAngle = cAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPower
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetSunPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPower");

	AWorldTimeAndConditions_GetSunPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunLigthPower
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetSunLigthPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetSunLigthPower");

	AWorldTimeAndConditions_GetSunLigthPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetRainValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetRainValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetRainValue");

	AWorldTimeAndConditions_GetRainValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetRainLogger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDayConditionsLogger_UE* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetRainLogger(int dayNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetRainLogger");

	AWorldTimeAndConditions_GetRainLogger_Params params;
	params.dayNum = dayNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetMoonOrbitProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitProgress");

	AWorldTimeAndConditions_GetMoonOrbitProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetMoonOrbitAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitAngle");

	AWorldTimeAndConditions_GetMoonOrbitAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetInitiationState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::GetInitiationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetInitiationState");

	AWorldTimeAndConditions_GetInitiationState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetHeatLogger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDayConditionsLogger_UE* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetHeatLogger(int dayNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetHeatLogger");

	AWorldTimeAndConditions_GetHeatLogger_Params params;
	params.dayNum = dayNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetFromSaveSpace
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetFromSaveSpace(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetFromSaveSpace");

	AWorldTimeAndConditions_GetFromSaveSpace_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetFogLogger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDayConditionsLogger_UE* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetFogLogger(int dayNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetFogLogger");

	AWorldTimeAndConditions_GetFogLogger_Params params;
	params.dayNum = dayNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentTimeForUltraSky
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentTimeForUltraSky()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentTimeForUltraSky");

	AWorldTimeAndConditions_GetCurrentTimeForUltraSky_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunShadows
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::GetCurrentSunShadows()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunShadows");

	AWorldTimeAndConditions_GetCurrentSunShadows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentSunPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunPower");

	AWorldTimeAndConditions_GetCurrentSunPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunOrbit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentSunOrbit()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunOrbit");

	AWorldTimeAndConditions_GetCurrentSunOrbit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentSunDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunDistance");

	AWorldTimeAndConditions_GetCurrentSunDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentSunAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunAngle");

	AWorldTimeAndConditions_GetCurrentSunAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentStarsIntensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentStarsIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentStarsIntensity");

	AWorldTimeAndConditions_GetCurrentStarsIntensity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentShadowSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           sunShadows                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           moonShadows                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::GetCurrentShadowSettings(bool* sunShadows, bool* moonShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentShadowSettings");

	AWorldTimeAndConditions_GetCurrentShadowSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sunShadows != nullptr)
		*sunShadows = params.sunShadows;
	if (moonShadows != nullptr)
		*moonShadows = params.moonShadows;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentNigthBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentNigthBrightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentNigthBrightness");

	AWorldTimeAndConditions_GetCurrentNigthBrightness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonShadows
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWorldTimeAndConditions::GetCurrentMoonShadows()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonShadows");

	AWorldTimeAndConditions_GetCurrentMoonShadows_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentMoonPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonPhase");

	AWorldTimeAndConditions_GetCurrentMoonPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonBrigthness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentMoonBrigthness()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonBrigthness");

	AWorldTimeAndConditions_GetCurrentMoonBrigthness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWorldTimeAndConditions::GetCurrentIntSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntSeconds");

	AWorldTimeAndConditions_GetCurrentIntSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntMinute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWorldTimeAndConditions::GetCurrentIntMinute()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntMinute");

	AWorldTimeAndConditions_GetCurrentIntMinute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntHour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWorldTimeAndConditions::GetCurrentIntHour()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntHour");

	AWorldTimeAndConditions_GetCurrentIntHour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AWorldTimeAndConditions::GetCurrentIntDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntDay");

	AWorldTimeAndConditions_GetCurrentIntDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFogLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentFogLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFogLevel");

	AWorldTimeAndConditions_GetCurrentFogLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatMinute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentFloatMinute()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatMinute");

	AWorldTimeAndConditions_GetCurrentFloatMinute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatHour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentFloatHour()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatHour");

	AWorldTimeAndConditions_GetCurrentFloatHour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentFloatDay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatDay");

	AWorldTimeAndConditions_GetCurrentFloatDay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentCloudsSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsSpeed");

	AWorldTimeAndConditions_GetCurrentCloudsSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentCloudsLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsLevel");

	AWorldTimeAndConditions_GetCurrentCloudsLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCurrentBrightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentBrightness");

	AWorldTimeAndConditions_GetCurrentBrightness_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCloudLogger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDayConditionsLogger_UE* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDayConditionsLogger_UE* AWorldTimeAndConditions::GetCloudLogger(int dayNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCloudLogger");

	AWorldTimeAndConditions_GetCloudLogger_Params params;
	params.dayNum = dayNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistFactor
// (Final, Native, Public)
// Parameters:
// float                          baseVal                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCalcSunDistFactor(float baseVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistFactor");

	AWorldTimeAndConditions_GetCalcSunDistFactor_Params params;
	params.baseVal = baseVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistanceFactor
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetCalcSunDistanceFactor()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistanceFactor");

	AWorldTimeAndConditions_GetCalcSunDistanceFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.getBasicAirProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAirComponent*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAirComponent* AWorldTimeAndConditions::getBasicAirProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.getBasicAirProfile");

	AWorldTimeAndConditions_getBasicAirProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeSunPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          hourMark                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetAnyTimeSunPower(int dayNum, float hourMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeSunPower");

	AWorldTimeAndConditions_GetAnyTimeSunPower_Params params;
	params.dayNum = dayNum;
	params.hourMark = hourMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsSunFactor
// (Final, Native, Public)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          hourMark                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetAnyTimeCloudsSunFactor(int dayNum, float hourMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsSunFactor");

	AWorldTimeAndConditions_GetAnyTimeCloudsSunFactor_Params params;
	params.dayNum = dayNum;
	params.hourMark = hourMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsLevel
// (Final, Native, Public)
// Parameters:
// int                            dayNum                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          hourMark                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWorldTimeAndConditions::GetAnyTimeCloudsLevel(int dayNum, float hourMark)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsLevel");

	AWorldTimeAndConditions_GetAnyTimeCloudsLevel_Params params;
	params.dayNum = dayNum;
	params.hourMark = hourMark;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.EndRain
// (Final, Native, Public)

void AWorldTimeAndConditions::EndRain()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.EndRain");

	AWorldTimeAndConditions_EndRain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.EndFog
// (Final, Native, Public)

void AWorldTimeAndConditions::EndFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.EndFog");

	AWorldTimeAndConditions_EndFog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.EnableWeatherSystem
// (Final, Native, Public, BlueprintCallable)

void AWorldTimeAndConditions::EnableWeatherSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.EnableWeatherSystem");

	AWorldTimeAndConditions_EnableWeatherSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunRaysAngle
// (Final, Native, Public)

void AWorldTimeAndConditions::CalcSunRaysAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunRaysAngle");

	AWorldTimeAndConditions_CalcSunRaysAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunPhysics
// (Final, Native, Public)

void AWorldTimeAndConditions::CalcSunPhysics()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunPhysics");

	AWorldTimeAndConditions_CalcSunPhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.CalcInteraction
// (Final, Native, Public)

void AWorldTimeAndConditions::CalcInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.CalcInteraction");

	AWorldTimeAndConditions_CalcInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.Calc
// (Final, Native, Private)

void AWorldTimeAndConditions::Calc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.Calc");

	AWorldTimeAndConditions_Calc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditions.AddTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          hoursValue                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          minuteValue                    (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditions::AddTime(float hoursValue, float minuteValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditions.AddTime");

	AWorldTimeAndConditions_AddTime_Params params;
	params.hoursValue = hoursValue;
	params.minuteValue = minuteValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WorldTimeAndConditionsCurFactors.noticeFactors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentRainChance              (Parm, ZeroConstructor, IsPlainOldData)
// float                          sunPower                       (Parm, ZeroConstructor, IsPlainOldData)

void AWorldTimeAndConditionsCurFactors::noticeFactors(float DeltaTime, float currentRainChance, float sunPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WorldTimeAndConditionsCurFactors.noticeFactors");

	AWorldTimeAndConditionsCurFactors_noticeFactors_Params params;
	params.DeltaTime = DeltaTime;
	params.currentRainChance = currentRainChance;
	params.sunPower = sunPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunVisibility
// (Final, Native, Public)
// Parameters:
// bool                           newVisibility                  (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunVisibility(bool newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunVisibility");

	UWTACFactorsComponent_SetSunVisibility_Params params;
	params.newVisibility = newVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunRaysAngle
// (Final, Native, Public)
// Parameters:
// float                          newSunRays                     (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunRaysAngle(float newSunRays)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunRaysAngle");

	UWTACFactorsComponent_SetSunRaysAngle_Params params;
	params.newSunRays = newSunRays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunPower
// (Final, Native, Public)
// Parameters:
// float                          newPower                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunPower(float newPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunPower");

	UWTACFactorsComponent_SetSunPower_Params params;
	params.newPower = newPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitProgress
// (Final, Native, Public)
// Parameters:
// float                          deg                            (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunOrbitProgress(float deg)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitProgress");

	UWTACFactorsComponent_SetSunOrbitProgress_Params params;
	params.deg = deg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitDistance
// (Final, Native, Public)
// Parameters:
// float                          newDistance                    (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunOrbitDistance(float newDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitDistance");

	UWTACFactorsComponent_SetSunOrbitDistance_Params params;
	params.newDistance = newDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitAngle
// (Final, Native, Public)
// Parameters:
// float                          newOrbitAngle                  (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunOrbitAngle(float newOrbitAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitAngle");

	UWTACFactorsComponent_SetSunOrbitAngle_Params params;
	params.newOrbitAngle = newOrbitAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetSunLumens
// (Final, Native, Public)
// Parameters:
// float                          newLumensValue                 (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetSunLumens(float newLumensValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetSunLumens");

	UWTACFactorsComponent_SetSunLumens_Params params;
	params.newLumensValue = newLumensValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetStarsIntensity
// (Final, Native, Public)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetStarsIntensity(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetStarsIntensity");

	UWTACFactorsComponent_SetStarsIntensity_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetRainValue
// (Final, Native, Public)
// Parameters:
// float                          newRainValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetRainValue(float newRainValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetRainValue");

	UWTACFactorsComponent_SetRainValue_Params params;
	params.newRainValue = newRainValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetRainState
// (Final, Native, Public)
// Parameters:
// bool                           newState                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetRainState(bool newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetRainState");

	UWTACFactorsComponent_SetRainState_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetOrbitPhase
// (Final, Native, Public)
// Parameters:
// float                          shPassed                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetOrbitPhase(float shPassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetOrbitPhase");

	UWTACFactorsComponent_SetOrbitPhase_Params params;
	params.shPassed = shPassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetMoonOrbit
// (Final, Native, Public)
// Parameters:
// float                          newProgress                    (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetMoonOrbit(float newProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetMoonOrbit");

	UWTACFactorsComponent_SetMoonOrbit_Params params;
	params.newProgress = newProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetFogState
// (Final, Native, Public)
// Parameters:
// bool                           newState                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetFogState(bool newState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetFogState");

	UWTACFactorsComponent_SetFogState_Params params;
	params.newState = newState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetFogLevel
// (Final, Native, Public)
// Parameters:
// float                          newLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetFogLevel(float newLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetFogLevel");

	UWTACFactorsComponent_SetFogLevel_Params params;
	params.newLevel = newLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetFactorFloatData
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          fVal                           (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetFactorFloatData(int Index, float fVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetFactorFloatData");

	UWTACFactorsComponent_SetFactorFloatData_Params params;
	params.Index = Index;
	params.fVal = fVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetCloudsLevel
// (Final, Native, Public)
// Parameters:
// float                          newLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetCloudsLevel(float newLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetCloudsLevel");

	UWTACFactorsComponent_SetCloudsLevel_Params params;
	params.newLevel = newLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetBrigthnesslevel
// (Final, Native, Public)
// Parameters:
// float                          newBrigthnessLevel             (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetBrigthnesslevel(float newBrigthnessLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetBrigthnesslevel");

	UWTACFactorsComponent_SetBrigthnesslevel_Params params;
	params.newBrigthnessLevel = newBrigthnessLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.SetAtmosphereSunReflections
// (Final, Native, Public)
// Parameters:
// float                          newAtmosphereReflections       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::SetAtmosphereSunReflections(float newAtmosphereReflections)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.SetAtmosphereSunReflections");

	UWTACFactorsComponent_SetAtmosphereSunReflections_Params params;
	params.newAtmosphereReflections = newAtmosphereReflections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.Reinitialize
// (Final, Native, Public, BlueprintCallable)

void UWTACFactorsComponent::Reinitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.Reinitialize");

	UWTACFactorsComponent_Reinitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.noticeFactors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentRainChance              (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentRainDensityTarget       (Parm, ZeroConstructor, IsPlainOldData)
// float                          currentStormChance             (Parm, ZeroConstructor, IsPlainOldData)
// float                          sunPower                       (Parm, ZeroConstructor, IsPlainOldData)

void UWTACFactorsComponent::noticeFactors(float DeltaTime, float currentRainChance, float currentRainDensityTarget, float currentStormChance, float sunPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.noticeFactors");

	UWTACFactorsComponent_noticeFactors_Params params;
	params.DeltaTime = DeltaTime;
	params.currentRainChance = currentRainChance;
	params.currentRainDensityTarget = currentRainDensityTarget;
	params.currentStormChance = currentStormChance;
	params.sunPower = sunPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugDealerSimulator.WTACFactorsComponent.NeedsReinitialization
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWTACFactorsComponent::NeedsReinitialization()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.NeedsReinitialization");

	UWTACFactorsComponent_NeedsReinitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WTACFactorsComponent.GetSunOrbitAbsoluteDeg
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWTACFactorsComponent::GetSunOrbitAbsoluteDeg()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.GetSunOrbitAbsoluteDeg");

	UWTACFactorsComponent_GetSunOrbitAbsoluteDeg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WTACFactorsComponent.GetFactorFloatData
// (Final, Native, Public)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWTACFactorsComponent::GetFactorFloatData(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.GetFactorFloatData");

	UWTACFactorsComponent_GetFactorFloatData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DrugDealerSimulator.WTACFactorsComponent.CanRecover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWTACFactorsComponent::CanRecover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugDealerSimulator.WTACFactorsComponent.CanRecover");

	UWTACFactorsComponent_CanRecover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
