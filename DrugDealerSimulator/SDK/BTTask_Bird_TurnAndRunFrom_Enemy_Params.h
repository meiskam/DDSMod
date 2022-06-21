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
	 * Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnFail_A030AE6644CF82915307329D4CCBBD31
	 */
	struct UBTTask_Bird_TurnAndRunFrom_Enemy_C_OnFail_A030AE6644CF82915307329D4CCBBD31_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.OnSuccess_A030AE6644CF82915307329D4CCBBD31
	 */
	struct UBTTask_Bird_TurnAndRunFrom_Enemy_C_OnSuccess_A030AE6644CF82915307329D4CCBBD31_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ReceiveExecuteAI
	 */
	struct UBTTask_Bird_TurnAndRunFrom_Enemy_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_TurnAndRunFrom_Enemy.BTTask_Bird_TurnAndRunFrom_Enemy_C.ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy
	 */
	struct UBTTask_Bird_TurnAndRunFrom_Enemy_C_ExecuteUbergraph_BTTask_Bird_TurnAndRunFrom_Enemy_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
