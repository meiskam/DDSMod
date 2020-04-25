
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

// Function backpackBase.backpackBase_C.checkBackpackEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AbackpackBase_C::checkBackpackEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.checkBackpackEmpty");

	AbackpackBase_C_checkBackpackEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AbackpackBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.UserConstructionScript");

	AbackpackBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AbackpackBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.ReceiveBeginPlay");

	AbackpackBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbackpackBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.ReceiveTick");

	AbackpackBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function backpackBase.backpackBase_C.ExecuteUbergraph_backpackBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AbackpackBase_C::ExecuteUbergraph_backpackBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function backpackBase.backpackBase_C.ExecuteUbergraph_backpackBase");

	AbackpackBase_C_ExecuteUbergraph_backpackBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
