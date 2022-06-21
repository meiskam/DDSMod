#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function dayTimeControler.dayTimeControler_C.getDayNam
	 */
	struct AdayTimeControler_C_getDayNam_Params
	{
	public:
		int32_t                                                    DayID;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                dayNum;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.checkTowers
	 */
	struct AdayTimeControler_C_checkTowers_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.startTowers
	 */
	struct AdayTimeControler_C_startTowers_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.getFutureDate_2
	 */
	struct AdayTimeControler_C_getFutureDate_2_Params
	{
	public:
		float                                                      hoursFrom;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      minutesFrom;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       fullHours;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NightHour;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      outHour;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outMinute;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    outDay;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.getFutureDate
	 */
	struct AdayTimeControler_C_getFutureDate_Params
	{
	public:
		float                                                      hoursFrom;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      minutesFrom;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       fullHours;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       randomNightHour;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      outHour;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      outMinute;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    outDay;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.getStringTime
	 */
	struct AdayTimeControler_C_getStringTime_Params
	{
	public:
		bool                                                       HourOnly;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnDate;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.setupReferences
	 */
	struct AdayTimeControler_C_setupReferences_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.calculateSky
	 */
	struct AdayTimeControler_C_calculateSky_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.UserConstructionScript
	 */
	struct AdayTimeControler_C_UserConstructionScript_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.ReceiveBeginPlay
	 */
	struct AdayTimeControler_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.ReceiveTick
	 */
	struct AdayTimeControler_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.updateSun
	 */
	struct AdayTimeControler_C_updateSun_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.disableStreetLight
	 */
	struct AdayTimeControler_C_disableStreetLight_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.enableStreetLight
	 */
	struct AdayTimeControler_C_enableStreetLight_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.sunDefaults
	 */
	struct AdayTimeControler_C_sunDefaults_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.AddTime
	 */
	struct AdayTimeControler_C_AddTime_Params
	{
	public:
		float                                                      Hours;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Minutes;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.refreshSun
	 */
	struct AdayTimeControler_C_refreshSun_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.openSunGate
	 */
	struct AdayTimeControler_C_openSunGate_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.CloseSunGate
	 */
	struct AdayTimeControler_C_CloseSunGate_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.checkPoliceHoursAlarm
	 */
	struct AdayTimeControler_C_checkPoliceHoursAlarm_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.updateCepTime
	 */
	struct AdayTimeControler_C_updateCepTime_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.retrySetDefaultTime
	 */
	struct AdayTimeControler_C_retrySetDefaultTime_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AdayTimeControler_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.SetupLanterns
	 */
	struct AdayTimeControler_C_SetupLanterns_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.DisplayDayID
	 */
	struct AdayTimeControler_C_DisplayDayID_Params
	{	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.ExecuteUbergraph_dayTimeControler
	 */
	struct AdayTimeControler_C_ExecuteUbergraph_dayTimeControler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.SwitchLanterns__DelegateSignature
	 */
	struct AdayTimeControler_C_SwitchLanterns__DelegateSignature_Params
	{
	public:
		bool                                                       TurnedOn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function dayTimeControler.dayTimeControler_C.ClearTrashBins__DelegateSignature
	 */
	struct AdayTimeControler_C_ClearTrashBins__DelegateSignature_Params
	{
	public:
		bool                                                       TotalPurge;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
