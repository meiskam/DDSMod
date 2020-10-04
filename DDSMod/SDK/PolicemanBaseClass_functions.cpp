
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PolicemanBaseClass.PolicemanBaseClass_C.adaptDifficulty
// (Public, BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::adaptDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.adaptDifficulty");

	APolicemanBaseClass_C_adaptDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.checkCanSpotPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           canSpot                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::checkCanSpotPlayer(bool* canSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.checkCanSpotPlayer");

	APolicemanBaseClass_C_checkCanSpotPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSpot != nullptr)
		*canSpot = params.canSpot;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.checkBallenaProtection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           isProtected                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::checkBallenaProtection(bool* isProtected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.checkBallenaProtection");

	APolicemanBaseClass_C_checkBallenaProtection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isProtected != nullptr)
		*isProtected = params.isProtected;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.checkPlayerRunning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::checkPlayerRunning(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.checkPlayerRunning");

	APolicemanBaseClass_C_checkPlayerRunning_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.finishChasing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StayAlerted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::finishChasing(bool StayAlerted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.finishChasing");

	APolicemanBaseClass_C_finishChasing_Params params;
	params.StayAlerted = StayAlerted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.checkChasingPolicemen
// (Public, BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::checkChasingPolicemen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.checkChasingPolicemen");

	APolicemanBaseClass_C_checkChasingPolicemen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.calcControlMultiplier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AplayerCharacterBP_C*    playerRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::calcControlMultiplier(class AplayerCharacterBP_C* playerRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.calcControlMultiplier");

	APolicemanBaseClass_C_calcControlMultiplier_Params params;
	params.playerRef = playerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.alertedCountdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::alertedCountdown(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.alertedCountdown");

	APolicemanBaseClass_C_alertedCountdown_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.calcPerceptionRaise
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float APolicemanBaseClass_C::calcPerceptionRaise(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.calcPerceptionRaise");

	APolicemanBaseClass_C_calcPerceptionRaise_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.playVoiceSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*               Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::playVoiceSound(class USoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.playVoiceSound");

	APolicemanBaseClass_C_playVoiceSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardVector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 VectorVal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::setBlackboardVector(const struct FName& KeyName, const struct FVector& VectorVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardVector");

	APolicemanBaseClass_C_setBlackboardVector_Params params;
	params.KeyName = KeyName;
	params.VectorVal = VectorVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 StringVal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void APolicemanBaseClass_C::setBlackboardString(const struct FName& KeyName, const struct FString& StringVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardString");

	APolicemanBaseClass_C_setBlackboardString_Params params;
	params.KeyName = KeyName;
	params.StringVal = StringVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardBool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BoolValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::setBlackboardBool(const struct FName& KeyName, bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardBool");

	APolicemanBaseClass_C_setBlackboardBool_Params params;
	params.KeyName = KeyName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.lookAtPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           lookAtPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::lookAtPlayer(float DeltaTime, bool lookAtPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.lookAtPlayer");

	APolicemanBaseClass_C_lookAtPlayer_Params params;
	params.DeltaTime = DeltaTime;
	params.lookAtPlayer = lookAtPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.UserConstructionScript");

	APolicemanBaseClass_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveTick");

	APolicemanBaseClass_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus             Stimulus                       (BlueprintVisible, BlueprintReadOnly, Parm)

void APolicemanBaseClass_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature");

	APolicemanBaseClass_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature_Params params;
	params.Actor = Actor;
	params.Stimulus = Stimulus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.playSeekSound
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::playSeekSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.playSeekSound");

	APolicemanBaseClass_C_playSeekSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APolicemanBaseClass_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveBeginPlay");

	APolicemanBaseClass_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.InitialiseMe
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::InitialiseMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.InitialiseMe");

	APolicemanBaseClass_C_InitialiseMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.RecallPatrol
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::RecallPatrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.RecallPatrol");

	APolicemanBaseClass_C_RecallPatrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.HeardSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::HeardSound(float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.HeardSound");

	APolicemanBaseClass_C_HeardSound_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.sightTick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::sightTick(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.sightTick");

	APolicemanBaseClass_C_sightTick_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.observationUpdate
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::observationUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.observationUpdate");

	APolicemanBaseClass_C_observationUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.EngageSuspect
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::EngageSuspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.EngageSuspect");

	APolicemanBaseClass_C_EngageSuspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.LostPlayer
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::LostPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.LostPlayer");

	APolicemanBaseClass_C_LostPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.SetChaseMode
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::SetChaseMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.SetChaseMode");

	APolicemanBaseClass_C_SetChaseMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.EndChase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StayAlerted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           cancelAllChasers               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::EndChase(bool StayAlerted, bool cancelAllChasers)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.EndChase");

	APolicemanBaseClass_C_EndChase_Params params;
	params.StayAlerted = StayAlerted;
	params.cancelAllChasers = cancelAllChasers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.ReangageChase
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::ReangageChase()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.ReangageChase");

	APolicemanBaseClass_C_ReangageChase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.walkSpeedCheck
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::walkSpeedCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.walkSpeedCheck");

	APolicemanBaseClass_C_walkSpeedCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.removeMe
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::removeMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.removeMe");

	APolicemanBaseClass_C_removeMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.forceSuspect
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::forceSuspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.forceSuspect");

	APolicemanBaseClass_C_forceSuspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.despawnPatrol
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::despawnPatrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.despawnPatrol");

	APolicemanBaseClass_C_despawnPatrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.tryDespawn
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::tryDespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.tryDespawn");

	APolicemanBaseClass_C_tryDespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.resetHear
// (BlueprintCallable, BlueprintEvent)

void APolicemanBaseClass_C::resetHear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.resetHear");

	APolicemanBaseClass_C_resetHear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PolicemanBaseClass.PolicemanBaseClass_C.ExecuteUbergraph_PolicemanBaseClass
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APolicemanBaseClass_C::ExecuteUbergraph_PolicemanBaseClass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PolicemanBaseClass.PolicemanBaseClass_C.ExecuteUbergraph_PolicemanBaseClass");

	APolicemanBaseClass_C_ExecuteUbergraph_PolicemanBaseClass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
