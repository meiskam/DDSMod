
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ballenaClubManager.ballenaClubManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AballenaClubManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaClubManager.ballenaClubManager_C.UserConstructionScript");

	AballenaClubManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaClubManager.ballenaClubManager_C.openClub
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           allowEnter                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AballenaClubManager_C::openClub(bool allowEnter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaClubManager.ballenaClubManager_C.openClub");

	AballenaClubManager_C_openClub_Params params;
	params.allowEnter = allowEnter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaClubManager.ballenaClubManager_C.closeClub
// (BlueprintCallable, BlueprintEvent)

void AballenaClubManager_C::closeClub()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaClubManager.ballenaClubManager_C.closeClub");

	AballenaClubManager_C_closeClub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaClubManager.ballenaClubManager_C.ExecuteUbergraph_ballenaClubManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AballenaClubManager_C::ExecuteUbergraph_ballenaClubManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaClubManager.ballenaClubManager_C.ExecuteUbergraph_ballenaClubManager");

	AballenaClubManager_C_ExecuteUbergraph_ballenaClubManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
