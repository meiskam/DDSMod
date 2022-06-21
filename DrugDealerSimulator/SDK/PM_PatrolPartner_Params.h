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
	 * Function PM_PatrolPartner.PM_PatrolPartner_C.UserConstructionScript
	 */
	struct APM_PatrolPartner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PM_PatrolPartner.PM_PatrolPartner_C.ReceiveBeginPlay
	 */
	struct APM_PatrolPartner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PM_PatrolPartner.PM_PatrolPartner_C.SetupPartner
	 */
	struct APM_PatrolPartner_C_SetupPartner_Params
	{
	public:
		class APM_PatrolLead_C*                                    LeadRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PM_PatrolPartner.PM_PatrolPartner_C.EngageSuspect
	 */
	struct APM_PatrolPartner_C_EngageSuspect_Params
	{	};

	/**
	 * Function PM_PatrolPartner.PM_PatrolPartner_C.SyncWithPartner
	 */
	struct APM_PatrolPartner_C_SyncWithPartner_Params
	{	};

	/**
	 * Function PM_PatrolPartner.PM_PatrolPartner_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct APM_PatrolPartner_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PM_PatrolPartner.PM_PatrolPartner_C.ExecuteUbergraph_PM_PatrolPartner
	 */
	struct APM_PatrolPartner_C_ExecuteUbergraph_PM_PatrolPartner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
