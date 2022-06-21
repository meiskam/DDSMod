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
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.Randomization
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAdaptiveMusic_BP_C::Randomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.Randomization");
		
		AAdaptiveMusic_BP_C_Randomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAdaptiveMusic_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.UserConstructionScript");
		
		AAdaptiveMusic_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAdaptiveMusic_BP_C::HideoutTransitionTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__FinishedFunc");
		
		AAdaptiveMusic_BP_C_HideoutTransitionTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAdaptiveMusic_BP_C::HideoutTransitionTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.HideoutTransitionTimeline__UpdateFunc");
		
		AAdaptiveMusic_BP_C_HideoutTransitionTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.endChaseMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAdaptiveMusic_BP_C::endChaseMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.endChaseMusic");
		
		AAdaptiveMusic_BP_C_endChaseMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAdaptiveMusic_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ReceiveTick");
		
		AAdaptiveMusic_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.InitiateMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AplayerCharacterBP_C*                        PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAdaptiveMusic_BP_C::InitiateMe(class AplayerCharacterBP_C* PlayerRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.InitiateMe");
		
		AAdaptiveMusic_BP_C_InitiateMe_Params params {};
		params.PlayerRef = PlayerRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.StartChaseMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAdaptiveMusic_BP_C::StartChaseMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.StartChaseMusic");
		
		AAdaptiveMusic_BP_C_StartChaseMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackPercent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAdaptiveMusic_BP_C::BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature");
		
		AAdaptiveMusic_BP_C_BndEvt__IntroChase_K2Node_ComponentBoundEvent_4_OnAudioPlaybackPercent__DelegateSignature_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayChaseMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StartTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAdaptiveMusic_BP_C::PlayChaseMusic(float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayChaseMusic");
		
		AAdaptiveMusic_BP_C_PlayChaseMusic_Params params {};
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayIntroMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAdaptiveMusic_BP_C::PlayIntroMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayIntroMusic");
		
		AAdaptiveMusic_BP_C_PlayIntroMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayHideoutMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StartTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAdaptiveMusic_BP_C::PlayHideoutMusic(float StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.PlayHideoutMusic");
		
		AAdaptiveMusic_BP_C_PlayHideoutMusic_Params params {};
		params.StartTime = StartTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackPercent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAdaptiveMusic_BP_C::BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature");
		
		AAdaptiveMusic_BP_C_BndEvt__Chase_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackPercent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAdaptiveMusic_BP_C::BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature");
		
		AAdaptiveMusic_BP_C_BndEvt__Hideout_K2Node_ComponentBoundEvent_1_OnAudioPlaybackPercent__DelegateSignature_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__dds-menu-intro-fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  PlayingSoundWave                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackPercent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAdaptiveMusic_BP_C::BndEvt__dds_menu_intro_fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature(class USoundWave* PlayingSoundWave, float PlaybackPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.BndEvt__dds-menu-intro-fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature");
		
		AAdaptiveMusic_BP_C_BndEvt__dds_menu_intro_fade_K2Node_ComponentBoundEvent_3_OnAudioPlaybackPercent__DelegateSignature_Params params {};
		params.PlayingSoundWave = PlayingSoundWave;
		params.PlaybackPercent = PlaybackPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ExecuteUbergraph_AdaptiveMusic_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAdaptiveMusic_BP_C::ExecuteUbergraph_AdaptiveMusic_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AdaptiveMusic_BP.AdaptiveMusic_BP_C.ExecuteUbergraph_AdaptiveMusic_BP");
		
		AAdaptiveMusic_BP_C_ExecuteUbergraph_AdaptiveMusic_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AAdaptiveMusic_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAdaptiveMusic_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AdaptiveMusic_BP.AdaptiveMusic_BP_C");
		return ptr;
	}

}


