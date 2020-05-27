
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function atmMachine.atmMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AatmMachine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmMachine.atmMachine_C.UserConstructionScript");

	AatmMachine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmMachine.atmMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AatmMachine_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmMachine.atmMachine_C.ReceiveBeginPlay");

	AatmMachine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmMachine.atmMachine_C.activateATM
// (BlueprintCallable, BlueprintEvent)

void AatmMachine_C::activateATM()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmMachine.atmMachine_C.activateATM");

	AatmMachine_C_activateATM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmMachine.atmMachine_C.Deactivate
// (BlueprintCallable, BlueprintEvent)

void AatmMachine_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmMachine.atmMachine_C.Deactivate");

	AatmMachine_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmMachine.atmMachine_C.unlockAtm
// (BlueprintCallable, BlueprintEvent)

void AatmMachine_C::unlockAtm()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmMachine.atmMachine_C.unlockAtm");

	AatmMachine_C_unlockAtm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function atmMachine.atmMachine_C.ExecuteUbergraph_atmMachine
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AatmMachine_C::ExecuteUbergraph_atmMachine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function atmMachine.atmMachine_C.ExecuteUbergraph_atmMachine");

	AatmMachine_C_ExecuteUbergraph_atmMachine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
