
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

// Function gangDeadDropBase.gangDeadDropBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AgangDeadDropBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.UserConstructionScript");

	AgangDeadDropBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangDeadDropBase.gangDeadDropBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AgangDeadDropBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.ReceiveBeginPlay");

	AgangDeadDropBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangDeadDropBase.gangDeadDropBase_C.clearDeadDrop
// (BlueprintCallable, BlueprintEvent)

void AgangDeadDropBase_C::clearDeadDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.clearDeadDrop");

	AgangDeadDropBase_C_clearDeadDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangDeadDropBase.gangDeadDropBase_C.checkEnabled
// (BlueprintCallable, BlueprintEvent)

void AgangDeadDropBase_C::checkEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.checkEnabled");

	AgangDeadDropBase_C_checkEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangDeadDropBase.gangDeadDropBase_C.ExecuteUbergraph_gangDeadDropBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgangDeadDropBase_C::ExecuteUbergraph_gangDeadDropBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangDeadDropBase.gangDeadDropBase_C.ExecuteUbergraph_gangDeadDropBase");

	AgangDeadDropBase_C_ExecuteUbergraph_gangDeadDropBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
