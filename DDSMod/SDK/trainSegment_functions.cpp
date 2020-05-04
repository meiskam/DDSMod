
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function trainSegment.trainSegment_C.turnOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtrainSegment_C::turnOffset(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function trainSegment.trainSegment_C.turnOffset");

	AtrainSegment_C_turnOffset_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainSegment.trainSegment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtrainSegment_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainSegment.trainSegment_C.UserConstructionScript");

	AtrainSegment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainSegment.trainSegment_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AtrainSegment_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainSegment.trainSegment_C.ReceiveBeginPlay");

	AtrainSegment_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainSegment.trainSegment_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtrainSegment_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function trainSegment.trainSegment_C.ReceiveTick");

	AtrainSegment_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainSegment.trainSegment_C.AnihilateTrain
// (BlueprintCallable, BlueprintEvent)

void AtrainSegment_C::AnihilateTrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainSegment.trainSegment_C.AnihilateTrain");

	AtrainSegment_C_AnihilateTrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainSegment.trainSegment_C.playHorn
// (BlueprintCallable, BlueprintEvent)

void AtrainSegment_C::playHorn()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainSegment.trainSegment_C.playHorn");

	AtrainSegment_C_playHorn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainSegment.trainSegment_C.trainShake
// (BlueprintCallable, BlueprintEvent)

void AtrainSegment_C::trainShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function trainSegment.trainSegment_C.trainShake");

	AtrainSegment_C_trainShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function trainSegment.trainSegment_C.ExecuteUbergraph_trainSegment
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtrainSegment_C::ExecuteUbergraph_trainSegment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function trainSegment.trainSegment_C.ExecuteUbergraph_trainSegment");

	AtrainSegment_C_ExecuteUbergraph_trainSegment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
