
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function creditsCamera.creditsCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AcreditsCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function creditsCamera.creditsCamera_C.UserConstructionScript");

	AcreditsCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function creditsCamera.creditsCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AcreditsCamera_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function creditsCamera.creditsCamera_C.ReceiveTick");

	AcreditsCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function creditsCamera.creditsCamera_C.ExecuteUbergraph_creditsCamera
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AcreditsCamera_C::ExecuteUbergraph_creditsCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function creditsCamera.creditsCamera_C.ExecuteUbergraph_creditsCamera");

	AcreditsCamera_C_ExecuteUbergraph_creditsCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
