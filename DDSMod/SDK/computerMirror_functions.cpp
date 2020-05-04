
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

// Function computerMirror.computerMirror_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AcomputerMirror_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.UserConstructionScript");

	AcomputerMirror_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function computerMirror.computerMirror_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AcomputerMirror_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.ReceiveBeginPlay");

	AcomputerMirror_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function computerMirror.computerMirror_C.openComputer
// (BlueprintCallable, BlueprintEvent)

void AcomputerMirror_C::openComputer()
{
	static auto fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.openComputer");

	AcomputerMirror_C_openComputer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function computerMirror.computerMirror_C.retryRef
// (BlueprintCallable, BlueprintEvent)

void AcomputerMirror_C::retryRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.retryRef");

	AcomputerMirror_C_retryRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function computerMirror.computerMirror_C.storeMeBack
// (BlueprintCallable, BlueprintEvent)

void AcomputerMirror_C::storeMeBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.storeMeBack");

	AcomputerMirror_C_storeMeBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function computerMirror.computerMirror_C.ExecuteUbergraph_computerMirror
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AcomputerMirror_C::ExecuteUbergraph_computerMirror(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function computerMirror.computerMirror_C.ExecuteUbergraph_computerMirror");

	AcomputerMirror_C_ExecuteUbergraph_computerMirror_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
