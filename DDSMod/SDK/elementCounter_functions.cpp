
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

// Function elementCounter.elementCounter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AelementCounter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function elementCounter.elementCounter_C.UserConstructionScript");

	AelementCounter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elementCounter.elementCounter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AelementCounter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function elementCounter.elementCounter_C.ReceiveBeginPlay");

	AelementCounter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elementCounter.elementCounter_C.ExecuteUbergraph_elementCounter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AelementCounter_C::ExecuteUbergraph_elementCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function elementCounter.elementCounter_C.ExecuteUbergraph_elementCounter");

	AelementCounter_C_ExecuteUbergraph_elementCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
