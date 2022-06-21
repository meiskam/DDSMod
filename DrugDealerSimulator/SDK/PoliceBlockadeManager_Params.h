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
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetBlockadeLifetime
	 */
	struct APoliceBlockadeManager_C_GetBlockadeLifetime_Params
	{
	public:
		float                                                      LifeTime;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.GetSpawnChance
	 */
	struct APoliceBlockadeManager_C_GetSpawnChance_Params
	{
	public:
		float                                                      SpawnChance;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.chooseSpawnPoint
	 */
	struct APoliceBlockadeManager_C_chooseSpawnPoint_Params
	{
	public:
		class APoliceBlockadeArea_C*                               OutArea;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.RegisterPlayer
	 */
	struct APoliceBlockadeManager_C_RegisterPlayer_Params
	{
	public:
		class APoliceBlockadeArea_C*                               Area;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.UserConstructionScript
	 */
	struct APoliceBlockadeManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveBeginPlay
	 */
	struct APoliceBlockadeManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.ReceiveTick
	 */
	struct APoliceBlockadeManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.ForceSpawnBlockade
	 */
	struct APoliceBlockadeManager_C_ForceSpawnBlockade_Params
	{	};

	/**
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.CheckRefs
	 */
	struct APoliceBlockadeManager_C_CheckRefs_Params
	{	};

	/**
	 * Function PoliceBlockadeManager.PoliceBlockadeManager_C.ExecuteUbergraph_PoliceBlockadeManager
	 */
	struct APoliceBlockadeManager_C_ExecuteUbergraph_PoliceBlockadeManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
