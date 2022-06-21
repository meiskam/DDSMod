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
	 * Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.OnFail_DD4F82004EF7DB5A3D219180586AD970
	 */
	struct UBTTask_Bird_SetMovement_T0_Flying_C_OnFail_DD4F82004EF7DB5A3D219180586AD970_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.OnSuccess_DD4F82004EF7DB5A3D219180586AD970
	 */
	struct UBTTask_Bird_SetMovement_T0_Flying_C_OnSuccess_DD4F82004EF7DB5A3D219180586AD970_Params
	{
	public:
		EPathFollowingResult                                       MovementResult;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.ReceiveExecuteAI
	 */
	struct UBTTask_Bird_SetMovement_T0_Flying_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTTask_Bird_SetMovement_T0_Flying.BTTask_Bird_SetMovement_T0_Flying_C.ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Flying
	 */
	struct UBTTask_Bird_SetMovement_T0_Flying_C_ExecuteUbergraph_BTTask_Bird_SetMovement_T0_Flying_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
