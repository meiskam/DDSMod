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
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.CheckCanReachPlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanReach                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APolicemanBaseClass_C::CheckCanReachPlayer(bool* CanReach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.CheckCanReachPlayer");
		
		APolicemanBaseClass_C_CheckCanReachPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanReach != nullptr)
			*CanReach = params.CanReach;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.adaptDifficulty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::adaptDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.adaptDifficulty");
		
		APolicemanBaseClass_C_adaptDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.checkCanSpotPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               canSpot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APolicemanBaseClass_C::checkCanSpotPlayer(bool* canSpot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.checkCanSpotPlayer");
		
		APolicemanBaseClass_C_checkCanSpotPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canSpot != nullptr)
			*canSpot = params.canSpot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.checkBallenaProtection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               protected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APolicemanBaseClass_C::checkBallenaProtection(bool* protected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.checkBallenaProtection");
		
		APolicemanBaseClass_C_checkBallenaProtection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (protected != nullptr)
			*protected = params.protected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.checkPlayerRunning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::checkPlayerRunning(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.checkPlayerRunning");
		
		APolicemanBaseClass_C_checkPlayerRunning_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.finishChasing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               stayAlerted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APolicemanBaseClass_C::finishChasing(bool stayAlerted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.finishChasing");
		
		APolicemanBaseClass_C_finishChasing_Params params {};
		params.stayAlerted = stayAlerted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.checkChasingPolicemen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::checkChasingPolicemen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.checkChasingPolicemen");
		
		APolicemanBaseClass_C_checkChasingPolicemen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.calcControlMultiplier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::calcControlMultiplier(class AplayerCharacterBP_C* PlayerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.calcControlMultiplier");
		
		APolicemanBaseClass_C_calcControlMultiplier_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.alertedCountdown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::alertedCountdown(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.alertedCountdown");
		
		APolicemanBaseClass_C_alertedCountdown_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.calcPerceptionRaise
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float APolicemanBaseClass_C::calcPerceptionRaise(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.calcPerceptionRaise");
		
		APolicemanBaseClass_C_calcPerceptionRaise_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.playVoiceSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundCue*                                   Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::playVoiceSound(class USoundCue* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.playVoiceSound");
		
		APolicemanBaseClass_C_playVoiceSound_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardVector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     VectorVal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::setBlackboardVector(const class FName& KeyName, const struct FVector& VectorVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardVector");
		
		APolicemanBaseClass_C_setBlackboardVector_Params params {};
		params.KeyName = KeyName;
		params.VectorVal = VectorVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardString
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      StringVal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::setBlackboardString(const class FName& KeyName, const class FString& StringVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardString");
		
		APolicemanBaseClass_C_setBlackboardString_Params params {};
		params.KeyName = KeyName;
		params.StringVal = StringVal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardBool
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BoolValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APolicemanBaseClass_C::setBlackboardBool(const class FName& KeyName, bool BoolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardBool");
		
		APolicemanBaseClass_C_setBlackboardBool_Params params {};
		params.KeyName = KeyName;
		params.BoolValue = BoolValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.lookAtPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               lookAtPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APolicemanBaseClass_C::lookAtPlayer(float DeltaTime, bool lookAtPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.lookAtPlayer");
		
		APolicemanBaseClass_C_lookAtPlayer_Params params {};
		params.DeltaTime = DeltaTime;
		params.lookAtPlayer = lookAtPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.UserConstructionScript");
		
		APolicemanBaseClass_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveTick");
		
		APolicemanBaseClass_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void APolicemanBaseClass_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature");
		
		APolicemanBaseClass_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.playSeekSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::playSeekSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.playSeekSound");
		
		APolicemanBaseClass_C_playSeekSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveBeginPlay");
		
		APolicemanBaseClass_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.InitialiseMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::InitialiseMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.InitialiseMe");
		
		APolicemanBaseClass_C_InitialiseMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.RecallPatrol
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::RecallPatrol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.RecallPatrol");
		
		APolicemanBaseClass_C_RecallPatrol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.HeardSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::HeardSound(float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.HeardSound");
		
		APolicemanBaseClass_C_HeardSound_Params params {};
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.sightTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::sightTick(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.sightTick");
		
		APolicemanBaseClass_C_sightTick_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.observationUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::observationUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.observationUpdate");
		
		APolicemanBaseClass_C_observationUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.EngageSuspect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::EngageSuspect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.EngageSuspect");
		
		APolicemanBaseClass_C_EngageSuspect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.LostPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::LostPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.LostPlayer");
		
		APolicemanBaseClass_C_LostPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.SetChaseMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::SetChaseMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.SetChaseMode");
		
		APolicemanBaseClass_C_SetChaseMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.EndChase
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               stayAlerted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               cancelAllChasers                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APolicemanBaseClass_C::EndChase(bool stayAlerted, bool cancelAllChasers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.EndChase");
		
		APolicemanBaseClass_C_EndChase_Params params {};
		params.stayAlerted = stayAlerted;
		params.cancelAllChasers = cancelAllChasers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.ReangageChase
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::ReangageChase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.ReangageChase");
		
		APolicemanBaseClass_C_ReangageChase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.walkSpeedCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::walkSpeedCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.walkSpeedCheck");
		
		APolicemanBaseClass_C_walkSpeedCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.removeMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::removeMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.removeMe");
		
		APolicemanBaseClass_C_removeMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.forceSuspect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::forceSuspect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.forceSuspect");
		
		APolicemanBaseClass_C_forceSuspect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.despawnPatrol
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::despawnPatrol()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.despawnPatrol");
		
		APolicemanBaseClass_C_despawnPatrol_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.tryDespawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::tryDespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.tryDespawn");
		
		APolicemanBaseClass_C_tryDespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.resetHear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::resetHear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.resetHear");
		
		APolicemanBaseClass_C_resetHear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.InitBehaviour
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::InitBehaviour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.InitBehaviour");
		
		APolicemanBaseClass_C_InitBehaviour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.CameraAlert
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APolicemanBaseClass_C::CameraAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.CameraAlert");
		
		APolicemanBaseClass_C_CameraAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function PolicemanBaseClass.PolicemanBaseClass_C.ExecuteUbergraph_PolicemanBaseClass
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APolicemanBaseClass_C::ExecuteUbergraph_PolicemanBaseClass(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.ExecuteUbergraph_PolicemanBaseClass");
		
		APolicemanBaseClass_C_ExecuteUbergraph_PolicemanBaseClass_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APolicemanBaseClass_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APolicemanBaseClass_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PolicemanBaseClass.PolicemanBaseClass_C");
		return ptr;
	}

}


