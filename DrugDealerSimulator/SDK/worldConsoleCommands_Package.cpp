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
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.CountClassNum
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::CountClassNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.CountClassNum");
		
		AworldConsoleCommands_C_CountClassNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.UserConstructionScript");
		
		AworldConsoleCommands_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.giveMoney
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::giveMoney(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.giveMoney");
		
		AworldConsoleCommands_C_giveMoney_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.giveBankMoney
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::giveBankMoney(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.giveBankMoney");
		
		AworldConsoleCommands_C_giveBankMoney_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.levelUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::levelUp(int32_t NumLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.levelUp");
		
		AworldConsoleCommands_C_levelUp_Params params {};
		params.NumLevel = NumLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.giveMeExp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              expAmount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::giveMeExp(float expAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.giveMeExp");
		
		AworldConsoleCommands_C_giveMeExp_Params params {};
		params.expAmount = expAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.spawnDrugSource
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::spawnDrugSource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.spawnDrugSource");
		
		AworldConsoleCommands_C_spawnDrugSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.disableSubLevelStreaming
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::disableSubLevelStreaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.disableSubLevelStreaming");
		
		AworldConsoleCommands_C_disableSubLevelStreaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.removeDealers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::removeDealers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.removeDealers");
		
		AworldConsoleCommands_C_removeDealers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.GetNewUpgrades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::GetNewUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.GetNewUpgrades");
		
		AworldConsoleCommands_C_GetNewUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.SetSeenUpgrades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::SetSeenUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.SetSeenUpgrades");
		
		AworldConsoleCommands_C_SetSeenUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.SebaPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::SebaPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.SebaPlay");
		
		AworldConsoleCommands_C_SebaPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.enableTunnelEntering
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::enableTunnelEntering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.enableTunnelEntering");
		
		AworldConsoleCommands_C_enableTunnelEntering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_En
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::LTS_En()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_En");
		
		AworldConsoleCommands_C_LTS_En_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_CC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_CC(int32_t NewParam, int32_t NewParam2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_CC");
		
		AworldConsoleCommands_C_LTS_CC_Params params {};
		params.NewParam = NewParam;
		params.NewParam2 = NewParam2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintUpgrades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::LTS_PrintUpgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintUpgrades");
		
		AworldConsoleCommands_C_LTS_PrintUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_AddMoney
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              moneyAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_AddMoney(int32_t ConnIndex, float moneyAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_AddMoney");
		
		AworldConsoleCommands_C_LTS_AddMoney_Params params {};
		params.ConnIndex = ConnIndex;
		params.moneyAmount = moneyAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintConns
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::LTS_PrintConns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_PrintConns");
		
		AworldConsoleCommands_C_LTS_PrintConns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_GetUpgradesStates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_GetUpgradesStates(int32_t ConnIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_GetUpgradesStates");
		
		AworldConsoleCommands_C_LTS_GetUpgradesStates_Params params {};
		params.ConnIndex = ConnIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_BuyUpgrade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UpgradeIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_BuyUpgrade(int32_t ConnIndex, int32_t UpgradeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_BuyUpgrade");
		
		AworldConsoleCommands_C_LTS_BuyUpgrade_Params params {};
		params.ConnIndex = ConnIndex;
		params.UpgradeIndex = UpgradeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_DetailedUpgrades
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ConnIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_DetailedUpgrades(int32_t ConnIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_DetailedUpgrades");
		
		AworldConsoleCommands_C_LTS_DetailedUpgrades_Params params {};
		params.ConnIndex = ConnIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_DigList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EntranceIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_DigList(int32_t EntranceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_DigList");
		
		AworldConsoleCommands_C_LTS_DigList_Params params {};
		params.EntranceIndex = EntranceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_TeleportList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EntranceIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_TeleportList(int32_t EntranceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_TeleportList");
		
		AworldConsoleCommands_C_LTS_TeleportList_Params params {};
		params.EntranceIndex = EntranceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_NewEn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::LTS_NewEn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_NewEn");
		
		AworldConsoleCommands_C_LTS_NewEn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDigFactor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewDigFactor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_SetDigFactor(float NewDigFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDigFactor");
		
		AworldConsoleCommands_C_LTS_SetDigFactor_Params params {};
		params.NewDigFactor = NewDigFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_StartDEA
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EntranceIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_StartDEA(int32_t EntranceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_StartDEA");
		
		AworldConsoleCommands_C_LTS_StartDEA_Params params {};
		params.EntranceIndex = EntranceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDebGD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewGameDifficulty                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_SetDebGD(int32_t NewGameDifficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_SetDebGD");
		
		AworldConsoleCommands_C_LTS_SetDebGD_Params params {};
		params.NewGameDifficulty = NewGameDifficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.LTS_ClearEnt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EntranceIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::LTS_ClearEnt(int32_t EntranceIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.LTS_ClearEnt");
		
		AworldConsoleCommands_C_LTS_ClearEnt_Params params {};
		params.EntranceIndex = EntranceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.KillAllPolicemen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::KillAllPolicemen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.KillAllPolicemen");
		
		AworldConsoleCommands_C_KillAllPolicemen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.TeleportSectorC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::TeleportSectorC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.TeleportSectorC");
		
		AworldConsoleCommands_C_TeleportSectorC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.TestDrugDemand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::TestDrugDemand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.TestDrugDemand");
		
		AworldConsoleCommands_C_TestDrugDemand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.AddLaunderMoney
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::AddLaunderMoney(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.AddLaunderMoney");
		
		AworldConsoleCommands_C_AddLaunderMoney_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.AddLaunderedMoney
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::AddLaunderedMoney(float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.AddLaunderedMoney");
		
		AworldConsoleCommands_C_AddLaunderedMoney_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.SetExpoLevel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              expoFactorLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::SetExpoLevel(float expoFactorLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.SetExpoLevel");
		
		AworldConsoleCommands_C_SetExpoLevel_Params params {};
		params.expoFactorLevel = expoFactorLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.addInventoryItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::addInventoryItem(const class FName& ItemID, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.addInventoryItem");
		
		AworldConsoleCommands_C_addInventoryItem_Params params {};
		params.ItemID = ItemID;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.TestGetItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::TestGetItem(const class FName& ItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.TestGetItem");
		
		AworldConsoleCommands_C_TestGetItem_Params params {};
		params.ItemID = ItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.TestDealerExp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::TestDealerExp(float Exp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.TestDealerExp");
		
		AworldConsoleCommands_C_TestDealerExp_Params params {};
		params.Exp = Exp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.RegisterExpoEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::RegisterExpoEvent(const class FName& EventID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.RegisterExpoEvent");
		
		AworldConsoleCommands_C_RegisterExpoEvent_Params params {};
		params.EventID = EventID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.RegisterExpoSale
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AmountGrams                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::RegisterExpoSale(int32_t AmountGrams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.RegisterExpoSale");
		
		AworldConsoleCommands_C_RegisterExpoSale_Params params {};
		params.AmountGrams = AmountGrams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.CountKurwaEverything
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::CountKurwaEverything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.CountKurwaEverything");
		
		AworldConsoleCommands_C_CountKurwaEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.WyjebChuj
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AworldConsoleCommands_C::WyjebChuj()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.WyjebChuj");
		
		AworldConsoleCommands_C_WyjebChuj_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function worldConsoleCommands.worldConsoleCommands_C.ExecuteUbergraph_worldConsoleCommands
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AworldConsoleCommands_C::ExecuteUbergraph_worldConsoleCommands(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function worldConsoleCommands.worldConsoleCommands_C.ExecuteUbergraph_worldConsoleCommands");
		
		AworldConsoleCommands_C_ExecuteUbergraph_worldConsoleCommands_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AworldConsoleCommands_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AworldConsoleCommands_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass worldConsoleCommands.worldConsoleCommands_C");
		return ptr;
	}

}


