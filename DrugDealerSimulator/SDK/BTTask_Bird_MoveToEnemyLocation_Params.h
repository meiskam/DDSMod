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
	 * Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnFail_F22B8A5A43E73BA6CA860ABAD38534D2
	 */
	struct UBTTask_Bird_MoveToEnemyLocation_C_OnFail_F22B8A5A43E73BA6CA860ABAD38534D2_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2
	 */
	struct UBTTask_Bird_MoveToEnemyLocation_C_OnSuccess_F22B8A5A43E73BA6CA860ABAD38534D2_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ReceiveExecuteAI
	 */
	struct UBTTask_Bird_MoveToEnemyLocation_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_MoveToEnemyLocation.BTTask_Bird_MoveToEnemyLocation_C.ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation
	 */
	struct UBTTask_Bird_MoveToEnemyLocation_C_ExecuteUbergraph_BTTask_Bird_MoveToEnemyLocation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
