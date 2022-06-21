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
	 * Function saleAreaManager.saleAreaManager_C.VerifyNewAreas
	 */
	struct AsaleAreaManager_C_VerifyNewAreas_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.onLoadScripts
	 */
	struct AsaleAreaManager_C_onLoadScripts_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.adaptDifficulty
	 */
	struct AsaleAreaManager_C_adaptDifficulty_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.checkSectorBAreas
	 */
	struct AsaleAreaManager_C_checkSectorBAreas_Params
	{
	public:
		bool                                                       _3Unlocked;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.checkAreaRespect
	 */
	struct AsaleAreaManager_C_checkAreaRespect_Params
	{
	public:
		bool                                                       LowRespect;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.displayExposure
	 */
	struct AsaleAreaManager_C_displayExposure_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.returnAvailableAreas
	 */
	struct AsaleAreaManager_C_returnAvailableAreas_Params
	{
	public:
		TArray<class FString>                                      AreaList;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		int32_t                                                    NumAreas;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AreaClientsMax;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.addAreaExposure
	 */
	struct AsaleAreaManager_C_addAreaExposure_Params
	{
	public:
		class FString                                              stringnam;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.dropExposure
	 */
	struct AsaleAreaManager_C_dropExposure_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.UserConstructionScript
	 */
	struct AsaleAreaManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.ReceiveBeginPlay
	 */
	struct AsaleAreaManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.ReceiveTick
	 */
	struct AsaleAreaManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.updateExpoStatus
	 */
	struct AsaleAreaManager_C_updateExpoStatus_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.newAreaUnlocked
	 */
	struct AsaleAreaManager_C_newAreaUnlocked_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.checkAreaStatuses
	 */
	struct AsaleAreaManager_C_checkAreaStatuses_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.checkAreaAvailability
	 */
	struct AsaleAreaManager_C_checkAreaAvailability_Params
	{	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AsaleAreaManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function saleAreaManager.saleAreaManager_C.ExecuteUbergraph_saleAreaManager
	 */
	struct AsaleAreaManager_C_ExecuteUbergraph_saleAreaManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
