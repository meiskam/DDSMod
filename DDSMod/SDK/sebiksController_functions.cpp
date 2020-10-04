
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

// Function sebiksController.sebiksController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsebiksController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function sebiksController.sebiksController_C.UserConstructionScript");

	AsebiksController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sebiksController.sebiksController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsebiksController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function sebiksController.sebiksController_C.ReceiveBeginPlay");

	AsebiksController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sebiksController.sebiksController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsebiksController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function sebiksController.sebiksController_C.ReceiveTick");

	AsebiksController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sebiksController.sebiksController_C.tryRespawn
// (BlueprintCallable, BlueprintEvent)

void AsebiksController_C::tryRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function sebiksController.sebiksController_C.tryRespawn");

	AsebiksController_C_tryRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sebiksController.sebiksController_C.ExecuteUbergraph_sebiksController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsebiksController_C::ExecuteUbergraph_sebiksController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sebiksController.sebiksController_C.ExecuteUbergraph_sebiksController");

	AsebiksController_C_ExecuteUbergraph_sebiksController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
