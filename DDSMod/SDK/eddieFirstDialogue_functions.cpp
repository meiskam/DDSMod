
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function eddieFirstDialogue.eddieFirstDialogue_C.playEddieDialogue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DialogueText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AeddieFirstDialogue_C::playEddieDialogue(class USoundWave* Sound, const struct FText& DialogueText, float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.playEddieDialogue");

	AeddieFirstDialogue_C_playEddieDialogue_Params params;
	params.Sound = Sound;
	params.DialogueText = DialogueText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.UserConstructionScript");

	AeddieFirstDialogue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__FinishedFunc
// (BlueprintEvent)

void AeddieFirstDialogue_C::mouthAnimTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__FinishedFunc");

	AeddieFirstDialogue_C_mouthAnimTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__UpdateFunc
// (BlueprintEvent)

void AeddieFirstDialogue_C::mouthAnimTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.mouthAnimTL__UpdateFunc");

	AeddieFirstDialogue_C_mouthAnimTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__FinishedFunc
// (BlueprintEvent)

void AeddieFirstDialogue_C::blinkingEyesTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__FinishedFunc");

	AeddieFirstDialogue_C_blinkingEyesTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__UpdateFunc
// (BlueprintEvent)

void AeddieFirstDialogue_C::blinkingEyesTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.blinkingEyesTL__UpdateFunc");

	AeddieFirstDialogue_C_blinkingEyesTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AeddieFirstDialogue_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveBeginPlay");

	AeddieFirstDialogue_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AeddieFirstDialogue_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.ReceiveTick");

	AeddieFirstDialogue_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AeddieFirstDialogue_C::BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AeddieFirstDialogue_C_BndEvt__playerComeTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function eddieFirstDialogue.eddieFirstDialogue_C.playInpatientQuote
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::playInpatientQuote()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.playInpatientQuote");

	AeddieFirstDialogue_C_playInpatientQuote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.playerSatDown
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::playerSatDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.playerSatDown");

	AeddieFirstDialogue_C_playerSatDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.animateMouth
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::animateMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.animateMouth");

	AeddieFirstDialogue_C_animateMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.stopAnimateMouth
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::stopAnimateMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.stopAnimateMouth");

	AeddieFirstDialogue_C_stopAnimateMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.eyeBlink
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::eyeBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.eyeBlink");

	AeddieFirstDialogue_C_eyeBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.breakDialogue
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::breakDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.breakDialogue");

	AeddieFirstDialogue_C_breakDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.playerTookJoint
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::playerTookJoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.playerTookJoint");

	AeddieFirstDialogue_C_playerTookJoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.playerRefusedJoint
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::playerRefusedJoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.playerRefusedJoint");

	AeddieFirstDialogue_C_playerRefusedJoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.continuePartyQuestion
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::continuePartyQuestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.continuePartyQuestion");

	AeddieFirstDialogue_C_continuePartyQuestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.whyLaptop
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::whyLaptop()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.whyLaptop");

	AeddieFirstDialogue_C_whyLaptop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.deaddropQuestion
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::deaddropQuestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.deaddropQuestion");

	AeddieFirstDialogue_C_deaddropQuestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.endDialogue
// (BlueprintCallable, BlueprintEvent)

void AeddieFirstDialogue_C::endDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.endDialogue");

	AeddieFirstDialogue_C_endDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialogue.eddieFirstDialogue_C.ExecuteUbergraph_eddieFirstDialogue
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AeddieFirstDialogue_C::ExecuteUbergraph_eddieFirstDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialogue.eddieFirstDialogue_C.ExecuteUbergraph_eddieFirstDialogue");

	AeddieFirstDialogue_C_ExecuteUbergraph_eddieFirstDialogue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
