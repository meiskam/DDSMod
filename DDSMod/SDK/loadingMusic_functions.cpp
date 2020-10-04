
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function loadingMusic.loadingMusic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AloadingMusic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingMusic.loadingMusic_C.UserConstructionScript");

	AloadingMusic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadingMusic.loadingMusic_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AloadingMusic_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingMusic.loadingMusic_C.Timeline_0__FinishedFunc");

	AloadingMusic_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadingMusic.loadingMusic_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AloadingMusic_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingMusic.loadingMusic_C.Timeline_0__UpdateFunc");

	AloadingMusic_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadingMusic.loadingMusic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AloadingMusic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingMusic.loadingMusic_C.ReceiveBeginPlay");

	AloadingMusic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadingMusic.loadingMusic_C.killMusic
// (BlueprintCallable, BlueprintEvent)

void AloadingMusic_C::killMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingMusic.loadingMusic_C.killMusic");

	AloadingMusic_C_killMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadingMusic.loadingMusic_C.ExecuteUbergraph_loadingMusic
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AloadingMusic_C::ExecuteUbergraph_loadingMusic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingMusic.loadingMusic_C.ExecuteUbergraph_loadingMusic");

	AloadingMusic_C_ExecuteUbergraph_loadingMusic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
