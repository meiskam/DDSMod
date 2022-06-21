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
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.playEddieDialogue
	 */
	struct AeddieFirstDialogue_C_playEddieDialogue_Params
	{
	public:
		class USoundWave*                                          Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                DialogueText;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.UserConstructionScript
	 */
	struct AeddieFirstDialogue_C_UserConstructionScript_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__FinishedFunc
	 */
	struct AeddieFirstDialogue_C_mouthAnimTL__FinishedFunc_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__UpdateFunc
	 */
	struct AeddieFirstDialogue_C_mouthAnimTL__UpdateFunc_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__FinishedFunc
	 */
	struct AeddieFirstDialogue_C_blinkingEyesTL__FinishedFunc_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__UpdateFunc
	 */
	struct AeddieFirstDialogue_C_blinkingEyesTL__UpdateFunc_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveBeginPlay
	 */
	struct AeddieFirstDialogue_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveTick
	 */
	struct AeddieFirstDialogue_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AeddieFirstDialogue_C_BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.playInpatientQuote
	 */
	struct AeddieFirstDialogue_C_playInpatientQuote_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.PlayerSatDown
	 */
	struct AeddieFirstDialogue_C_PlayerSatDown_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.animateMouth
	 */
	struct AeddieFirstDialogue_C_animateMouth_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.stopAnimateMouth
	 */
	struct AeddieFirstDialogue_C_stopAnimateMouth_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.eyeBlink
	 */
	struct AeddieFirstDialogue_C_eyeBlink_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.breakDialogue
	 */
	struct AeddieFirstDialogue_C_breakDialogue_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.playerTookJoint
	 */
	struct AeddieFirstDialogue_C_playerTookJoint_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.playerRefusedJoint
	 */
	struct AeddieFirstDialogue_C_playerRefusedJoint_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.continuePartyQuestion
	 */
	struct AeddieFirstDialogue_C_continuePartyQuestion_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.whyLaptop
	 */
	struct AeddieFirstDialogue_C_whyLaptop_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.deaddropQuestion
	 */
	struct AeddieFirstDialogue_C_deaddropQuestion_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.endDialogue
	 */
	struct AeddieFirstDialogue_C_endDialogue_Params
	{	};

	/**
	 * Function eddieFirstDialogue.eddieFirstDialogue_C.ExecuteUbergraph_eddieFirstDialogue
	 */
	struct AeddieFirstDialogue_C_ExecuteUbergraph_eddieFirstDialogue_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
