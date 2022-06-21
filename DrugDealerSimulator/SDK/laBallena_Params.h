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
	 * Function laBallena.laBallena_C.removeOldCigars
	 */
	struct AlaBallena_C_removeOldCigars_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.playDialogueLine
	 */
	struct AlaBallena_C_playDialogueLine_Params
	{
	public:
		class USoundWave*                                          InSound;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function laBallena.laBallena_C.UserConstructionScript
	 */
	struct AlaBallena_C_UserConstructionScript_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.Timeline_0__FinishedFunc
	 */
	struct AlaBallena_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.Timeline_0__UpdateFunc
	 */
	struct AlaBallena_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.Timeline_1__FinishedFunc
	 */
	struct AlaBallena_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.Timeline_1__UpdateFunc
	 */
	struct AlaBallena_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.ReceiveBeginPlay
	 */
	struct AlaBallena_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.PlayerSatDown
	 */
	struct AlaBallena_C_PlayerSatDown_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AlaBallena_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function laBallena.laBallena_C.ReceiveTick
	 */
	struct AlaBallena_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function laBallena.laBallena_C.animateMouth
	 */
	struct AlaBallena_C_animateMouth_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.stopAnimateMouth
	 */
	struct AlaBallena_C_stopAnimateMouth_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.eyeBlink
	 */
	struct AlaBallena_C_eyeBlink_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.sureAm
	 */
	struct AlaBallena_C_sureAm_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.whatYouWant
	 */
	struct AlaBallena_C_whatYouWant_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.howMuch
	 */
	struct AlaBallena_C_howMuch_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.imIn
	 */
	struct AlaBallena_C_imIn_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.listening
	 */
	struct AlaBallena_C_listening_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.notSure
	 */
	struct AlaBallena_C_notSure_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.resetBallena
	 */
	struct AlaBallena_C_resetBallena_Params
	{	};

	/**
	 * Function laBallena.laBallena_C.ExecuteUbergraph_laBallena
	 */
	struct AlaBallena_C_ExecuteUbergraph_laBallena_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
