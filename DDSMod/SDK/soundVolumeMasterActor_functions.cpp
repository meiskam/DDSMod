
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

// Function soundVolumeMasterActor.soundVolumeMasterActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsoundVolumeMasterActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function soundVolumeMasterActor.soundVolumeMasterActor_C.UserConstructionScript");

	AsoundVolumeMasterActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function soundVolumeMasterActor.soundVolumeMasterActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsoundVolumeMasterActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function soundVolumeMasterActor.soundVolumeMasterActor_C.ReceiveBeginPlay");

	AsoundVolumeMasterActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function soundVolumeMasterActor.soundVolumeMasterActor_C.ExecuteUbergraph_soundVolumeMasterActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsoundVolumeMasterActor_C::ExecuteUbergraph_soundVolumeMasterActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function soundVolumeMasterActor.soundVolumeMasterActor_C.ExecuteUbergraph_soundVolumeMasterActor");

	AsoundVolumeMasterActor_C_ExecuteUbergraph_soundVolumeMasterActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
