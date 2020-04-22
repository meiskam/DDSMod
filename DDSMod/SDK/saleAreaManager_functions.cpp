
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

// Function saleAreaManager.saleAreaManager_C.onLoadScripts
// (Public, BlueprintCallable, BlueprintEvent)

void AsaleAreaManager_C::onLoadScripts()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.onLoadScripts");

	AsaleAreaManager_C_onLoadScripts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.adaptDifficulty
// (Public, BlueprintCallable, BlueprintEvent)

void AsaleAreaManager_C::adaptDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.adaptDifficulty");

	AsaleAreaManager_C_adaptDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.checkSectorBAreas
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           _3Unlocked                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsaleAreaManager_C::checkSectorBAreas(bool* _3Unlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.checkSectorBAreas");

	AsaleAreaManager_C_checkSectorBAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_3Unlocked != nullptr)
		*_3Unlocked = params._3Unlocked;
}


// Function saleAreaManager.saleAreaManager_C.checkAreaRespect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           LowRespect                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsaleAreaManager_C::checkAreaRespect(bool* LowRespect)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.checkAreaRespect");

	AsaleAreaManager_C_checkAreaRespect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LowRespect != nullptr)
		*LowRespect = params.LowRespect;
}


// Function saleAreaManager.saleAreaManager_C.displayExposure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AsaleAreaManager_C::displayExposure()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.displayExposure");

	AsaleAreaManager_C_displayExposure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.returnAvailableAreas
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FString>         AreaList                       (Parm, OutParm, ZeroConstructor)
// int                            NumAreas                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AreaClientsMax                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AsaleAreaManager_C::returnAvailableAreas(TArray<struct FString>* AreaList, int* NumAreas, int* AreaClientsMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.returnAvailableAreas");

	AsaleAreaManager_C_returnAvailableAreas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AreaList != nullptr)
		*AreaList = params.AreaList;
	if (NumAreas != nullptr)
		*NumAreas = params.NumAreas;
	if (AreaClientsMax != nullptr)
		*AreaClientsMax = params.AreaClientsMax;
}


// Function saleAreaManager.saleAreaManager_C.addAreaExposure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 stringnam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaleAreaManager_C::addAreaExposure(const struct FString& stringnam, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.addAreaExposure");

	AsaleAreaManager_C_addAreaExposure_Params params;
	params.stringnam = stringnam;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.dropExposure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaleAreaManager_C::dropExposure(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.dropExposure");

	AsaleAreaManager_C_dropExposure_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsaleAreaManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.UserConstructionScript");

	AsaleAreaManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsaleAreaManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.ReceiveBeginPlay");

	AsaleAreaManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaleAreaManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.ReceiveTick");

	AsaleAreaManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.updateExpoStatus
// (BlueprintCallable, BlueprintEvent)

void AsaleAreaManager_C::updateExpoStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.updateExpoStatus");

	AsaleAreaManager_C_updateExpoStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.newAreaUnlocked
// (BlueprintCallable, BlueprintEvent)

void AsaleAreaManager_C::newAreaUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.newAreaUnlocked");

	AsaleAreaManager_C_newAreaUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.checkAreaStatuses
// (BlueprintCallable, BlueprintEvent)

void AsaleAreaManager_C::checkAreaStatuses()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.checkAreaStatuses");

	AsaleAreaManager_C_checkAreaStatuses_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.checkAreaAvailability
// (BlueprintCallable, BlueprintEvent)

void AsaleAreaManager_C::checkAreaAvailability()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.checkAreaAvailability");

	AsaleAreaManager_C_checkAreaAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManager.saleAreaManager_C.ExecuteUbergraph_saleAreaManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaleAreaManager_C::ExecuteUbergraph_saleAreaManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManager.saleAreaManager_C.ExecuteUbergraph_saleAreaManager");

	AsaleAreaManager_C_ExecuteUbergraph_saleAreaManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
