
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

// Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WorldTimeAndConditions_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.UserConstructionScript");

	ABP_WorldTimeAndConditions_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WorldTimeAndConditions_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ReceiveBeginPlay");

	ABP_WorldTimeAndConditions_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ShadowsSettingsChanged
// (Event, Public, BlueprintEvent)

void ABP_WorldTimeAndConditions_C::ShadowsSettingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ShadowsSettingsChanged");

	ABP_WorldTimeAndConditions_C_ShadowsSettingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.updateShadowStatus
// (BlueprintCallable, BlueprintEvent)

void ABP_WorldTimeAndConditions_C::updateShadowStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.updateShadowStatus");

	ABP_WorldTimeAndConditions_C_updateShadowStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.InWorldInitiated
// (Event, Public, BlueprintEvent)

void ABP_WorldTimeAndConditions_C::InWorldInitiated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.InWorldInitiated");

	ABP_WorldTimeAndConditions_C_InWorldInitiated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ExecuteUbergraph_BP_WorldTimeAndConditions
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldTimeAndConditions_C::ExecuteUbergraph_BP_WorldTimeAndConditions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldTimeAndConditions.BP_WorldTimeAndConditions_C.ExecuteUbergraph_BP_WorldTimeAndConditions");

	ABP_WorldTimeAndConditions_C_ExecuteUbergraph_BP_WorldTimeAndConditions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
