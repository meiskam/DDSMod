
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

// Function sampleClientBP.sampleClientBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsampleClientBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientBP.sampleClientBP_C.UserConstructionScript");

	AsampleClientBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sampleClientBP.sampleClientBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsampleClientBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientBP.sampleClientBP_C.ReceiveBeginPlay");

	AsampleClientBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sampleClientBP.sampleClientBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsampleClientBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientBP.sampleClientBP_C.ReceiveTick");

	AsampleClientBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sampleClientBP.sampleClientBP_C.testPlayerSee
// (BlueprintCallable, BlueprintEvent)

void AsampleClientBP_C::testPlayerSee()
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientBP.sampleClientBP_C.testPlayerSee");

	AsampleClientBP_C_testPlayerSee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sampleClientBP.sampleClientBP_C.makeGoHome
// (BlueprintCallable, BlueprintEvent)

void AsampleClientBP_C::makeGoHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientBP.sampleClientBP_C.makeGoHome");

	AsampleClientBP_C_makeGoHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sampleClientBP.sampleClientBP_C.ExecuteUbergraph_sampleClientBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsampleClientBP_C::ExecuteUbergraph_sampleClientBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sampleClientBP.sampleClientBP_C.ExecuteUbergraph_sampleClientBP");

	AsampleClientBP_C_ExecuteUbergraph_sampleClientBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
