#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function dayTimeControler.dayTimeControler_C.getDayNam
struct AdayTimeControler_C_getDayNam_Params
{
	int                                                DayID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DayNum;                                                   // (Parm, OutParm)
};

// Function dayTimeControler.dayTimeControler_C.checkTowers
struct AdayTimeControler_C_checkTowers_Params
{
};

// Function dayTimeControler.dayTimeControler_C.startTowers
struct AdayTimeControler_C_startTowers_Params
{
};

// Function dayTimeControler.dayTimeControler_C.getFutureDate_2
struct AdayTimeControler_C_getFutureDate_2_Params
{
	float                                              hoursFrom;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              minutesFrom;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fullHours;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NightHour;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              outHour;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outMinute;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                outDay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function dayTimeControler.dayTimeControler_C.getFutureDate
struct AdayTimeControler_C_getFutureDate_Params
{
	float                                              hoursFrom;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              minutesFrom;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fullHours;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               randomNightHour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              outHour;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outMinute;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                outDay;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function dayTimeControler.dayTimeControler_C.getStringTime
struct AdayTimeControler_C_getStringTime_Params
{
	bool                                               HourOnly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnDate;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function dayTimeControler.dayTimeControler_C.setupReferences
struct AdayTimeControler_C_setupReferences_Params
{
};

// Function dayTimeControler.dayTimeControler_C.calculateSky
struct AdayTimeControler_C_calculateSky_Params
{
};

// Function dayTimeControler.dayTimeControler_C.UserConstructionScript
struct AdayTimeControler_C_UserConstructionScript_Params
{
};

// Function dayTimeControler.dayTimeControler_C.ReceiveBeginPlay
struct AdayTimeControler_C_ReceiveBeginPlay_Params
{
};

// Function dayTimeControler.dayTimeControler_C.ReceiveTick
struct AdayTimeControler_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dayTimeControler.dayTimeControler_C.updateSun
struct AdayTimeControler_C_updateSun_Params
{
};

// Function dayTimeControler.dayTimeControler_C.disableStreetLight
struct AdayTimeControler_C_disableStreetLight_Params
{
};

// Function dayTimeControler.dayTimeControler_C.enableStreetLight
struct AdayTimeControler_C_enableStreetLight_Params
{
};

// Function dayTimeControler.dayTimeControler_C.sunDefaults
struct AdayTimeControler_C_sunDefaults_Params
{
};

// Function dayTimeControler.dayTimeControler_C.addTime
struct AdayTimeControler_C_addTime_Params
{
	float                                              Hours;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dayTimeControler.dayTimeControler_C.refreshSun
struct AdayTimeControler_C_refreshSun_Params
{
};

// Function dayTimeControler.dayTimeControler_C.openSunGate
struct AdayTimeControler_C_openSunGate_Params
{
};

// Function dayTimeControler.dayTimeControler_C.CloseSunGate
struct AdayTimeControler_C_CloseSunGate_Params
{
};

// Function dayTimeControler.dayTimeControler_C.checkPoliceHoursAlarm
struct AdayTimeControler_C_checkPoliceHoursAlarm_Params
{
};

// Function dayTimeControler.dayTimeControler_C.ExecuteUbergraph_dayTimeControler
struct AdayTimeControler_C_ExecuteUbergraph_dayTimeControler_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
