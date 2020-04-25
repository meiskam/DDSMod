
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveDeadEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void ABird_AI_Controller_C::RemoveDeadEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveDeadEnemy");

	ABird_AI_Controller_C_RemoveDeadEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveExpiredEnemy
// (Public, BlueprintCallable, BlueprintEvent)

void ABird_AI_Controller_C::RemoveExpiredEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveExpiredEnemy");

	ABird_AI_Controller_C_RemoveExpiredEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.ApplyDamageFromActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABird_AI_Controller_C::ApplyDamageFromActor(class AActor* DamagingActor, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.ApplyDamageFromActor");

	ABird_AI_Controller_C_ApplyDamageFromActor_Params params;
	params.DamagingActor = DamagingActor;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDamageUtility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBird_EnemySelection_Structure EnemySelection_Input           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Utility                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABird_AI_Controller_C::CalculateDamageUtility(const struct FBird_EnemySelection_Structure& EnemySelection_Input, float* Utility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDamageUtility");

	ABird_AI_Controller_C_CalculateDamageUtility_Params params;
	params.EnemySelection_Input = EnemySelection_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Utility != nullptr)
		*Utility = params.Utility;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceUtility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBird_EnemySelection_Structure EnemySelection_Input           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Utility                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABird_AI_Controller_C::CalculateDistanceUtility(const struct FBird_EnemySelection_Structure& EnemySelection_Input, float* Utility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceUtility");

	ABird_AI_Controller_C_CalculateDistanceUtility_Params params;
	params.EnemySelection_Input = EnemySelection_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Utility != nullptr)
		*Utility = params.Utility;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceToActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InputActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceToActor                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABird_AI_Controller_C::CalculateDistanceToActor(class AActor* InputActor, float* DistanceToActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceToActor");

	ABird_AI_Controller_C_CalculateDistanceToActor_Params params;
	params.InputActor = InputActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceToActor != nullptr)
		*DistanceToActor = params.DistanceToActor;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.AddActorToEnemyArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InputActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABird_AI_Controller_C::AddActorToEnemyArray(class AActor* InputActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.AddActorToEnemyArray");

	ABird_AI_Controller_C_AddActorToEnemyArray_Params params;
	params.InputActor = InputActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABird_AI_Controller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.UserConstructionScript");

	ABird_AI_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABird_AI_Controller_C::OnPossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.OnPossess");

	ABird_AI_Controller_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          UpdatedActors                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABird_AI_Controller_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature(TArray<class AActor*> UpdatedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature");

	ABird_AI_Controller_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.UpdatedActors = UpdatedActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.EnemySelection
// (BlueprintCallable, BlueprintEvent)

void ABird_AI_Controller_C::EnemySelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.EnemySelection");

	ABird_AI_Controller_C_EnemySelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.OnEnemyDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABird_AI_Controller_C::OnEnemyDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.OnEnemyDestroyed");

	ABird_AI_Controller_C_OnEnemyDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.ExpireEnemies
// (BlueprintCallable, BlueprintEvent)

void ABird_AI_Controller_C::ExpireEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.ExpireEnemies");

	ABird_AI_Controller_C_ExpireEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bird_AI_Controller.Bird_AI_Controller_C.ExecuteUbergraph_Bird_AI_Controller
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABird_AI_Controller_C::ExecuteUbergraph_Bird_AI_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.ExecuteUbergraph_Bird_AI_Controller");

	ABird_AI_Controller_C_ExecuteUbergraph_Bird_AI_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
