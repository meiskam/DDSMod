
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

// Function technicalPassageTeleport.technicalPassageTeleport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtechnicalPassageTeleport_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.UserConstructionScript");

	AtechnicalPassageTeleport_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function technicalPassageTeleport.technicalPassageTeleport_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AtechnicalPassageTeleport_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.ReceiveBeginPlay");

	AtechnicalPassageTeleport_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function technicalPassageTeleport.technicalPassageTeleport_C.activatePassage
// (BlueprintCallable, BlueprintEvent)

void AtechnicalPassageTeleport_C::activatePassage()
{
	static auto fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.activatePassage");

	AtechnicalPassageTeleport_C_activatePassage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function technicalPassageTeleport.technicalPassageTeleport_C.checkSectorUnlock
// (BlueprintCallable, BlueprintEvent)

void AtechnicalPassageTeleport_C::checkSectorUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.checkSectorUnlock");

	AtechnicalPassageTeleport_C_checkSectorUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function technicalPassageTeleport.technicalPassageTeleport_C.ExecuteUbergraph_technicalPassageTeleport
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtechnicalPassageTeleport_C::ExecuteUbergraph_technicalPassageTeleport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function technicalPassageTeleport.technicalPassageTeleport_C.ExecuteUbergraph_technicalPassageTeleport");

	AtechnicalPassageTeleport_C_ExecuteUbergraph_technicalPassageTeleport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
