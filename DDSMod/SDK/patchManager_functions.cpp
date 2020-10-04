
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function patchManager.patchManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApatchManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function patchManager.patchManager_C.UserConstructionScript");

	ApatchManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function patchManager.patchManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApatchManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function patchManager.patchManager_C.ReceiveBeginPlay");

	ApatchManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function patchManager.patchManager_C.activatePatchingScript
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScriptIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApatchManager_C::activatePatchingScript(int ScriptIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function patchManager.patchManager_C.activatePatchingScript");

	ApatchManager_C_activatePatchingScript_Params params;
	params.ScriptIndex = ScriptIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function patchManager.patchManager_C.ExecuteUbergraph_patchManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApatchManager_C::ExecuteUbergraph_patchManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function patchManager.patchManager_C.ExecuteUbergraph_patchManager");

	ApatchManager_C_ExecuteUbergraph_patchManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
