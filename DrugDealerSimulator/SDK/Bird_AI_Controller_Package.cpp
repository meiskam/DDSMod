/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveDeadEnemy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABird_AI_Controller_C::RemoveDeadEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveDeadEnemy");
		
		ABird_AI_Controller_C_RemoveDeadEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveExpiredEnemy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABird_AI_Controller_C::RemoveExpiredEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.RemoveExpiredEnemy");
		
		ABird_AI_Controller_C_RemoveExpiredEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.ApplyDamageFromActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagingActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABird_AI_Controller_C::ApplyDamageFromActor(class AActor* DamagingActor, float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.ApplyDamageFromActor");
		
		ABird_AI_Controller_C_ApplyDamageFromActor_Params params {};
		params.DamagingActor = DamagingActor;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDamageUtility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBird_EnemySelection_Structure              EnemySelection_Input                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Utility                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABird_AI_Controller_C::CalculateDamageUtility(const struct FBird_EnemySelection_Structure& EnemySelection_Input, float* Utility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDamageUtility");
		
		ABird_AI_Controller_C_CalculateDamageUtility_Params params {};
		params.EnemySelection_Input = EnemySelection_Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Utility != nullptr)
			*Utility = params.Utility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceUtility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBird_EnemySelection_Structure              EnemySelection_Input                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Utility                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABird_AI_Controller_C::CalculateDistanceUtility(const struct FBird_EnemySelection_Structure& EnemySelection_Input, float* Utility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceUtility");
		
		ABird_AI_Controller_C_CalculateDistanceUtility_Params params {};
		params.EnemySelection_Input = EnemySelection_Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Utility != nullptr)
			*Utility = params.Utility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceToActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      InputActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistanceToActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABird_AI_Controller_C::CalculateDistanceToActor(class AActor* InputActor, float* DistanceToActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.CalculateDistanceToActor");
		
		ABird_AI_Controller_C_CalculateDistanceToActor_Params params {};
		params.InputActor = InputActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistanceToActor != nullptr)
			*DistanceToActor = params.DistanceToActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.AddActorToEnemyArray
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InputActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABird_AI_Controller_C::AddActorToEnemyArray(class AActor* InputActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.AddActorToEnemyArray");
		
		ABird_AI_Controller_C_AddActorToEnemyArray_Params params {};
		params.InputActor = InputActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABird_AI_Controller_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.UserConstructionScript");
		
		ABird_AI_Controller_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.OnPossess
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABird_AI_Controller_C::OnPossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.OnPossess");
		
		ABird_AI_Controller_C_OnPossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              UpdatedActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABird_AI_Controller_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature(TArray<class AActor*> UpdatedActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature");
		
		ABird_AI_Controller_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature_Params params {};
		params.UpdatedActors = UpdatedActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.EnemySelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABird_AI_Controller_C::EnemySelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.EnemySelection");
		
		ABird_AI_Controller_C_EnemySelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.OnEnemyDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABird_AI_Controller_C::OnEnemyDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.OnEnemyDestroyed");
		
		ABird_AI_Controller_C_OnEnemyDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.ExpireEnemies
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABird_AI_Controller_C::ExpireEnemies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.ExpireEnemies");
		
		ABird_AI_Controller_C_ExpireEnemies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function Bird_AI_Controller.Bird_AI_Controller_C.ExecuteUbergraph_Bird_AI_Controller
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABird_AI_Controller_C::ExecuteUbergraph_Bird_AI_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bird_AI_Controller.Bird_AI_Controller_C.ExecuteUbergraph_Bird_AI_Controller");
		
		ABird_AI_Controller_C_ExecuteUbergraph_Bird_AI_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABird_AI_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABird_AI_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Bird_AI_Controller.Bird_AI_Controller_C");
		return ptr;
	}

}


