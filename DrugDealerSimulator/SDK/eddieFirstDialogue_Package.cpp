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
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.playEddieDialogue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USoundWave*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DialogueText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Delay                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AeddieFirstDialogue_C::playEddieDialogue(class USoundWave* Sound, const class FText& DialogueText, float* Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.playEddieDialogue");
		
		AeddieFirstDialogue_C_playEddieDialogue_Params params {};
		params.Sound = Sound;
		params.DialogueText = DialogueText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delay != nullptr)
			*Delay = params.Delay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.UserConstructionScript");
		
		AeddieFirstDialogue_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::mouthAnimTL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__FinishedFunc");
		
		AeddieFirstDialogue_C_mouthAnimTL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::mouthAnimTL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__UpdateFunc");
		
		AeddieFirstDialogue_C_mouthAnimTL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::blinkingEyesTL__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__FinishedFunc");
		
		AeddieFirstDialogue_C_blinkingEyesTL__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::blinkingEyesTL__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__UpdateFunc");
		
		AeddieFirstDialogue_C_blinkingEyesTL__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveBeginPlay");
		
		AeddieFirstDialogue_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AeddieFirstDialogue_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveTick");
		
		AeddieFirstDialogue_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AeddieFirstDialogue_C::BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		AeddieFirstDialogue_C_BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.playInpatientQuote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::playInpatientQuote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.playInpatientQuote");
		
		AeddieFirstDialogue_C_playInpatientQuote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.PlayerSatDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::PlayerSatDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.PlayerSatDown");
		
		AeddieFirstDialogue_C_PlayerSatDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.animateMouth
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::animateMouth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.animateMouth");
		
		AeddieFirstDialogue_C_animateMouth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.stopAnimateMouth
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::stopAnimateMouth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.stopAnimateMouth");
		
		AeddieFirstDialogue_C_stopAnimateMouth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.eyeBlink
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::eyeBlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.eyeBlink");
		
		AeddieFirstDialogue_C_eyeBlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.breakDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::breakDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.breakDialogue");
		
		AeddieFirstDialogue_C_breakDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.playerTookJoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::playerTookJoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.playerTookJoint");
		
		AeddieFirstDialogue_C_playerTookJoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.playerRefusedJoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::playerRefusedJoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.playerRefusedJoint");
		
		AeddieFirstDialogue_C_playerRefusedJoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.continuePartyQuestion
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::continuePartyQuestion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.continuePartyQuestion");
		
		AeddieFirstDialogue_C_continuePartyQuestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.whyLaptop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::whyLaptop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.whyLaptop");
		
		AeddieFirstDialogue_C_whyLaptop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.deaddropQuestion
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::deaddropQuestion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.deaddropQuestion");
		
		AeddieFirstDialogue_C_deaddropQuestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.endDialogue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AeddieFirstDialogue_C::endDialogue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.endDialogue");
		
		AeddieFirstDialogue_C_endDialogue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function eddieFirstDialogue.eddieFirstDialogue_C.ExecuteUbergraph_eddieFirstDialogue
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AeddieFirstDialogue_C::ExecuteUbergraph_eddieFirstDialogue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.ExecuteUbergraph_eddieFirstDialogue");
		
		AeddieFirstDialogue_C_ExecuteUbergraph_eddieFirstDialogue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AeddieFirstDialogue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AeddieFirstDialogue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass eddieFirstDialogue.eddieFirstDialogue_C");
		return ptr;
	}

}


