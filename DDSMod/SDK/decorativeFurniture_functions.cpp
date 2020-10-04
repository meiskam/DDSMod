
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

// Function decorativeFurniture.decorativeFurniture_C.respawnFurniture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AdecorativeFurniture_C::respawnFurniture()
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.respawnFurniture");

	AdecorativeFurniture_C_respawnFurniture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decorativeFurniture.decorativeFurniture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecorativeFurniture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.UserConstructionScript");

	AdecorativeFurniture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decorativeFurniture.decorativeFurniture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecorativeFurniture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.ReceiveBeginPlay");

	AdecorativeFurniture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decorativeFurniture.decorativeFurniture_C.ExecuteUbergraph_decorativeFurniture
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecorativeFurniture_C::ExecuteUbergraph_decorativeFurniture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decorativeFurniture.decorativeFurniture_C.ExecuteUbergraph_decorativeFurniture");

	AdecorativeFurniture_C_ExecuteUbergraph_decorativeFurniture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
