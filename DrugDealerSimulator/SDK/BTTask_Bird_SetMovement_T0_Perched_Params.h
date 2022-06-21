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
	 * Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.OnFail_1112766D49DE3644F96D37AFC9E0BC84
	 */
	struct UBTTask_Bird_SetMovement_T0_Perched_C_OnFail_1112766D49DE3644F96D37AFC9E0BC84_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.OnSuccess_1112766D49DE3644F96D37AFC9E0BC84
	 */
	struct UBTTask_Bird_SetMovement_T0_Perched_C_OnSuccess_1112766D49DE3644F96D37AFC9E0BC84_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.ReceiveExecuteAI
	 */
	struct UBTTask_Bird_SetMovement_T0_Perched_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_SetMovement_T0_Perched.BTTask_Bird_SetMovement_T0_Perched_C.ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Perched
	 */
	struct UBTTask_Bird_SetMovement_T0_Perched_C_ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Perched_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
