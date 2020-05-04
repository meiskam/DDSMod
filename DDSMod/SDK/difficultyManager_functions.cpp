
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

// Function difficultyManager.difficultyManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdifficultyManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function difficultyManager.difficultyManager_C.UserConstructionScript");

	AdifficultyManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function difficultyManager.difficultyManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdifficultyManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function difficultyManager.difficultyManager_C.ReceiveBeginPlay");

	AdifficultyManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function difficultyManager.difficultyManager_C.applyDifficultyRuntime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EdifficultyLevels> NewDifficulty                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdifficultyManager_C::applyDifficultyRuntime(TEnumAsByte<EdifficultyLevels> NewDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function difficultyManager.difficultyManager_C.applyDifficultyRuntime");

	AdifficultyManager_C_applyDifficultyRuntime_Params params;
	params.NewDifficulty = NewDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function difficultyManager.difficultyManager_C.ExecuteUbergraph_difficultyManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdifficultyManager_C::ExecuteUbergraph_difficultyManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function difficultyManager.difficultyManager_C.ExecuteUbergraph_difficultyManager");

	AdifficultyManager_C_ExecuteUbergraph_difficultyManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
