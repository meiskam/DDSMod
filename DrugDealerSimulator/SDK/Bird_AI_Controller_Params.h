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
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveDeadEnemy
	 */
	struct ABird_AI_Controller_C_RemoveDeadEnemy_Params
	{	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveExpiredEnemy
	 */
	struct ABird_AI_Controller_C_RemoveExpiredEnemy_Params
	{	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.ApplyDamageFromActor
	 */
	struct ABird_AI_Controller_C_ApplyDamageFromActor_Params
	{
	public:
		class AActor*                                              DamagingActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDamageUtility
	 */
	struct ABird_AI_Controller_C_CalculateDamageUtility_Params
	{
	public:
		struct FBird_EnemySelection_Structure                      EnemySelection_Input;                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Utility;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceUtility
	 */
	struct ABird_AI_Controller_C_CalculateDistanceUtility_Params
	{
	public:
		struct FBird_EnemySelection_Structure                      EnemySelection_Input;                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Utility;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceToActor
	 */
	struct ABird_AI_Controller_C_CalculateDistanceToActor_Params
	{
	public:
		class AActor*                                              InputActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DistanceToActor;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.AddActorToEnemyArray
	 */
	struct ABird_AI_Controller_C_AddActorToEnemyArray_Params
	{
	public:
		class AActor*                                              InputActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.UserConstructionScript
	 */
	struct ABird_AI_Controller_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.OnPossess
	 */
	struct ABird_AI_Controller_C_OnPossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature
	 */
	struct ABird_AI_Controller_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature_Params
	{
	public:
		TArray<class AActor*>                                      UpdatedActors;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.EnemySelection
	 */
	struct ABird_AI_Controller_C_EnemySelection_Params
	{	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.OnEnemyDestroyed
	 */
	struct ABird_AI_Controller_C_OnEnemyDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.ExpireEnemies
	 */
	struct ABird_AI_Controller_C_ExpireEnemies_Params
	{	};

	/**
	 * Function Bird_AI_Controller.Bird_AI_Controller_C.ExecuteUbergraph_Bird_AI_Controller
	 */
	struct ABird_AI_Controller_C_ExecuteUbergraph_Bird_AI_Controller_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
