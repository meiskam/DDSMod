
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

// Function eddieWalkHome.eddieWalkHome_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AeddieWalkHome_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.UserConstructionScript");

	AeddieWalkHome_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkHome.eddieWalkHome_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AeddieWalkHome_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.Timeline_0__FinishedFunc");

	AeddieWalkHome_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkHome.eddieWalkHome_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AeddieWalkHome_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.Timeline_0__UpdateFunc");

	AeddieWalkHome_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkHome.eddieWalkHome_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AeddieWalkHome_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.ReceiveBeginPlay");

	AeddieWalkHome_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkHome.eddieWalkHome_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AeddieWalkHome_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.ReceiveTick");

	AeddieWalkHome_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkHome.eddieWalkHome_C.walkHome
// (BlueprintCallable, BlueprintEvent)

void AeddieWalkHome_C::walkHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.walkHome");

	AeddieWalkHome_C_walkHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkHome.eddieWalkHome_C.animateMouth
// (BlueprintCallable, BlueprintEvent)

void AeddieWalkHome_C::animateMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.animateMouth");

	AeddieWalkHome_C_animateMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkHome.eddieWalkHome_C.stopAnimateMouth
// (BlueprintCallable, BlueprintEvent)

void AeddieWalkHome_C::stopAnimateMouth()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.stopAnimateMouth");

	AeddieWalkHome_C_stopAnimateMouth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkHome.eddieWalkHome_C.RetryWalk
// (BlueprintCallable, BlueprintEvent)

void AeddieWalkHome_C::RetryWalk()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.RetryWalk");

	AeddieWalkHome_C_RetryWalk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieWalkHome.eddieWalkHome_C.ExecuteUbergraph_eddieWalkHome
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AeddieWalkHome_C::ExecuteUbergraph_eddieWalkHome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieWalkHome.eddieWalkHome_C.ExecuteUbergraph_eddieWalkHome");

	AeddieWalkHome_C_ExecuteUbergraph_eddieWalkHome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
