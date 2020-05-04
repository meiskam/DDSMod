#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveDeadEnemy
struct ABird_AI_Controller_C_RemoveDeadEnemy_Params
{
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveExpiredEnemy
struct ABird_AI_Controller_C_RemoveExpiredEnemy_Params
{
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.ApplyDamageFromActor
struct ABird_AI_Controller_C_ApplyDamageFromActor_Params
{
	class AActor*                                      DamagingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDamageUtility
struct ABird_AI_Controller_C_CalculateDamageUtility_Params
{
	struct FBird_EnemySelection_Structure              EnemySelection_Input;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Utility;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceUtility
struct ABird_AI_Controller_C_CalculateDistanceUtility_Params
{
	struct FBird_EnemySelection_Structure              EnemySelection_Input;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Utility;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceToActor
struct ABird_AI_Controller_C_CalculateDistanceToActor_Params
{
	class AActor*                                      InputActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToActor;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.AddActorToEnemyArray
struct ABird_AI_Controller_C_AddActorToEnemyArray_Params
{
	class AActor*                                      InputActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.UserConstructionScript
struct ABird_AI_Controller_C_UserConstructionScript_Params
{
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.OnPossess
struct ABird_AI_Controller_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature
struct ABird_AI_Controller_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature_Params
{
	TArray<class AActor*>                              UpdatedActors;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.EnemySelection
struct ABird_AI_Controller_C_EnemySelection_Params
{
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.OnEnemyDestroyed
struct ABird_AI_Controller_C_OnEnemyDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.ExpireEnemies
struct ABird_AI_Controller_C_ExpireEnemies_Params
{
};

// Function Bird_AI_Controller.Bird_AI_Controller_C.ExecuteUbergraph_Bird_AI_Controller
struct ABird_AI_Controller_C_ExecuteUbergraph_Bird_AI_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
