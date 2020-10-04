
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function policeDog.policeDog_C.reconstructReferences
// (Public, BlueprintCallable, BlueprintEvent)

void ApoliceDog_C::reconstructReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDog.policeDog_C.reconstructReferences");

	ApoliceDog_C_reconstructReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDog.policeDog_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApoliceDog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDog.policeDog_C.UserConstructionScript");

	ApoliceDog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDog.policeDog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApoliceDog_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDog.policeDog_C.ReceiveBeginPlay");

	ApoliceDog_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDog.policeDog_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceDog_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDog.policeDog_C.ReceiveTick");

	ApoliceDog_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDog.policeDog_C.testPlayerDistance
// (BlueprintCallable, BlueprintEvent)

void ApoliceDog_C::testPlayerDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDog.policeDog_C.testPlayerDistance");

	ApoliceDog_C_testPlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDog.policeDog_C.sniffTest
// (BlueprintCallable, BlueprintEvent)

void ApoliceDog_C::sniffTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDog.policeDog_C.sniffTest");

	ApoliceDog_C_sniffTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDog.policeDog_C.sensedDrugs
// (BlueprintCallable, BlueprintEvent)

void ApoliceDog_C::sensedDrugs()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDog.policeDog_C.sensedDrugs");

	ApoliceDog_C_sensedDrugs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDog.policeDog_C.resetBark
// (BlueprintCallable, BlueprintEvent)

void ApoliceDog_C::resetBark()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDog.policeDog_C.resetBark");

	ApoliceDog_C_resetBark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function policeDog.policeDog_C.ExecuteUbergraph_policeDog
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApoliceDog_C::ExecuteUbergraph_policeDog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function policeDog.policeDog_C.ExecuteUbergraph_policeDog");

	ApoliceDog_C_ExecuteUbergraph_policeDog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
