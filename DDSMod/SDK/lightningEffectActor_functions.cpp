
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function lightningEffectActor.lightningEffectActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlightningEffectActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.UserConstructionScript");

	AlightningEffectActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightningEffectActor.lightningEffectActor_C.lightningLight__FinishedFunc
// (BlueprintEvent)

void AlightningEffectActor_C::lightningLight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.lightningLight__FinishedFunc");

	AlightningEffectActor_C_lightningLight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightningEffectActor.lightningEffectActor_C.lightningLight__UpdateFunc
// (BlueprintEvent)

void AlightningEffectActor_C::lightningLight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.lightningLight__UpdateFunc");

	AlightningEffectActor_C_lightningLight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightningEffectActor.lightningEffectActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlightningEffectActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.ReceiveBeginPlay");

	AlightningEffectActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightningEffectActor.lightningEffectActor_C.lightningSound
// (BlueprintCallable, BlueprintEvent)

void AlightningEffectActor_C::lightningSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.lightningSound");

	AlightningEffectActor_C_lightningSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightningEffectActor.lightningEffectActor_C.InitiateLightning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          stormIntensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlightningEffectActor_C::InitiateLightning(float stormIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.InitiateLightning");

	AlightningEffectActor_C_InitiateLightning_Params params;
	params.stormIntensity = stormIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightningEffectActor.lightningEffectActor_C.ExecuteUbergraph_lightningEffectActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlightningEffectActor_C::ExecuteUbergraph_lightningEffectActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lightningEffectActor.lightningEffectActor_C.ExecuteUbergraph_lightningEffectActor");

	AlightningEffectActor_C_ExecuteUbergraph_lightningEffectActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
