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
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.CheckCanReachPlayer
	 */
	struct APolicemanBaseClass_C_CheckCanReachPlayer_Params
	{
	public:
		bool                                                       CanReach;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.adaptDifficulty
	 */
	struct APolicemanBaseClass_C_adaptDifficulty_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.checkCanSpotPlayer
	 */
	struct APolicemanBaseClass_C_checkCanSpotPlayer_Params
	{
	public:
		bool                                                       canSpot;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.checkBallenaProtection
	 */
	struct APolicemanBaseClass_C_checkBallenaProtection_Params
	{
	public:
		bool                                                       protected;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.checkPlayerRunning
	 */
	struct APolicemanBaseClass_C_checkPlayerRunning_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.finishChasing
	 */
	struct APolicemanBaseClass_C_finishChasing_Params
	{
	public:
		bool                                                       stayAlerted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.checkChasingPolicemen
	 */
	struct APolicemanBaseClass_C_checkChasingPolicemen_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.calcControlMultiplier
	 */
	struct APolicemanBaseClass_C_calcControlMultiplier_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.alertedCountdown
	 */
	struct APolicemanBaseClass_C_alertedCountdown_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.calcPerceptionRaise
	 */
	struct APolicemanBaseClass_C_calcPerceptionRaise_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.playVoiceSound
	 */
	struct APolicemanBaseClass_C_playVoiceSound_Params
	{
	public:
		class USoundCue*                                           Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardVector
	 */
	struct APolicemanBaseClass_C_setBlackboardVector_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             VectorVal;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardString
	 */
	struct APolicemanBaseClass_C_setBlackboardString_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              StringVal;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.setBlackboardBool
	 */
	struct APolicemanBaseClass_C_setBlackboardBool_Params
	{
	public:
		class FName                                                KeyName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BoolValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.lookAtPlayer
	 */
	struct APolicemanBaseClass_C_lookAtPlayer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       lookAtPlayer;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.UserConstructionScript
	 */
	struct APolicemanBaseClass_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveTick
	 */
	struct APolicemanBaseClass_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature
	 */
	struct APolicemanBaseClass_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_2_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAIStimulus                                         Stimulus;                                                // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.playSeekSound
	 */
	struct APolicemanBaseClass_C_playSeekSound_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.ReceiveBeginPlay
	 */
	struct APolicemanBaseClass_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.InitialiseMe
	 */
	struct APolicemanBaseClass_C_InitialiseMe_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.RecallPatrol
	 */
	struct APolicemanBaseClass_C_RecallPatrol_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.HeardSound
	 */
	struct APolicemanBaseClass_C_HeardSound_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.sightTick
	 */
	struct APolicemanBaseClass_C_sightTick_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.observationUpdate
	 */
	struct APolicemanBaseClass_C_observationUpdate_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.EngageSuspect
	 */
	struct APolicemanBaseClass_C_EngageSuspect_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.LostPlayer
	 */
	struct APolicemanBaseClass_C_LostPlayer_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.SetChaseMode
	 */
	struct APolicemanBaseClass_C_SetChaseMode_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.EndChase
	 */
	struct APolicemanBaseClass_C_EndChase_Params
	{
	public:
		bool                                                       stayAlerted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       cancelAllChasers;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.ReangageChase
	 */
	struct APolicemanBaseClass_C_ReangageChase_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.walkSpeedCheck
	 */
	struct APolicemanBaseClass_C_walkSpeedCheck_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.removeMe
	 */
	struct APolicemanBaseClass_C_removeMe_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.forceSuspect
	 */
	struct APolicemanBaseClass_C_forceSuspect_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.despawnPatrol
	 */
	struct APolicemanBaseClass_C_despawnPatrol_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.tryDespawn
	 */
	struct APolicemanBaseClass_C_tryDespawn_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.resetHear
	 */
	struct APolicemanBaseClass_C_resetHear_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.InitBehaviour
	 */
	struct APolicemanBaseClass_C_InitBehaviour_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.CameraAlert
	 */
	struct APolicemanBaseClass_C_CameraAlert_Params
	{	};

	/**
	 * Function PolicemanBaseClass.PolicemanBaseClass_C.ExecuteUbergraph_PolicemanBaseClass
	 */
	struct APolicemanBaseClass_C_ExecuteUbergraph_PolicemanBaseClass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
