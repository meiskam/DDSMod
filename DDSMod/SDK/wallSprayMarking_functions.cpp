
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wallSprayMarking.wallSprayMarking_C.setSpraySymbol
// (Public, BlueprintCallable, BlueprintEvent)

void AwallSprayMarking_C::setSpraySymbol()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSprayMarking.wallSprayMarking_C.setSpraySymbol");

	AwallSprayMarking_C_setSpraySymbol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSprayMarking.wallSprayMarking_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AwallSprayMarking_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSprayMarking.wallSprayMarking_C.UserConstructionScript");

	AwallSprayMarking_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSprayMarking.wallSprayMarking_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AwallSprayMarking_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSprayMarking.wallSprayMarking_C.ReceiveBeginPlay");

	AwallSprayMarking_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSprayMarking.wallSprayMarking_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AwallSprayMarking_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSprayMarking.wallSprayMarking_C.ReceiveTick");

	AwallSprayMarking_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wallSprayMarking.wallSprayMarking_C.ExecuteUbergraph_wallSprayMarking
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AwallSprayMarking_C::ExecuteUbergraph_wallSprayMarking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wallSprayMarking.wallSprayMarking_C.ExecuteUbergraph_wallSprayMarking");

	AwallSprayMarking_C_ExecuteUbergraph_wallSprayMarking_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
