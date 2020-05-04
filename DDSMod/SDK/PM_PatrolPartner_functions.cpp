
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

// Function PM_PatrolPartner.PM_PatrolPartner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APM_PatrolPartner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.UserConstructionScript");

	APM_PatrolPartner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolPartner.PM_PatrolPartner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APM_PatrolPartner_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.ReceiveBeginPlay");

	APM_PatrolPartner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolPartner.PM_PatrolPartner_C.SetupPartner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APM_PatrolLead_C*        LeadRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APM_PatrolPartner_C::SetupPartner(class APM_PatrolLead_C* LeadRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.SetupPartner");

	APM_PatrolPartner_C_SetupPartner_Params params;
	params.LeadRef = LeadRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolPartner.PM_PatrolPartner_C.EngageSuspect
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolPartner_C::EngageSuspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.EngageSuspect");

	APM_PatrolPartner_C_EngageSuspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolPartner.PM_PatrolPartner_C.SyncWithPartner
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolPartner_C::SyncWithPartner()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.SyncWithPartner");

	APM_PatrolPartner_C_SyncWithPartner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolPartner.PM_PatrolPartner_C.ExecuteUbergraph_PM_PatrolPartner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APM_PatrolPartner_C::ExecuteUbergraph_PM_PatrolPartner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolPartner.PM_PatrolPartner_C.ExecuteUbergraph_PM_PatrolPartner");

	APM_PatrolPartner_C_ExecuteUbergraph_PM_PatrolPartner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
