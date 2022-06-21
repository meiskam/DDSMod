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
	 * Function rentAppartmentArea.rentAppartmentArea_C.CheckTabletops
	 */
	struct ArentAppartmentArea_C_CheckTabletops_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.VerifyInventory
	 */
	struct ArentAppartmentArea_C_VerifyInventory_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.GetHideoutMeta
	 */
	struct ArentAppartmentArea_C_GetHideoutMeta_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHideoutData                                        HideoutMeta;                                             // 0x0000(0x0080)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.PassDataToOriginal
	 */
	struct ArentAppartmentArea_C_PassDataToOriginal_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.checkWeedStatus
	 */
	struct ArentAppartmentArea_C_checkWeedStatus_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.mapMarkerCheck
	 */
	struct ArentAppartmentArea_C_mapMarkerCheck_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.markerOpc
	 */
	struct ArentAppartmentArea_C_markerOpc_Params
	{
	public:
		bool                                                       showing;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.updateHideoutSetup
	 */
	struct ArentAppartmentArea_C_updateHideoutSetup_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.updateAreaNam
	 */
	struct ArentAppartmentArea_C_updateAreaNam_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.observationCountdown
	 */
	struct ArentAppartmentArea_C_observationCountdown_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.vanCanSpawn
	 */
	struct ArentAppartmentArea_C_vanCanSpawn_Params
	{
	public:
		class AdeaRaidManager_C*                                   raidManager;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AdeaRaidCarSpawnPoint_C*                             suvSpawnPoint;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanSpawn;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.suvCanSpawn
	 */
	struct ArentAppartmentArea_C_suvCanSpawn_Params
	{
	public:
		class AdeaRaidManager_C*                                   raidManager;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AdeaRaidCarSpawnPoint_C*                             suvSpawnPoint;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanSpawn;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.spawnFlashBang
	 */
	struct ArentAppartmentArea_C_spawnFlashBang_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.addInventoryItem
	 */
	struct ArentAppartmentArea_C_addInventoryItem_Params
	{
	public:
		struct FappartmentEquipment                                EqData;                                                  // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FName                                                EquipmentID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.removeInventoryItem
	 */
	struct ArentAppartmentArea_C_removeInventoryItem_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.checkPlayerOverlaping
	 */
	struct ArentAppartmentArea_C_checkPlayerOverlaping_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.UserConstructionScript
	 */
	struct ArentAppartmentArea_C_UserConstructionScript_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.ReceiveBeginPlay
	 */
	struct ArentAppartmentArea_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.ReceiveActorBeginOverlap
	 */
	struct ArentAppartmentArea_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.ReceiveTick
	 */
	struct ArentAppartmentArea_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.ReceiveActorEndOverlap
	 */
	struct ArentAppartmentArea_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.purgeAppartment
	 */
	struct ArentAppartmentArea_C_purgeAppartment_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.unlockAppartment
	 */
	struct ArentAppartmentArea_C_unlockAppartment_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.areaRaidStarted
	 */
	struct ArentAppartmentArea_C_areaRaidStarted_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.areaRaidEnded
	 */
	struct ArentAppartmentArea_C_areaRaidEnded_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.deaMoveIn
	 */
	struct ArentAppartmentArea_C_deaMoveIn_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.nextFlashBang
	 */
	struct ArentAppartmentArea_C_nextFlashBang_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.startAreaDEA_Obeservation
	 */
	struct ArentAppartmentArea_C_startAreaDEA_Obeservation_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.endAreaDEA_Observation
	 */
	struct ArentAppartmentArea_C_endAreaDEA_Observation_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.deaObservationUpdate
	 */
	struct ArentAppartmentArea_C_deaObservationUpdate_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.resetDeaRaid
	 */
	struct ArentAppartmentArea_C_resetDeaRaid_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.showEscapeRouts
	 */
	struct ArentAppartmentArea_C_showEscapeRouts_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.tryCleanupRaid
	 */
	struct ArentAppartmentArea_C_tryCleanupRaid_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.PlayerBustedByDEA
	 */
	struct ArentAppartmentArea_C_PlayerBustedByDEA_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.resetApartment
	 */
	struct ArentAppartmentArea_C_resetApartment_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.tryResetMe
	 */
	struct ArentAppartmentArea_C_tryResetMe_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.updateMarker
	 */
	struct ArentAppartmentArea_C_updateMarker_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.weedPotentialFail
	 */
	struct ArentAppartmentArea_C_weedPotentialFail_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.resetFailStatusRefresh
	 */
	struct ArentAppartmentArea_C_resetFailStatusRefresh_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.resetFilterWarning
	 */
	struct ArentAppartmentArea_C_resetFilterWarning_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct ArentAppartmentArea_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.DisplayItems
	 */
	struct ArentAppartmentArea_C_DisplayItems_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.OldLoadReinit
	 */
	struct ArentAppartmentArea_C_OldLoadReinit_Params
	{	};

	/**
	 * Function rentAppartmentArea.rentAppartmentArea_C.ExecuteUbergraph_rentAppartmentArea
	 */
	struct ArentAppartmentArea_C_ExecuteUbergraph_rentAppartmentArea_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
