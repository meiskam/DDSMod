
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

// Function demoControler.demoControler_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdemoControler_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function demoControler.demoControler_C.UserConstructionScript");

	AdemoControler_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function demoControler.demoControler_C.showEndScreen
// (BlueprintCallable, BlueprintEvent)

void AdemoControler_C::showEndScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function demoControler.demoControler_C.showEndScreen");

	AdemoControler_C_showEndScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function demoControler.demoControler_C.Sleep
// (BlueprintCallable, BlueprintEvent)

void AdemoControler_C::Sleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function demoControler.demoControler_C.Sleep");

	AdemoControler_C_Sleep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function demoControler.demoControler_C.DemoEnded
// (BlueprintCallable, BlueprintEvent)

void AdemoControler_C::DemoEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function demoControler.demoControler_C.DemoEnded");

	AdemoControler_C_DemoEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function demoControler.demoControler_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdemoControler_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function demoControler.demoControler_C.ReceiveTick");

	AdemoControler_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function demoControler.demoControler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdemoControler_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function demoControler.demoControler_C.ReceiveBeginPlay");

	AdemoControler_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function demoControler.demoControler_C.ExecuteUbergraph_demoControler
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdemoControler_C::ExecuteUbergraph_demoControler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function demoControler.demoControler_C.ExecuteUbergraph_demoControler");

	AdemoControler_C_ExecuteUbergraph_demoControler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
