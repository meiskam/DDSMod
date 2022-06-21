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
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.ClearBlockade
	 */
	struct APoliceBlockadeArea_C_ClearBlockade_Params
	{	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.SpawnBlockade
	 */
	struct APoliceBlockadeArea_C_SpawnBlockade_Params
	{	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanDespawn
	 */
	struct APoliceBlockadeArea_C_CanDespawn_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.CanSpawn
	 */
	struct APoliceBlockadeArea_C_CanSpawn_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.RegisterPlayerPass
	 */
	struct APoliceBlockadeArea_C_RegisterPlayerPass_Params
	{	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.UserConstructionScript
	 */
	struct APoliceBlockadeArea_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveBeginPlay
	 */
	struct APoliceBlockadeArea_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.ReceiveTick
	 */
	struct APoliceBlockadeArea_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct APoliceBlockadeArea_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.TrySpawnBlockade
	 */
	struct APoliceBlockadeArea_C_TrySpawnBlockade_Params
	{	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.TryDespawnBlockade
	 */
	struct APoliceBlockadeArea_C_TryDespawnBlockade_Params
	{	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceSpawn
	 */
	struct APoliceBlockadeArea_C_ForceSpawn_Params
	{	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.ForceClear
	 */
	struct APoliceBlockadeArea_C_ForceClear_Params
	{	};

	/**
	 * Function PoliceBlockadeArea.PoliceBlockadeArea_C.ExecuteUbergraph_PoliceBlockadeArea
	 */
	struct APoliceBlockadeArea_C_ExecuteUbergraph_PoliceBlockadeArea_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
