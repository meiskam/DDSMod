
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function keijiBP.keijiBP_C.playDialogueLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Dialogue_line                  (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AkeijiBP_C::playDialogueLine(class USoundWave* Sound, const struct FText& Dialogue_line, float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.playDialogueLine");

	AkeijiBP_C_playDialogueLine_Params params;
	params.Sound = Sound;
	params.Dialogue_line = Dialogue_line;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function keijiBP.keijiBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.UserConstructionScript");

	AkeijiBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AkeijiBP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.Timeline_0__FinishedFunc");

	AkeijiBP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AkeijiBP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.Timeline_0__UpdateFunc");

	AkeijiBP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AkeijiBP_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.Timeline_1__FinishedFunc");

	AkeijiBP_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AkeijiBP_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.Timeline_1__UpdateFunc");

	AkeijiBP_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AkeijiBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.ReceiveBeginPlay");

	AkeijiBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.PlayerSatDown
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::PlayerSatDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.PlayerSatDown");

	AkeijiBP_C_PlayerSatDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.BndEvt__enterTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AkeijiBP_C::BndEvt__enterTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.BndEvt__enterTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AkeijiBP_C_BndEvt__enterTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function keijiBP.keijiBP_C.eyeBlink
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::eyeBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.eyeBlink");

	AkeijiBP_C_eyeBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.keijiNervous
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::keijiNervous()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.keijiNervous");

	AkeijiBP_C_keijiNervous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.breakDialogue
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::breakDialogue()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.breakDialogue");

	AkeijiBP_C_breakDialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.thatTrue
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::thatTrue()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.thatTrue");

	AkeijiBP_C_thatTrue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.whosAsking
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::whosAsking()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.whosAsking");

	AkeijiBP_C_whosAsking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.hearYa
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::hearYa()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.hearYa");

	AkeijiBP_C_hearYa_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AkeijiBP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.ReceiveTick");

	AkeijiBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.animateMouth
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::animateMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.animateMouth");

	AkeijiBP_C_animateMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.stopAnimateMouth
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::stopAnimateMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.stopAnimateMouth");

	AkeijiBP_C_stopAnimateMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.sayCorrect
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::sayCorrect()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.sayCorrect");

	AkeijiBP_C_sayCorrect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.askYakuza
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::askYakuza()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.askYakuza");

	AkeijiBP_C_askYakuza_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.hellYeah
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::hellYeah()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.hellYeah");

	AkeijiBP_C_hellYeah_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.needTime
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::needTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.needTime");

	AkeijiBP_C_needTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.resetKeiji
// (BlueprintCallable, BlueprintEvent)

void AkeijiBP_C::resetKeiji()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.resetKeiji");

	AkeijiBP_C_resetKeiji_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiBP.keijiBP_C.ExecuteUbergraph_keijiBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AkeijiBP_C::ExecuteUbergraph_keijiBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiBP.keijiBP_C.ExecuteUbergraph_keijiBP");

	AkeijiBP_C_ExecuteUbergraph_keijiBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
