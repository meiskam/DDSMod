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
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.Randomization
	 */
	struct AAdaptiveMusic_BP_C_Randomization_Params
	{	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.UserConstructionScript
	 */
	struct AAdaptiveMusic_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__FinishedFunc
	 */
	struct AAdaptiveMusic_BP_C_HideoutTransitionTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__UpdateFunc
	 */
	struct AAdaptiveMusic_BP_C_HideoutTransitionTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.endChaseMusic
	 */
	struct AAdaptiveMusic_BP_C_endChaseMusic_Params
	{	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ReceiveTick
	 */
	struct AAdaptiveMusic_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.InitiateMe
	 */
	struct AAdaptiveMusic_BP_C_InitiateMe_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.StartChaseMusic
	 */
	struct AAdaptiveMusic_BP_C_StartChaseMusic_Params
	{	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature
	 */
	struct AAdaptiveMusic_BP_C_BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackPercent;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayChaseMusic
	 */
	struct AAdaptiveMusic_BP_C_PlayChaseMusic_Params
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayIntroMusic
	 */
	struct AAdaptiveMusic_BP_C_PlayIntroMusic_Params
	{	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayHideoutMusic
	 */
	struct AAdaptiveMusic_BP_C_PlayHideoutMusic_Params
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature
	 */
	struct AAdaptiveMusic_BP_C_BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackPercent;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature
	 */
	struct AAdaptiveMusic_BP_C_BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackPercent;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__dds-menu-intro-fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature
	 */
	struct AAdaptiveMusic_BP_C_BndEvt__dds_menu_intro_fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackPercent;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ExecuteUbergraph_AdaptiveMusic_BP
	 */
	struct AAdaptiveMusic_BP_C_ExecuteUbergraph_AdaptiveMusic_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
