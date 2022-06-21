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
	 * Function policeManager.policeManager_C.adaptDifficulty
	 */
	struct ApoliceManager_C_adaptDifficulty_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.calcDrugQuanPenalty
	 */
	struct ApoliceManager_C_calcDrugQuanPenalty_Params
	{
	public:
		int32_t                                                    Fine;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policeManager.policeManager_C.calcDrugGramsPlayer
	 */
	struct ApoliceManager_C_calcDrugGramsPlayer_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.applyPenalties
	 */
	struct ApoliceManager_C_applyPenalties_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.queuePenalty
	 */
	struct ApoliceManager_C_queuePenalty_Params
	{
	public:
		class FText                                                Reson;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AddDrugAmount;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function policeManager.policeManager_C.refreshPolicemenStatus
	 */
	struct ApoliceManager_C_refreshPolicemenStatus_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.resetAllAreas
	 */
	struct ApoliceManager_C_resetAllAreas_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.getMinPatrols
	 */
	struct ApoliceManager_C_getMinPatrols_Params
	{
	public:
		int32_t                                                    minPatrols;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policeManager.policeManager_C.checkWorldStatus
	 */
	struct ApoliceManager_C_checkWorldStatus_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.recallOnePatrol
	 */
	struct ApoliceManager_C_recallOnePatrol_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.spawnNewPatrol
	 */
	struct ApoliceManager_C_spawnNewPatrol_Params
	{
	public:
		bool                                                       Dog;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SpawnAtSecondary;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function policeManager.policeManager_C.assignPatrolArea
	 */
	struct ApoliceManager_C_assignPatrolArea_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.refreshAreaStatus
	 */
	struct ApoliceManager_C_refreshAreaStatus_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.UserConstructionScript
	 */
	struct ApoliceManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.checkRequestQuery
	 */
	struct ApoliceManager_C_checkRequestQuery_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.requestPatrolArea
	 */
	struct ApoliceManager_C_requestPatrolArea_Params
	{
	public:
		class APolicemanBaseClass_C*                               Querier;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policeManager.policeManager_C.playRadioComs
	 */
	struct ApoliceManager_C_playRadioComs_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.trySpawnPatrol
	 */
	struct ApoliceManager_C_trySpawnPatrol_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.ReceiveBeginPlay
	 */
	struct ApoliceManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ApoliceManager_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function policeManager.policeManager_C.tryDisplayPenalty
	 */
	struct ApoliceManager_C_tryDisplayPenalty_Params
	{	};

	/**
	 * Function policeManager.policeManager_C.ExecuteUbergraph_policeManager
	 */
	struct ApoliceManager_C_ExecuteUbergraph_policeManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
