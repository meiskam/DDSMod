
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

// Function largeLabMixer.largeLabMixer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AlargeLabMixer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function largeLabMixer.largeLabMixer_C.UserConstructionScript");

	AlargeLabMixer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function largeLabMixer.largeLabMixer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AlargeLabMixer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function largeLabMixer.largeLabMixer_C.ReceiveBeginPlay");

	AlargeLabMixer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function largeLabMixer.largeLabMixer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlargeLabMixer_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function largeLabMixer.largeLabMixer_C.ReceiveTick");

	AlargeLabMixer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function largeLabMixer.largeLabMixer_C.ExecuteUbergraph_largeLabMixer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AlargeLabMixer_C::ExecuteUbergraph_largeLabMixer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function largeLabMixer.largeLabMixer_C.ExecuteUbergraph_largeLabMixer");

	AlargeLabMixer_C_ExecuteUbergraph_largeLabMixer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
