
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

// Function laBallena.laBallena_C.playDialogueLine
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*              InSound                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Delay                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AlaBallena_C::playDialogueLine(class USoundWave* InSound, const struct FText& Text, float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.playDialogueLine");

	AlaBallena_C_playDialogueLine_Params params;
	params.InSound = InSound;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Delay != nullptr)
		*Delay = params.Delay;
}


// Function laBallena.laBallena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlaBallena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.UserConstructionScript");

	AlaBallena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AlaBallena_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.Timeline_0__FinishedFunc");

	AlaBallena_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AlaBallena_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.Timeline_0__UpdateFunc");

	AlaBallena_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AlaBallena_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.Timeline_1__FinishedFunc");

	AlaBallena_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AlaBallena_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.Timeline_1__UpdateFunc");

	AlaBallena_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlaBallena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.ReceiveBeginPlay");

	AlaBallena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.PlayerSatDown
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::PlayerSatDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.PlayerSatDown");

	AlaBallena_C_PlayerSatDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AlaBallena_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AlaBallena_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function laBallena.laBallena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlaBallena_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.ReceiveTick");

	AlaBallena_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.animateMouth
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::animateMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.animateMouth");

	AlaBallena_C_animateMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.stopAnimateMouth
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::stopAnimateMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.stopAnimateMouth");

	AlaBallena_C_stopAnimateMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.eyeBlink
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::eyeBlink()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.eyeBlink");

	AlaBallena_C_eyeBlink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.sureAm
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::sureAm()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.sureAm");

	AlaBallena_C_sureAm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.whatYouWant
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::whatYouWant()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.whatYouWant");

	AlaBallena_C_whatYouWant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.howMuch
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::howMuch()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.howMuch");

	AlaBallena_C_howMuch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.imIn
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::imIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.imIn");

	AlaBallena_C_imIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.listening
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::listening()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.listening");

	AlaBallena_C_listening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.notSure
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::notSure()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.notSure");

	AlaBallena_C_notSure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.resetBallena
// (BlueprintCallable, BlueprintEvent)

void AlaBallena_C::resetBallena()
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.resetBallena");

	AlaBallena_C_resetBallena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function laBallena.laBallena_C.ExecuteUbergraph_laBallena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlaBallena_C::ExecuteUbergraph_laBallena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function laBallena.laBallena_C.ExecuteUbergraph_laBallena");

	AlaBallena_C_ExecuteUbergraph_laBallena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
