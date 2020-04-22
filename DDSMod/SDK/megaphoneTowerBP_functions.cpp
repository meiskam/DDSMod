
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

// Function megaphoneTowerBP.megaphoneTowerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AmegaphoneTowerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.UserConstructionScript");

	AmegaphoneTowerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function megaphoneTowerBP.megaphoneTowerBP_C.fadeOut__FinishedFunc
// (BlueprintEvent)

void AmegaphoneTowerBP_C::fadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.fadeOut__FinishedFunc");

	AmegaphoneTowerBP_C_fadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function megaphoneTowerBP.megaphoneTowerBP_C.fadeOut__UpdateFunc
// (BlueprintEvent)

void AmegaphoneTowerBP_C::fadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.fadeOut__UpdateFunc");

	AmegaphoneTowerBP_C_fadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function megaphoneTowerBP.megaphoneTowerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AmegaphoneTowerBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.ReceiveBeginPlay");

	AmegaphoneTowerBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function megaphoneTowerBP.megaphoneTowerBP_C.tryInitialise
// (BlueprintCallable, BlueprintEvent)

void AmegaphoneTowerBP_C::tryInitialise()
{
	static auto fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.tryInitialise");

	AmegaphoneTowerBP_C_tryInitialise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function megaphoneTowerBP.megaphoneTowerBP_C.ActivateTower
// (BlueprintCallable, BlueprintEvent)

void AmegaphoneTowerBP_C::ActivateTower()
{
	static auto fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.ActivateTower");

	AmegaphoneTowerBP_C_ActivateTower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function megaphoneTowerBP.megaphoneTowerBP_C.FadeTowerOut
// (BlueprintCallable, BlueprintEvent)

void AmegaphoneTowerBP_C::FadeTowerOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.FadeTowerOut");

	AmegaphoneTowerBP_C_FadeTowerOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function megaphoneTowerBP.megaphoneTowerBP_C.ExecuteUbergraph_megaphoneTowerBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmegaphoneTowerBP_C::ExecuteUbergraph_megaphoneTowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function megaphoneTowerBP.megaphoneTowerBP_C.ExecuteUbergraph_megaphoneTowerBP");

	AmegaphoneTowerBP_C_ExecuteUbergraph_megaphoneTowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
