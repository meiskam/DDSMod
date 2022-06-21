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
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.getDayNam
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            DayID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        dayNum                                                     (Parm, OutParm)
	 */
	void AdayTimeControler_C::getDayNam(int32_t DayID, class FText* dayNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.getDayNam");
		
		AdayTimeControler_C_getDayNam_Params params {};
		params.DayID = DayID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dayNum != nullptr)
			*dayNum = params.dayNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.checkTowers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::checkTowers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.checkTowers");
		
		AdayTimeControler_C_checkTowers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.startTowers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::startTowers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.startTowers");
		
		AdayTimeControler_C_startTowers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.getFutureDate_2
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              hoursFrom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              minutesFrom                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               fullHours                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NightHour                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              outHour                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              outMinute                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            outDay                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdayTimeControler_C::getFutureDate_2(float hoursFrom, float minutesFrom, bool fullHours, bool NightHour, float* outHour, float* outMinute, int32_t* outDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.getFutureDate_2");
		
		AdayTimeControler_C_getFutureDate_2_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.getFutureDate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              hoursFrom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              minutesFrom                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               fullHours                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               randomNightHour                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              outHour                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              outMinute                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            outDay                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdayTimeControler_C::getFutureDate(float hoursFrom, float minutesFrom, bool fullHours, bool randomNightHour, float* outHour, float* outMinute, int32_t* outDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.getFutureDate");
		
		AdayTimeControler_C_getFutureDate_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.getStringTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HourOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ReturnDate                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AdayTimeControler_C::getStringTime(bool HourOnly, class FString* ReturnDate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.getStringTime");
		
		AdayTimeControler_C_getStringTime_Params params {};
		params.HourOnly = HourOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnDate != nullptr)
			*ReturnDate = params.ReturnDate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.setupReferences
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AdayTimeControler_C::setupReferences(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.setupReferences");
		
		AdayTimeControler_C_setupReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.calculateSky
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::calculateSky()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.calculateSky");
		
		AdayTimeControler_C_calculateSky_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.UserConstructionScript");
		
		AdayTimeControler_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AdayTimeControler_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.ReceiveBeginPlay");
		
		AdayTimeControler_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdayTimeControler_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.ReceiveTick");
		
		AdayTimeControler_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.updateSun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::updateSun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.updateSun");
		
		AdayTimeControler_C_updateSun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.disableStreetLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::disableStreetLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.disableStreetLight");
		
		AdayTimeControler_C_disableStreetLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.enableStreetLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::enableStreetLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.enableStreetLight");
		
		AdayTimeControler_C_enableStreetLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.sunDefaults
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::sunDefaults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.sunDefaults");
		
		AdayTimeControler_C_sunDefaults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.AddTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Hours                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Minutes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdayTimeControler_C::AddTime(float Hours, float Minutes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.AddTime");
		
		AdayTimeControler_C_AddTime_Params params {};
		params.Hours = Hours;
		params.Minutes = Minutes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.refreshSun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::refreshSun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.refreshSun");
		
		AdayTimeControler_C_refreshSun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.openSunGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::openSunGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.openSunGate");
		
		AdayTimeControler_C_openSunGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.CloseSunGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::CloseSunGate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.CloseSunGate");
		
		AdayTimeControler_C_CloseSunGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.checkPoliceHoursAlarm
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::checkPoliceHoursAlarm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.checkPoliceHoursAlarm");
		
		AdayTimeControler_C_checkPoliceHoursAlarm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.updateCepTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::updateCepTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.updateCepTime");
		
		AdayTimeControler_C_updateCepTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.retrySetDefaultTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::retrySetDefaultTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.retrySetDefaultTime");
		
		AdayTimeControler_C_retrySetDefaultTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AdayTimeControler_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		AdayTimeControler_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.SetupLanterns
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::SetupLanterns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.SetupLanterns");
		
		AdayTimeControler_C_SetupLanterns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.DisplayDayID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AdayTimeControler_C::DisplayDayID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.DisplayDayID");
		
		AdayTimeControler_C_DisplayDayID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.ExecuteUbergraph_dayTimeControler
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AdayTimeControler_C::ExecuteUbergraph_dayTimeControler(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.ExecuteUbergraph_dayTimeControler");
		
		AdayTimeControler_C_ExecuteUbergraph_dayTimeControler_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.SwitchLanterns__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TurnedOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AdayTimeControler_C::SwitchLanterns__DelegateSignature(bool TurnedOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.SwitchLanterns__DelegateSignature");
		
		AdayTimeControler_C_SwitchLanterns__DelegateSignature_Params params {};
		params.TurnedOn = TurnedOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function dayTimeControler.dayTimeControler_C.ClearTrashBins__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TotalPurge                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AdayTimeControler_C::ClearTrashBins__DelegateSignature(bool TotalPurge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function dayTimeControler.dayTimeControler_C.ClearTrashBins__DelegateSignature");
		
		AdayTimeControler_C_ClearTrashBins__DelegateSignature_Params params {};
		params.TotalPurge = TotalPurge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AdayTimeControler_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AdayTimeControler_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass dayTimeControler.dayTimeControler_C");
		return ptr;
	}

}


