
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

// Function extinguishPoliceCar.extinguishPoliceCar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AextinguishPoliceCar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function extinguishPoliceCar.extinguishPoliceCar_C.UserConstructionScript");

	AextinguishPoliceCar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function extinguishPoliceCar.extinguishPoliceCar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AextinguishPoliceCar_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function extinguishPoliceCar.extinguishPoliceCar_C.ReceiveTick");

	AextinguishPoliceCar_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function extinguishPoliceCar.extinguishPoliceCar_C.startMoving
// (BlueprintCallable, BlueprintEvent)

void AextinguishPoliceCar_C::startMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function extinguishPoliceCar.extinguishPoliceCar_C.startMoving");

	AextinguishPoliceCar_C_startMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function extinguishPoliceCar.extinguishPoliceCar_C.ExecuteUbergraph_extinguishPoliceCar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AextinguishPoliceCar_C::ExecuteUbergraph_extinguishPoliceCar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function extinguishPoliceCar.extinguishPoliceCar_C.ExecuteUbergraph_extinguishPoliceCar");

	AextinguishPoliceCar_C_ExecuteUbergraph_extinguishPoliceCar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
