
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

// Function ambientSoundsControler.ambientSoundsControler_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AambientSoundsControler_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ambientSoundsControler.ambientSoundsControler_C.UserConstructionScript");

	AambientSoundsControler_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ambientSoundsControler.ambientSoundsControler_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AambientSoundsControler_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ambientSoundsControler.ambientSoundsControler_C.ReceiveBeginPlay");

	AambientSoundsControler_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ambientSoundsControler.ambientSoundsControler_C.updateSounds
// (BlueprintCallable, BlueprintEvent)

void AambientSoundsControler_C::updateSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ambientSoundsControler.ambientSoundsControler_C.updateSounds");

	AambientSoundsControler_C_updateSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ambientSoundsControler.ambientSoundsControler_C.ExecuteUbergraph_ambientSoundsControler
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AambientSoundsControler_C::ExecuteUbergraph_ambientSoundsControler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ambientSoundsControler.ambientSoundsControler_C.ExecuteUbergraph_ambientSoundsControler");

	AambientSoundsControler_C_ExecuteUbergraph_ambientSoundsControler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
