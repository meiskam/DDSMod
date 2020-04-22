
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

// Function eddieBlantBP.eddieBlantBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AeddieBlantBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieBlantBP.eddieBlantBP_C.UserConstructionScript");

	AeddieBlantBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieBlantBP.eddieBlantBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AeddieBlantBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieBlantBP.eddieBlantBP_C.ReceiveBeginPlay");

	AeddieBlantBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieBlantBP.eddieBlantBP_C.slowlyKillMe
// (BlueprintCallable, BlueprintEvent)

void AeddieBlantBP_C::slowlyKillMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieBlantBP.eddieBlantBP_C.slowlyKillMe");

	AeddieBlantBP_C_slowlyKillMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieBlantBP.eddieBlantBP_C.ExecuteUbergraph_eddieBlantBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AeddieBlantBP_C::ExecuteUbergraph_eddieBlantBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieBlantBP.eddieBlantBP_C.ExecuteUbergraph_eddieBlantBP");

	AeddieBlantBP_C_ExecuteUbergraph_eddieBlantBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
