
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

// Function keijiTerritoryLook.keijiTerritoryLook_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AkeijiTerritoryLook_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiTerritoryLook.keijiTerritoryLook_C.UserConstructionScript");

	AkeijiTerritoryLook_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiTerritoryLook.keijiTerritoryLook_C.playerLookedAt
// (BlueprintCallable, BlueprintEvent)

void AkeijiTerritoryLook_C::playerLookedAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiTerritoryLook.keijiTerritoryLook_C.playerLookedAt");

	AkeijiTerritoryLook_C_playerLookedAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keijiTerritoryLook.keijiTerritoryLook_C.ExecuteUbergraph_keijiTerritoryLook
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AkeijiTerritoryLook_C::ExecuteUbergraph_keijiTerritoryLook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keijiTerritoryLook.keijiTerritoryLook_C.ExecuteUbergraph_keijiTerritoryLook");

	AkeijiTerritoryLook_C_ExecuteUbergraph_keijiTerritoryLook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
