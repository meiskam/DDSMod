#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function DrugDealerSimulator.AstralProfile.powerOnSurface
struct AAstralProfile_powerOnSurface_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.AstralProfile.heatPower
struct AAstralProfile_heatPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepSaveTester.noticeAction
struct ACepSaveTester_noticeAction_Params
{
};

// Function DrugDealerSimulator.CepSaveTester.getCount
struct ACepSaveTester_getCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.YearPassed
struct UCepWeatherComponent_YearPassed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.YearDay
struct UCepWeatherComponent_YearDay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.SetupRain
struct UCepWeatherComponent_SetupRain_Params
{
	int                                                datNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              rainLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              rainDensity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.SaveDataSnapshot
struct UCepWeatherComponent_SaveDataSnapshot_Params
{
};

// Function DrugDealerSimulator.CepWeatherComponent.RecoverDataSnapshot
struct UCepWeatherComponent_RecoverDataSnapshot_Params
{
};

// Function DrugDealerSimulator.CepWeatherComponent.NextYearDay
struct UCepWeatherComponent_NextYearDay_Params
{
	int                                                curDay;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Op;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherComponent.Init
struct UCepWeatherComponent_Init_Params
{
};

// Function DrugDealerSimulator.CepWeatherProfile.YearPassed
struct ACepWeatherProfile_YearPassed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherProfile.YearDay
struct ACepWeatherProfile_YearDay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.CepWeatherProfile.Init
struct ACepWeatherProfile_Init_Params
{
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.StartCommitSession
struct UDayConditionsLogger_UE_StartCommitSession_Params
{
	float                                              newStartVal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByIndex
struct UDayConditionsLogger_UE_SetValueByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.SetValueByHour
struct UDayConditionsLogger_UE_SetValueByHour_Params
{
	float                                              setHour;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.SeekIndex
struct UDayConditionsLogger_UE_SeekIndex_Params
{
	float                                              seekHour;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.IsInCommitMode
struct UDayConditionsLogger_UE_IsInCommitMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValuesLength
struct UDayConditionsLogger_UE_GetValuesLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByIndex
struct UDayConditionsLogger_UE_GetValueByIndex_Params
{
	int                                                SeekIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetValueByHour
struct UDayConditionsLogger_UE_GetValueByHour_Params
{
	float                                              seekHour;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               extrapolateValue;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetSum
struct UDayConditionsLogger_UE_GetSum_Params
{
	int                                                maxIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.GetNextIndex
struct UDayConditionsLogger_UE_GetNextIndex_Params
{
	int                                                curIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Op;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.EndCommitSession
struct UDayConditionsLogger_UE_EndCommitSession_Params
{
	float                                              newEndVal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               followToEnd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLogger_UE.ClassInit
struct UDayConditionsLogger_UE_ClassInit_Params
{
};

// Function DrugDealerSimulator.DayConditionsLoggerComponent.SetValueByIndex
struct UDayConditionsLoggerComponent_SetValueByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.DayConditionsLoggerComponent.Init
struct UDayConditionsLoggerComponent_Init_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.UnlockedDone
struct ALockpickPuzzle_UnlockedDone_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.StartTakingDamage
struct ALockpickPuzzle_StartTakingDamage_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.ResetPuzzle
struct ALockpickPuzzle_ResetPuzzle_Params
{
	bool                                               ResetUnlockPosition;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.PushMouseInput
struct ALockpickPuzzle_PushMouseInput_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.IsUnlocked
struct ALockpickPuzzle_IsUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.IsScrewDriverInUnlockZone
struct ALockpickPuzzle_IsScrewDriverInUnlockZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.IsBobbyPinInUnlockZone
struct ALockpickPuzzle_IsBobbyPinInUnlockZone_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.HasBoobyPinBroke
struct ALockpickPuzzle_HasBoobyPinBroke_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetScrewDriverAngle
struct ALockpickPuzzle_GetScrewDriverAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetDifficultyMeta
struct ALockpickPuzzle_GetDifficultyMeta_Params
{
	int                                                optNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetCurrentResistance
struct ALockpickPuzzle_GetCurrentResistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinHealth
struct ALockpickPuzzle_GetBobbyPinHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.GetBobbyPinAngle
struct ALockpickPuzzle_GetBobbyPinAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.LockpickPuzzle.EndTakingDamage
struct ALockpickPuzzle_EndTakingDamage_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.BrokenEvent
struct ALockpickPuzzle_BrokenEvent_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.ActionButtonReleased
struct ALockpickPuzzle_ActionButtonReleased_Params
{
};

// Function DrugDealerSimulator.LockpickPuzzle.ActionButtonPressed
struct ALockpickPuzzle_ActionButtonPressed_Params
{
};

// Function DrugDealerSimulator.NextSingleton.WTACStoreInSaveSpace
struct UNextSingleton_WTACStoreInSaveSpace_Params
{
};

// Function DrugDealerSimulator.NextSingleton.WTACRecover
struct UNextSingleton_WTACRecover_Params
{
};

// Function DrugDealerSimulator.NextSingleton.ValidateWorld
struct UNextSingleton_ValidateWorld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.ResearchWorld
struct UNextSingleton_ResearchWorld_Params
{
};

// Function DrugDealerSimulator.NextSingleton.ReInitWTAC
struct UNextSingleton_ReInitWTAC_Params
{
};

// Function DrugDealerSimulator.NextSingleton.ReassignWorld
struct UNextSingleton_ReassignWorld_Params
{
};

// Function DrugDealerSimulator.NextSingleton.PrepareInstancesForSaveEvent
struct UNextSingleton_PrepareInstancesForSaveEvent_Params
{
};

// Function DrugDealerSimulator.NextSingleton.NoticeLoadRequest
struct UNextSingleton_NoticeLoadRequest_Params
{
};

// Function DrugDealerSimulator.NextSingleton.LoadDone
struct UNextSingleton_LoadDone_Params
{
	bool                                               retryLoad;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.InnerLoadPerformed
struct UNextSingleton_InnerLoadPerformed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingleton.CanSaveDependedInstancesInit
struct UNextSingleton_CanSaveDependedInstancesInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingletonLibrary.GetNextSingletonData
struct UNextSingletonLibrary_GetNextSingletonData_Params
{
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UNextSingleton*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.NextSingletonWorldHelper.SetMasterState
struct ANextSingletonWorldHelper_SetMasterState_Params
{
	bool                                               newState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetSunsetTime
struct USeasonAstralComponent_GetSunsetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetSunriseTime
struct USeasonAstralComponent_GetSunriseTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitTarget
struct USeasonAstralComponent_GetOrbitTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetOrbitDistanceTarget
struct USeasonAstralComponent_GetOrbitDistanceTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetMaxHeigthTime
struct USeasonAstralComponent_GetMaxHeigthTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralComponent.GetHeatPower
struct USeasonAstralComponent_GetHeatPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralProfile.GetSunsetTime
struct ASeasonAstralProfile_GetSunsetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralProfile.GetSunriseTime
struct ASeasonAstralProfile_GetSunriseTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonAstralProfile.GetHeatPower
struct ASeasonAstralProfile_GetHeatPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.SeasonProfile.getAirProfile
struct ASeasonProfile_getAirProfile_Params
{
	class UAirComponent*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroActor.retName
struct AShiroActor_retName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DrugDealerSimulator.ShiroBlueprint.WeightedArrayRand
struct UShiroBlueprint_WeightedArrayRand_Params
{
	TArray<float>                                      WeightArr;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.testReferences
struct UShiroBlueprint_testReferences_Params
{
	float                                              t1;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              t2;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              t3;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              t4;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2
struct UShiroBlueprint_shiroFunc2_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc
struct UShiroBlueprint_shiroFunc_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.GetWTAC
struct UShiroBlueprint_GetWTAC_Params
{
	class AWorldTimeAndConditions*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.GetSingleton
struct UShiroBlueprint_GetSingleton_Params
{
	class UNextSingleton*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.FastProportions
struct UShiroBlueprint_FastProportions_Params
{
	float                                              minTargetRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxTargetRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              workValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               unboundBounds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              minBaseRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              maxBaseRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest
struct UShiroBlueprint_extrapolateTest_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              perc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.CheckPrice
struct UShiroBlueprint_CheckPrice_Params
{
	float                                              drugCurrentPrice;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              drugResonablePrice;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              reputationFactor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddictedCustomer;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               priceHighOutput;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               priceTooHighOutput;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              baseMaxSellingFactor;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              reputationInfluence;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AddictedInfluence;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.CanSaveDependedInstancesInit
struct UShiroBlueprint_CanSaveDependedInstancesInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.calculateSky
struct UShiroBlueprint_calculateSky_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curHour;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curMinute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               sunVisible;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              sunHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              sunPlainAngle;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              sunBrightness;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               moonVisible;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              varDump;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.setTimeMultiplier
struct ATimeProfile_setTimeMultiplier_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              propagationTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.setDayHourMinuteTime
struct ATimeProfile_setDayHourMinuteTime_Params
{
	int                                                day;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                minute;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.getIntTimeData
struct ATimeProfile_getIntTimeData_Params
{
	int                                                optNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.GetCurrentTimeMultiplier
struct ATimeProfile_GetCurrentTimeMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.dayFloatResult
struct ATimeProfile_dayFloatResult_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.addSeconds
struct ATimeProfile_addSeconds_Params
{
	float                                              addSeconds;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TimeProfile.addMinutes
struct ATimeProfile_addMinutes_Params
{
	int                                                addMinutes;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.initOnWorld
struct ATrainControllerCode_initOnWorld_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.initInstance
struct ATrainControllerCode_initInstance_Params
{
	int                                                followingSegmentsCount;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.calcTotalWeigthAndPower
struct ATrainControllerCode_calcTotalWeigthAndPower_Params
{
};

// Function DrugDealerSimulator.TrainControllerCode.calcTotalFrictionForce
struct ATrainControllerCode_calcTotalFrictionForce_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.calcSingleSegment
struct ATrainControllerCode_calcSingleSegment_Params
{
	class ATrainRealSegment*                           calcSegment;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.TrainControllerCode.calcSegmentDistanceToLeader
struct ATrainControllerCode_calcSegmentDistanceToLeader_Params
{
	int                                                SegmentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WeatherProfile.YearPassed
struct AWeatherProfile_YearPassed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WeatherProfile.Init
struct AWeatherProfile_Init_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.TimeProfile
struct AWorldTimeAndConditions_TimeProfile_Params
{
	class ATimeProfile*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.StoreInSaveSpace
struct AWorldTimeAndConditions_StoreInSaveSpace_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.StartRain
struct AWorldTimeAndConditions_StartRain_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.StartFog
struct AWorldTimeAndConditions_StartFog_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.ShadowsSettingsChanged
struct AWorldTimeAndConditions_ShadowsSettingsChanged_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.SetUltraSkyInit
struct AWorldTimeAndConditions_SetUltraSkyInit_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.SetTimeMulptiplier
struct AWorldTimeAndConditions_SetTimeMulptiplier_Params
{
	float                                              newFactor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              propagationTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.SetTime
struct AWorldTimeAndConditions_SetTime_Params
{
	int                                                dayValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                hourValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                minuteValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.SaveDataSnapshot
struct AWorldTimeAndConditions_SaveDataSnapshot_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.ReInitLoggers
struct AWorldTimeAndConditions_ReInitLoggers_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.RecoverDataSnapshot
struct AWorldTimeAndConditions_RecoverDataSnapshot_Params
{
	bool                                               recoverTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.PureInit
struct AWorldTimeAndConditions_PureInit_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.PoliceArrestTimeShift
struct AWorldTimeAndConditions_PoliceArrestTimeShift_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.NoticeCalcPhaseDone
struct AWorldTimeAndConditions_NoticeCalcPhaseDone_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.MarkNewLoad
struct AWorldTimeAndConditions_MarkNewLoad_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.IsUltraSkyInited
struct AWorldTimeAndConditions_IsUltraSkyInited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.IsCurrentlyRaining
struct AWorldTimeAndConditions_IsCurrentlyRaining_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.IsAfterNoon
struct AWorldTimeAndConditions_IsAfterNoon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.InWorldInitiated
struct AWorldTimeAndConditions_InWorldInitiated_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.InnerDisableWeatherSystem
struct AWorldTimeAndConditions_InnerDisableWeatherSystem_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.Init
struct AWorldTimeAndConditions_Init_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.HasFog
struct AWorldTimeAndConditions_HasFog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPowerAfterBounced
struct AWorldTimeAndConditions_GetSunPowerAfterBounced_Params
{
	float                                              cAngle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunPower
struct AWorldTimeAndConditions_GetSunPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetSunLigthPower
struct AWorldTimeAndConditions_GetSunLigthPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetRainValue
struct AWorldTimeAndConditions_GetRainValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetRainLogger
struct AWorldTimeAndConditions_GetRainLogger_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDayConditionsLogger_UE*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitProgress
struct AWorldTimeAndConditions_GetMoonOrbitProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetMoonOrbitAngle
struct AWorldTimeAndConditions_GetMoonOrbitAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetInitiationState
struct AWorldTimeAndConditions_GetInitiationState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetHeatLogger
struct AWorldTimeAndConditions_GetHeatLogger_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDayConditionsLogger_UE*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetFromSaveSpace
struct AWorldTimeAndConditions_GetFromSaveSpace_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetFogLogger
struct AWorldTimeAndConditions_GetFogLogger_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDayConditionsLogger_UE*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentTimeForUltraSky
struct AWorldTimeAndConditions_GetCurrentTimeForUltraSky_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunShadows
struct AWorldTimeAndConditions_GetCurrentSunShadows_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunPower
struct AWorldTimeAndConditions_GetCurrentSunPower_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunOrbit
struct AWorldTimeAndConditions_GetCurrentSunOrbit_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunDistance
struct AWorldTimeAndConditions_GetCurrentSunDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentSunAngle
struct AWorldTimeAndConditions_GetCurrentSunAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentStarsIntensity
struct AWorldTimeAndConditions_GetCurrentStarsIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentShadowSettings
struct AWorldTimeAndConditions_GetCurrentShadowSettings_Params
{
	bool                                               sunShadows;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               moonShadows;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentNigthBrightness
struct AWorldTimeAndConditions_GetCurrentNigthBrightness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonShadows
struct AWorldTimeAndConditions_GetCurrentMoonShadows_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonPhase
struct AWorldTimeAndConditions_GetCurrentMoonPhase_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentMoonBrigthness
struct AWorldTimeAndConditions_GetCurrentMoonBrigthness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntSeconds
struct AWorldTimeAndConditions_GetCurrentIntSeconds_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntMinute
struct AWorldTimeAndConditions_GetCurrentIntMinute_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntHour
struct AWorldTimeAndConditions_GetCurrentIntHour_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentIntDay
struct AWorldTimeAndConditions_GetCurrentIntDay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFogLevel
struct AWorldTimeAndConditions_GetCurrentFogLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatMinute
struct AWorldTimeAndConditions_GetCurrentFloatMinute_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatHour
struct AWorldTimeAndConditions_GetCurrentFloatHour_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentFloatDay
struct AWorldTimeAndConditions_GetCurrentFloatDay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsSpeed
struct AWorldTimeAndConditions_GetCurrentCloudsSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentCloudsLevel
struct AWorldTimeAndConditions_GetCurrentCloudsLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCurrentBrightness
struct AWorldTimeAndConditions_GetCurrentBrightness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCloudLogger
struct AWorldTimeAndConditions_GetCloudLogger_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDayConditionsLogger_UE*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistFactor
struct AWorldTimeAndConditions_GetCalcSunDistFactor_Params
{
	float                                              baseVal;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetCalcSunDistanceFactor
struct AWorldTimeAndConditions_GetCalcSunDistanceFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.getBasicAirProfile
struct AWorldTimeAndConditions_getBasicAirProfile_Params
{
	class UAirComponent*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeSunPower
struct AWorldTimeAndConditions_GetAnyTimeSunPower_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              hourMark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsSunFactor
struct AWorldTimeAndConditions_GetAnyTimeCloudsSunFactor_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              hourMark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.GetAnyTimeCloudsLevel
struct AWorldTimeAndConditions_GetAnyTimeCloudsLevel_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              hourMark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditions.EndRain
struct AWorldTimeAndConditions_EndRain_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.EndFog
struct AWorldTimeAndConditions_EndFog_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.EnableWeatherSystem
struct AWorldTimeAndConditions_EnableWeatherSystem_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunRaysAngle
struct AWorldTimeAndConditions_CalcSunRaysAngle_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.CalcSunPhysics
struct AWorldTimeAndConditions_CalcSunPhysics_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.CalcInteraction
struct AWorldTimeAndConditions_CalcInteraction_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.Calc
struct AWorldTimeAndConditions_Calc_Params
{
};

// Function DrugDealerSimulator.WorldTimeAndConditions.AddTime
struct AWorldTimeAndConditions_AddTime_Params
{
	float                                              hoursValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              minuteValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WorldTimeAndConditionsCurFactors.noticeFactors
struct AWorldTimeAndConditionsCurFactors_noticeFactors_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentRainChance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              sunPower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunVisibility
struct UWTACFactorsComponent_SetSunVisibility_Params
{
	bool                                               newVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunRaysAngle
struct UWTACFactorsComponent_SetSunRaysAngle_Params
{
	float                                              newSunRays;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunPower
struct UWTACFactorsComponent_SetSunPower_Params
{
	float                                              newPower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitProgress
struct UWTACFactorsComponent_SetSunOrbitProgress_Params
{
	float                                              deg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitDistance
struct UWTACFactorsComponent_SetSunOrbitDistance_Params
{
	float                                              newDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunOrbitAngle
struct UWTACFactorsComponent_SetSunOrbitAngle_Params
{
	float                                              newOrbitAngle;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetSunLumens
struct UWTACFactorsComponent_SetSunLumens_Params
{
	float                                              newLumensValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetStarsIntensity
struct UWTACFactorsComponent_SetStarsIntensity_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetRainValue
struct UWTACFactorsComponent_SetRainValue_Params
{
	float                                              newRainValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetRainState
struct UWTACFactorsComponent_SetRainState_Params
{
	bool                                               newState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetOrbitPhase
struct UWTACFactorsComponent_SetOrbitPhase_Params
{
	float                                              shPassed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetMoonOrbit
struct UWTACFactorsComponent_SetMoonOrbit_Params
{
	float                                              newProgress;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetFogState
struct UWTACFactorsComponent_SetFogState_Params
{
	bool                                               newState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetFogLevel
struct UWTACFactorsComponent_SetFogLevel_Params
{
	float                                              newLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetFactorFloatData
struct UWTACFactorsComponent_SetFactorFloatData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              fVal;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetCloudsLevel
struct UWTACFactorsComponent_SetCloudsLevel_Params
{
	float                                              newLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetBrigthnesslevel
struct UWTACFactorsComponent_SetBrigthnesslevel_Params
{
	float                                              newBrigthnessLevel;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.SetAtmosphereSunReflections
struct UWTACFactorsComponent_SetAtmosphereSunReflections_Params
{
	float                                              newAtmosphereReflections;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.Reinitialize
struct UWTACFactorsComponent_Reinitialize_Params
{
};

// Function DrugDealerSimulator.WTACFactorsComponent.noticeFactors
struct UWTACFactorsComponent_noticeFactors_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentRainChance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentRainDensityTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              currentStormChance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              sunPower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.NeedsReinitialization
struct UWTACFactorsComponent_NeedsReinitialization_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.GetSunOrbitAbsoluteDeg
struct UWTACFactorsComponent_GetSunOrbitAbsoluteDeg_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.GetFactorFloatData
struct UWTACFactorsComponent_GetFactorFloatData_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.WTACFactorsComponent.CanRecover
struct UWTACFactorsComponent_CanRecover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
