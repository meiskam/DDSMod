
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function airplaneBP.airplaneBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AairplaneBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function airplaneBP.airplaneBP_C.UserConstructionScript");

	AairplaneBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function airplaneBP.airplaneBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AairplaneBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function airplaneBP.airplaneBP_C.ReceiveBeginPlay");

	AairplaneBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function airplaneBP.airplaneBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AairplaneBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function airplaneBP.airplaneBP_C.ReceiveTick");

	AairplaneBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function airplaneBP.airplaneBP_C.Stop
// (BlueprintCallable, BlueprintEvent)

void AairplaneBP_C::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function airplaneBP.airplaneBP_C.Stop");

	AairplaneBP_C_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function airplaneBP.airplaneBP_C.checkPlaneVisible
// (BlueprintCallable, BlueprintEvent)

void AairplaneBP_C::checkPlaneVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function airplaneBP.airplaneBP_C.checkPlaneVisible");

	AairplaneBP_C_checkPlaneVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function airplaneBP.airplaneBP_C.ExecuteUbergraph_airplaneBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AairplaneBP_C::ExecuteUbergraph_airplaneBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function airplaneBP.airplaneBP_C.ExecuteUbergraph_airplaneBP");

	AairplaneBP_C_ExecuteUbergraph_airplaneBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
