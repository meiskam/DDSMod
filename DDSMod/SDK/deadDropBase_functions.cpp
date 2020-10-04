
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

// Function deadDropBase.deadDropBase_C.checkNoDrugs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           DrugsTaken                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AdeadDropBase_C::checkNoDrugs(bool* DrugsTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.checkNoDrugs");

	AdeadDropBase_C_checkNoDrugs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DrugsTaken != nullptr)
		*DrugsTaken = params.DrugsTaken;
}


// Function deadDropBase.deadDropBase_C.stealProbability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AdeadDropBase_C::stealProbability(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.stealProbability");

	AdeadDropBase_C_stealProbability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function deadDropBase.deadDropBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdeadDropBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.UserConstructionScript");

	AdeadDropBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropBase.deadDropBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdeadDropBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.ReceiveBeginPlay");

	AdeadDropBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropBase.deadDropBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdeadDropBase_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.ReceiveTick");

	AdeadDropBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropBase.deadDropBase_C.closeEventScript
// (BlueprintCallable, BlueprintEvent)

void AdeadDropBase_C::closeEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.closeEventScript");

	AdeadDropBase_C_closeEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropBase.deadDropBase_C.testPlayerDistance
// (BlueprintCallable, BlueprintEvent)

void AdeadDropBase_C::testPlayerDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.testPlayerDistance");

	AdeadDropBase_C_testPlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropBase.deadDropBase_C.testItemSteal
// (BlueprintCallable, BlueprintEvent)

void AdeadDropBase_C::testItemSteal()
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.testItemSteal");

	AdeadDropBase_C_testItemSteal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropBase.deadDropBase_C.clearContainer
// (BlueprintCallable, BlueprintEvent)

void AdeadDropBase_C::clearContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.clearContainer");

	AdeadDropBase_C_clearContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropBase.deadDropBase_C.openEventScript
// (BlueprintCallable, BlueprintEvent)

void AdeadDropBase_C::openEventScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.openEventScript");

	AdeadDropBase_C_openEventScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deadDropBase.deadDropBase_C.ExecuteUbergraph_deadDropBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdeadDropBase_C::ExecuteUbergraph_deadDropBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function deadDropBase.deadDropBase_C.ExecuteUbergraph_deadDropBase");

	AdeadDropBase_C_ExecuteUbergraph_deadDropBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
