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
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkBackpackForIllegals
	 */
	struct APM_CheckpointGuard_C_checkBackpackForIllegals_Params
	{
	public:
		class AbackpackBase_C*                                     backpack;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       found;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.UserConstructionScript
	 */
	struct APM_CheckpointGuard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveBeginPlay
	 */
	struct APM_CheckpointGuard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveTick
	 */
	struct APM_CheckpointGuard_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.checkTrespass
	 */
	struct APM_CheckpointGuard_C_checkTrespass_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APM_CheckpointGuard_C_BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.ControlEnded
	 */
	struct APM_CheckpointGuard_C_ControlEnded_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.breakControl
	 */
	struct APM_CheckpointGuard_C_breakControl_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.EngageSuspect
	 */
	struct APM_CheckpointGuard_C_EngageSuspect_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.setSuicideTimer
	 */
	struct APM_CheckpointGuard_C_setSuicideTimer_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.trySuicide
	 */
	struct APM_CheckpointGuard_C_trySuicide_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.overrideSearch
	 */
	struct APM_CheckpointGuard_C_overrideSearch_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.ReceiveDestroyed
	 */
	struct APM_CheckpointGuard_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function PM_CheckpointGuard.PM_CheckpointGuard_C.ExecuteUbergraph_PM_CheckpointGuard
	 */
	struct APM_CheckpointGuard_C_ExecuteUbergraph_PM_CheckpointGuard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
