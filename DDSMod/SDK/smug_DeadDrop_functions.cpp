
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function smug_DeadDrop.smug_DeadDrop_C.findDeadDropRef
// (Public, BlueprintCallable, BlueprintEvent)

void Asmug_DeadDrop_C::findDeadDropRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function smug_DeadDrop.smug_DeadDrop_C.findDeadDropRef");

	Asmug_DeadDrop_C_findDeadDropRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smug_DeadDrop.smug_DeadDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Asmug_DeadDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function smug_DeadDrop.smug_DeadDrop_C.UserConstructionScript");

	Asmug_DeadDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smug_DeadDrop.smug_DeadDrop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Asmug_DeadDrop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function smug_DeadDrop.smug_DeadDrop_C.ReceiveBeginPlay");

	Asmug_DeadDrop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function smug_DeadDrop.smug_DeadDrop_C.ExecuteUbergraph_smug_DeadDrop
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Asmug_DeadDrop_C::ExecuteUbergraph_smug_DeadDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function smug_DeadDrop.smug_DeadDrop_C.ExecuteUbergraph_smug_DeadDrop");

	Asmug_DeadDrop_C_ExecuteUbergraph_smug_DeadDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
