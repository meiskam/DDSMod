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
	 * Function policePatrolArea.policePatrolArea_C.GetPatrolSpawnChances
	 */
	struct ApolicePatrolArea_C_GetPatrolSpawnChances_Params
	{
	public:
		float                                                      Timeout;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ChanceLow;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ChanceHigh;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.SpawnPatrol
	 */
	struct ApolicePatrolArea_C_SpawnPatrol_Params
	{
	public:
		class ApolicePatrolPoint_C*                                spawnPoint;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.chooseSpawnPoint
	 */
	struct ApolicePatrolArea_C_chooseSpawnPoint_Params
	{
	public:
		class ApolicePatrolPoint_C*                                OutPoint;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Succeded;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                FailID;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.getUnreachedPoint
	 */
	struct ApolicePatrolArea_C_getUnreachedPoint_Params
	{
	public:
		class ApolicePatrolPoint_C*                                Patrol_Point;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.UserConstructionScript
	 */
	struct ApolicePatrolArea_C_UserConstructionScript_Params
	{	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.ShortRadiusChanged
	 */
	struct ApolicePatrolArea_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.ReceiveBeginPlay
	 */
	struct ApolicePatrolArea_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.resetPatrolArea
	 */
	struct ApolicePatrolArea_C_resetPatrolArea_Params
	{	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.restartArea
	 */
	struct ApolicePatrolArea_C_restartArea_Params
	{	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.LongRadiusChanged
	 */
	struct ApolicePatrolArea_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.ResetSpawnGate
	 */
	struct ApolicePatrolArea_C_ResetSpawnGate_Params
	{	};

	/**
	 * Function policePatrolArea.policePatrolArea_C.ExecuteUbergraph_policePatrolArea
	 */
	struct ApolicePatrolArea_C_ExecuteUbergraph_policePatrolArea_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
