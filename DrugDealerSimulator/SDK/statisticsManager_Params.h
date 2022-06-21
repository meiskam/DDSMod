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
	 * Function statisticsManager.statisticsManager_C.ExpandRama
	 */
	struct AstatisticsManager_C_ExpandRama_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.GetTimecode
	 */
	struct AstatisticsManager_C_GetTimecode_Params
	{
	public:
		int32_t                                                    OutTimecode;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.UpdateExpositionLevel
	 */
	struct AstatisticsManager_C_UpdateExpositionLevel_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.NewExpoSale
	 */
	struct AstatisticsManager_C_NewExpoSale_Params
	{
	public:
		int32_t                                                    AmountGrams;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.NewExpoEvent
	 */
	struct AstatisticsManager_C_NewExpoEvent_Params
	{
	public:
		class FName                                                EventID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.adaptDifficulty
	 */
	struct AstatisticsManager_C_adaptDifficulty_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.tryDisplayExpPopup
	 */
	struct AstatisticsManager_C_tryDisplayExpPopup_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.upgradeSkill
	 */
	struct AstatisticsManager_C_upgradeSkill_Params
	{
	public:
		int32_t                                                    SkillID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      UpgradeAmount;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.subtractSkillPoints
	 */
	struct AstatisticsManager_C_subtractSkillPoints_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.levelUpFunctions
	 */
	struct AstatisticsManager_C_levelUpFunctions_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.canAddInfoWidget
	 */
	struct AstatisticsManager_C_canAddInfoWidget_Params
	{
	public:
		bool                                                       CanAddWidget;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.startDeaObservation
	 */
	struct AstatisticsManager_C_startDeaObservation_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.modifyReputation
	 */
	struct AstatisticsManager_C_modifyReputation_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.factorTimeDrop
	 */
	struct AstatisticsManager_C_factorTimeDrop_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.addExpoEvent
	 */
	struct AstatisticsManager_C_addExpoEvent_Params
	{
	public:
		float                                                      ExpoValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.addRiskEvent
	 */
	struct AstatisticsManager_C_addRiskEvent_Params
	{
	public:
		float                                                      RiskValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.addExp
	 */
	struct AstatisticsManager_C_addExp_Params
	{
	public:
		float                                                      expAmount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.calcExpForLevelUp
	 */
	struct AstatisticsManager_C_calcExpForLevelUp_Params
	{
	public:
		float                                                      ExpLacking;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExpNeededTotal;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NextLevelProgress;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.UserConstructionScript
	 */
	struct AstatisticsManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.ReceiveBeginPlay
	 */
	struct AstatisticsManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.ReceiveTick
	 */
	struct AstatisticsManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.levelUpWidget
	 */
	struct AstatisticsManager_C_levelUpWidget_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.checkStatuses
	 */
	struct AstatisticsManager_C_checkStatuses_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.tryShowLevel
	 */
	struct AstatisticsManager_C_tryShowLevel_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.reInitiate
	 */
	struct AstatisticsManager_C_reInitiate_Params
	{	};

	/**
	 * Function statisticsManager.statisticsManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AstatisticsManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function statisticsManager.statisticsManager_C.ExecuteUbergraph_statisticsManager
	 */
	struct AstatisticsManager_C_ExecuteUbergraph_statisticsManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
