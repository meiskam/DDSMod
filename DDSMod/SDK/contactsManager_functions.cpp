
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

// Function contactsManager.contactsManager_C.fixGerardMeeting
// (Public, BlueprintCallable, BlueprintEvent)

void AcontactsManager_C::fixGerardMeeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.fixGerardMeeting");

	AcontactsManager_C_fixGerardMeeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function contactsManager.contactsManager_C.checkHiringStatus
// (Public, BlueprintCallable, BlueprintEvent)

void AcontactsManager_C::checkHiringStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.checkHiringStatus");

	AcontactsManager_C_checkHiringStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function contactsManager.contactsManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AcontactsManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.UserConstructionScript");

	AcontactsManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function contactsManager.contactsManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AcontactsManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.ReceiveBeginPlay");

	AcontactsManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function contactsManager.contactsManager_C.generateWeedGuy
// (BlueprintCallable, BlueprintEvent)

void AcontactsManager_C::generateWeedGuy()
{
	static auto fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.generateWeedGuy");

	AcontactsManager_C_generateWeedGuy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function contactsManager.contactsManager_C.ExecuteUbergraph_contactsManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AcontactsManager_C::ExecuteUbergraph_contactsManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function contactsManager.contactsManager_C.ExecuteUbergraph_contactsManager");

	AcontactsManager_C_ExecuteUbergraph_contactsManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
