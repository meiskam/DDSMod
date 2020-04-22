
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

// Function areaMusicManager.areaMusicManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AareaMusicManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function areaMusicManager.areaMusicManager_C.UserConstructionScript");

	AareaMusicManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function areaMusicManager.areaMusicManager_C.shutDownAreaMusic
// (BlueprintCallable, BlueprintEvent)

void AareaMusicManager_C::shutDownAreaMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function areaMusicManager.areaMusicManager_C.shutDownAreaMusic");

	AareaMusicManager_C_shutDownAreaMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function areaMusicManager.areaMusicManager_C.restoreAreaMusicPlaying
// (BlueprintCallable, BlueprintEvent)

void AareaMusicManager_C::restoreAreaMusicPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function areaMusicManager.areaMusicManager_C.restoreAreaMusicPlaying");

	AareaMusicManager_C_restoreAreaMusicPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function areaMusicManager.areaMusicManager_C.ExecuteUbergraph_areaMusicManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AareaMusicManager_C::ExecuteUbergraph_areaMusicManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function areaMusicManager.areaMusicManager_C.ExecuteUbergraph_areaMusicManager");

	AareaMusicManager_C_ExecuteUbergraph_areaMusicManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
