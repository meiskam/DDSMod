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
	 * Function PM_PatrolLead.PM_PatrolLead_C.UserConstructionScript
	 */
	struct APM_PatrolLead_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.ShortRadiusChanged
	 */
	struct APM_PatrolLead_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.ReceiveBeginPlay
	 */
	struct APM_PatrolLead_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.ReceiveTick
	 */
	struct APM_PatrolLead_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.EngageSuspect
	 */
	struct APM_PatrolLead_C_EngageSuspect_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APM_PatrolLead_C_BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function PM_PatrolLead.PM_PatrolLead_C.ControlEnded
	 */
	struct APM_PatrolLead_C_ControlEnded_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.breakControl
	 */
	struct APM_PatrolLead_C_breakControl_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.overrideStartSearch
	 */
	struct APM_PatrolLead_C_overrideStartSearch_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.checkForPartner
	 */
	struct APM_PatrolLead_C_checkForPartner_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.unlockRespawnPartner
	 */
	struct APM_PatrolLead_C_unlockRespawnPartner_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.LongRadiusChanged
	 */
	struct APM_PatrolLead_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct APM_PatrolLead_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.WipePatrol
	 */
	struct APM_PatrolLead_C_WipePatrol_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.RetryWipe
	 */
	struct APM_PatrolLead_C_RetryWipe_Params
	{	};

	/**
	 * Function PM_PatrolLead.PM_PatrolLead_C.ExecuteUbergraph_PM_PatrolLead
	 */
	struct APM_PatrolLead_C_ExecuteUbergraph_PM_PatrolLead_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
