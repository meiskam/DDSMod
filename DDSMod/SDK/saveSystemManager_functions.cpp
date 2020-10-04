
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

// Function saveSystemManager.saveSystemManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsaveSystemManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSystemManager.saveSystemManager_C.UserConstructionScript");

	AsaveSystemManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveSystemManager.saveSystemManager_C.SaveGame
// (BlueprintCallable, BlueprintEvent)

void AsaveSystemManager_C::SaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSystemManager.saveSystemManager_C.SaveGame");

	AsaveSystemManager_C_SaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveSystemManager.saveSystemManager_C.ExecuteUbergraph_saveSystemManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaveSystemManager_C::ExecuteUbergraph_saveSystemManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveSystemManager.saveSystemManager_C.ExecuteUbergraph_saveSystemManager");

	AsaveSystemManager_C_ExecuteUbergraph_saveSystemManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
