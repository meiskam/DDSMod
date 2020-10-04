
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

// Function deaFlashBang.deaFlashBang_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdeaFlashBang_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.UserConstructionScript");

	AdeaFlashBang_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaFlashBang.deaFlashBang_C.fadeOut__FinishedFunc
// (BlueprintEvent)

void AdeaFlashBang_C::fadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.fadeOut__FinishedFunc");

	AdeaFlashBang_C_fadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaFlashBang.deaFlashBang_C.fadeOut__UpdateFunc
// (BlueprintEvent)

void AdeaFlashBang_C::fadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.fadeOut__UpdateFunc");

	AdeaFlashBang_C_fadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaFlashBang.deaFlashBang_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdeaFlashBang_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.ReceiveBeginPlay");

	AdeaFlashBang_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function deaFlashBang.deaFlashBang_C.ExecuteUbergraph_deaFlashBang
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdeaFlashBang_C::ExecuteUbergraph_deaFlashBang(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function deaFlashBang.deaFlashBang_C.ExecuteUbergraph_deaFlashBang");

	AdeaFlashBang_C_ExecuteUbergraph_deaFlashBang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
