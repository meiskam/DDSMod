
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

// Function ballenaMoneyMan.ballenaMoneyMan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AballenaMoneyMan_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaMoneyMan.ballenaMoneyMan_C.UserConstructionScript");

	AballenaMoneyMan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaMoneyMan.ballenaMoneyMan_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AballenaMoneyMan_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaMoneyMan.ballenaMoneyMan_C.ReceiveBeginPlay");

	AballenaMoneyMan_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaMoneyMan.ballenaMoneyMan_C.tryGoingHome
// (BlueprintCallable, BlueprintEvent)

void AballenaMoneyMan_C::tryGoingHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaMoneyMan.ballenaMoneyMan_C.tryGoingHome");

	AballenaMoneyMan_C_tryGoingHome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaMoneyMan.ballenaMoneyMan_C.ExecuteUbergraph_ballenaMoneyMan
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AballenaMoneyMan_C::ExecuteUbergraph_ballenaMoneyMan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaMoneyMan.ballenaMoneyMan_C.ExecuteUbergraph_ballenaMoneyMan");

	AballenaMoneyMan_C_ExecuteUbergraph_ballenaMoneyMan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
