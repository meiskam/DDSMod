
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

// Function saveStation.saveStation_C.adaptDifficulty
// (Public, BlueprintCallable, BlueprintEvent)

void AsaveStation_C::adaptDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.adaptDifficulty");

	AsaveStation_C_adaptDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsaveStation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.UserConstructionScript");

	AsaveStation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsaveStation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.ReceiveBeginPlay");

	AsaveStation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaveStation_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.ReceiveTick");

	AsaveStation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.checkDistance
// (BlueprintCallable, BlueprintEvent)

void AsaveStation_C::checkDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.checkDistance");

	AsaveStation_C_checkDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.ActivateSaveStation
// (BlueprintCallable, BlueprintEvent)

void AsaveStation_C::ActivateSaveStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.ActivateSaveStation");

	AsaveStation_C_ActivateSaveStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.setTimeout
// (BlueprintCallable, BlueprintEvent)

void AsaveStation_C::setTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.setTimeout");

	AsaveStation_C_setTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.ExecuteUbergraph_saveStation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaveStation_C::ExecuteUbergraph_saveStation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.ExecuteUbergraph_saveStation");

	AsaveStation_C_ExecuteUbergraph_saveStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
